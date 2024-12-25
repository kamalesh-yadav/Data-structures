#include <iostream>
using namespace std;
class operations
{
private:
    int a;
    int b;
    float c;
    int d;

public:
    void input()
    {
        cout << "enter two numbers:" << endl;
        cin >> a >> b;
    }
    void choice()
    {
        cout << "press 1 for addition:" << endl;
        cout << "press 2 for substraction:" << endl;
        cout << "press 3 for multiplication:" << endl;
        cout << "press 4 for division:" << endl;
        cout << "enter your choice:" << endl;
        cin >> d;
        if (d>4)
        {
            cout << "wrong choice";
        }
    }
    void add()
    {
        if (d == 1)
        {
            c = a + b;
            cout << "the value is:" << c << endl;
        }
    }
    void subs()
    {
        if (d == 2)
        {

            c = a - b;
            cout << "the value of substraction:" << c << endl;
        }
    }
    void multi()
    {
        if (d == 3)
        {
            c = a * b;
            cout << "multiplication is:" << c << endl;
        }
    }
    void division()
    {
        if (d == 4)
        {
            c = a / b;
            cout << "division is:" << c << endl;
        }
    }
};
int main()
{
    operations num;
    num.input();
    num.choice();
    num.add();
    num.subs();
    num.multi();
    num.division();
    return 0;
}