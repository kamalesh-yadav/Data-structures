#include <iostream>
using namespace std;
class length
{
private:
    int feet;
    int inch;
    int num1;
    int num2;

public:
    void takeinput()
    {
        cout << "enter length(feet)" << endl;
        cin >> feet;
        cout << "enter length(inch)" << endl;
        cin >> inch;
    }
    void conversion(length tempobj1, length tempobj2)
    {
        num1 = tempobj1.inch + tempobj1.feet * 12;
        num2 = tempobj2.inch + tempobj2.feet * 12;
    }
    void result()
    {
        if (num1 > num2)
        {
            cout << "num1 is greater:" << num1 << endl;
        }
        else
        {
            if (num1 == num2)
            {
                cout << "both are equal" << endl;
            }
            else
            {
                cout << "num2 is greater:"<<num2 << endl;
            }
        }
    }
};
int main()
{
    length l1, l2, l3;
    l1.takeinput();
    l2.takeinput();
    l3.conversion(l1, l2);
    l3.result();
    return 0;
}