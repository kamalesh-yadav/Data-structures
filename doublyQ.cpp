#include <iostream>
using namespace std;
class queue
{
private:
    int rear;
    int front;
    int size;
    int q[100];

public:
    queue()
    {
        front = -1;
        rear = -1;
        size = 100;
    }
    void insertatEnd(int v)
    {
        if (rear == -1)
        {
            rear++;
            front++;
            q[rear] = v;
        }
        else
        {
            if (rear == size - 1)
            {
                cout << "overflow";
            }
            else
            {

                q[++rear] = v;
            }
        }
    }
    void deleteatfront()
    {
        if (front == -1)
        {
            cout << "underflow" << endl;
        }
        else
        {
            if (rear == front)
            {
                cout << q[front] << " deleted" << endl;
                front = rear = -1;
            }
            else
            {
                cout << q[front] << " deleted" << endl;
                front++;
            }
        }
    }
    void deleteatEnd()
    {
        if (rear == -1)
        {
            cout << "underflow" << endl;
        }
        else
        {
            if (rear == front)
            {
                cout << q[rear] << " deleted " << endl;
                front = rear = -1;
            }
            else
            {
                cout << q[rear] << " deleted " << endl;
                rear--;
            }
        }
    }
    void insertatbegin(int v)
    {
        if (front == -1)
        {
            rear++;
            front++;
            q[front] = v;
        }
        else
        {
            if (rear == size - 1)
            {
                cout << "overflow";
            }
            else
            {
                for (int i = rear; i >= front; i--)
                {
                    q[i + 1] = q[i];
                }
                rear++;
                q[front] = v;
            }
        }
    }
    void printqueue()
    {
        if (front == -1)
        {
            cout << "queue is empty" << endl;
            return;
        }
        for (int i = front; i <= rear; i++)
        {
            cout << q[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    queue num;
    num.insertatEnd(5);
    num.insertatEnd(10);
    num.insertatEnd(15);
    num.insertatbegin(50);
    num.insertatbegin(100);
    num.deleteatfront();
    num.deleteatEnd();
    num.insertatEnd(100);
    num.deleteatfront();
    num.deleteatEnd();
    num.deleteatfront();
    num.deleteatfront();
    num.deleteatEnd();


    num.printqueue();
}
