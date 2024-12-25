#include <iostream>
using namespace std;
class stack
{
private:
    int s[100];
    int top;

public:
    stack()
    {
        top = -1;
    }
    ~stack()
    {
        top = -1;
    }
    void push(int value)
    {
        if (top == 99)
        {
            cout << "stack overflow" << endl;
        }
        else
        {
            top++;
            s[top] = value;
        }
    }

    int isEmptystack()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int isStackFull()
    {
        if (top == 99)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int pop()
    {
        if (isEmptystack())
        {
            cout << "stack underflow" << endl;
        }
        else
        {
            top--;
            return s[top + 1];
        }
    }
    int Top()
    {
        if (isEmptystack())
        {
            cout << "stack underflow" << endl;
            return -1;
        }
        else
        {
            return s[top];
        }
    }
    int size()
    {
        return top + 1;
    }
};
int main()
{
    stack num;
    int choice;
    
    while (choice != 5)
    {
        cout << "1. push" << endl;
        cout << "2. pop" << endl;
        cout << "3. get top" << endl;
        cout << "4. get size" << endl;
        cout << "5. exit" << endl;
        cout << "enter your choice:" << endl;
    cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int value;
            cout << "enter a number:" << endl;
            cin >> value;
            num.push(value);
            break;
        }
        case 2:
        {
            int value = num.pop();
            cout << "deleted value:" << value << endl;
            break;
        }
        case 3:
        {
            int value = num.Top();
            cout << "top value is:" << value << endl;
            break;
        }
        case 4:
        {
            cout << "size of the stack is:" << num.size() << endl;
            break;
        }
        case 5:
        {
            exit(0);
        }
        }
    }
    return 0;
}