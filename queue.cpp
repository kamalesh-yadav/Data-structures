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
    void enqueue(int v)
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
    void dequeue()
    {
        if (front == -1)
        {
            cout << "underflow" << endl;
        }
        else
        {
            if (rear == front)
            {
                cout << q[front] <<  " deleted" <<endl;
                front = rear = -1;
            }
            else
            {
                cout << q[front] <<  " deleted"<<endl ;
                front++;
            }
        }
    }
    void printqueue()
    {
        if(front==-1)
        {
            cout<<"queue is empty"<<endl;
            return;
        }
        for (int i = front; i <= rear; i++)
        {
            cout << q[i] << " ";
        }
        cout<<endl;
    }
};
int main()
{
    queue num;
    num.enqueue(5);
    num.enqueue(10);
    num.enqueue(15);

    num.printqueue();
    num.dequeue();
    num.dequeue();
    num.dequeue();
    num.dequeue();

    num.printqueue();


}
