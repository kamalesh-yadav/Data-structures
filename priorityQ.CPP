#include <iostream>
using namespace std;

class priority
{
private:
    int rear;
    int front;
    int size;
    int q[100];

public:
    priority()
    {
        front = -1;
        rear = -1;
        size = 100;
    }
    void enque(int value)
    {
        if (front == -1)
        {
            front++;
            rear++;
            

            q[rear] = value;
        }
        else
        {
            int k;
            for (int i = front; i <= rear; i++)
            {
                if (value > q[i])
                {
                    k = i;
                    break;
                }
            }
            for (int i = k; i <= rear; i++)
            {
                q[i + 1] = q[i];
            }
            q[k] = value;
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
    priority num;
    num.enque(23);
    num.enque(44);
    num.enque(89);
    num.enque(90);
    num.printqueue();
}