#include <iostream>
using namespace std;
class circular
{
private:
    int q[100];
    int rear;
    int front;
    int size;

public:
    circular()
    {
        front = -1;
        rear = -1;
        size = 100;
    }
    void enque(int v)
    {
        if (rear == -1)
        {
            rear++;
            front++;
            q[rear] = v;
        }
        else
        {
            if ((rear + 1) % size == front)
            {
                cout << "overflow" << endl;
            }
            else
            {
                rear = (rear + 1) % size;
                q[rear] = v;
            }
        }
    }
    void deque()
    {
        if (front == -1)
        {
            cout << "underflow" << endl;
        }
        else
        {
            if (rear == front)
            {
                cout << q[front] << " deleted " << endl;
                rear = front = -1;
            }
            else
            {
                cout << q[front] << " deleted " << endl;
                front = (front + 1) % size;
            }
        }
    }
    void print()
    {
        if (front == -1)
        {
            cout << "queue is empty" << endl;
            return;
        }
        for (int i = front; i % size != rear; i = (i + 1) % size)
        {
            cout << q[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    circular num;
    num.enque(5);
    num.enque(10);
    num.enque(20);
    num.enque(30);
    num.enque(40);
    num.enque(50);
    num.print();
    num.deque();
    num.deque();
    num.deque();
    
    num.print();
    num.enque(60);
    num.enque(70);
    num.print();
}