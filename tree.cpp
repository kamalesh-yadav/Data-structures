#include <iostream>
using namespace std;
class tree
{
public:
    int a[20]={0};
    int size = 20;
    void insert(int v, int i)
    {
        if (i == 1)
        {
            a[i] = v;
        }
        else
        {
            if (a[i / 2] != 0 && i < size)
            {
                a[i] = v;
            }
            else
            {
                cout << "parent does not exist" << endl;
            }
        }
    }
    void insertleftchild(int v, int i)
    {
        if (a[i] != 0 && (2 * i) < size)
        {
            a[2 * i] = v;
        }
        else
        {
            cout << "parent not exist" << endl;
        }
    }
    void insertatright(int v, int i)
    {
        if (a[i] != 0 && (2 * i + 1) < size)
        {
            a[2 * i + 1] = v;
        }
        else
        {
            cout << "parent does not exist" << endl;
        }
    }
    void print()
    {
        int i;
        for (i = 1; i < size; i++)
        {
            if (a[i] != 0)
            {
                cout << a[i] << " ";
                 
            }else{
                cout<<" - ";
            }
           
        }
    }
};
int main()
{
    tree num;
    num.insert(5,1);
    num.insert(10,2);
    num.insert(15,5);
    num.insert(30,10);
    num.insert(40,21);
    num.print();
}
