#include <iostream>
using namespace std;
class unique
{
private:
    int arr[5];
    int i;

public:
    void input()
    {
        cout << "enter five integer vaalues" << endl;
        for (i = 0; i < 5; i++)
            cin >> arr[i];
    }

    void duplicate()
    {
        int num = arr[0];
        for (i = 1; i < 5; i++)
        {
            if (num == arr[i])
            {
                num = arr[i];
                cout << "duplicate found:" << num << endl;
            }
        }
        num = arr[1];
        for (i = 2; i < 5; i++)
        {
            if (num == arr[i])
            {
                cout << "duplicate found:" << num << endl;
            }
        }
        num = arr[2];
        for (i = 3; i < 5; i++)
        {
            if (num == arr[i])
            {
                cout << "duplicate found" << num << endl;
            }
        }
        num = arr[3];
        for (i = 4; i < 5; i++)
        {
            if (num == arr[i])
            {
                cout << "duplicate found:" << num << endl;
            }
        }
        cout<<"ALL UNIQUE"<<endl;
    }
    
    
};
int main()
{
    unique num;
    num.input();
    num.duplicate();
    return 0;
}
