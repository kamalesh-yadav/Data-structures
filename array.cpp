#include <iostream>
using namespace std;
class Array
{
private:
    int a[100];
    int size = 0;

public:
    void insert(int index, int value)
    {
        a[index] = value;
        size++;
    }
    int get(int index)
    {
        return a[index];
    }
    int getsize()
    {
        return size;
    }
    int search(int value)
    {
        for (int i = 0; i < size; i++)
            if (value == a[i])
            {
                return i; // return index of value.
            }
        return -1; // value not found.
    }
    int deleteA(int index)
    {
        for (int i = index; i < size - 1; i++)
        {
            a[i] = a[i + 1];
        }
        a[size - 1] = 0;
        size--;
    }
    void printArray()
    {
        for (int i = 0; i < size; i++)
        {
            cout << a[i] << " ";
        }
            cout<<"size: "<<size<<endl;
    }
    int isertatp(int index, int value)
    {
        if (size == 100)
        {
            cout << "we cant insert the value" << endl;
        }
        else
        {
            for (int i = size - 1; i > index; i--)
            {
                a[i + 1] = a[i];
            }
            a[index] = value;
        }
    }
};
int main()
{
    int n;
    int x;
    int value;
    Array num;
    cout << "enter a number" << endl;
    cin >> n;
    cout << "enter " << n << "elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        num.insert(i, x);
    }
    for (int i = 0; i < num.getsize(); i++)
    {
        cout << num.get(i) << " " << endl;
    }
    cout << "enter element u want to search:" << endl;
    cin >> value;
    int index = num.search(value);
    if (index != -1)
    {
        cout << "element found at " << index << endl;
    }
    else
    {
        cout << "element not found " << endl;
    }
    cout << "enter the index you want to delete:" << endl;
    cin >> index;
    num.deleteA(index);
    num.printArray();
    cout << "enter the index at which you want to insert" << endl;
    cin >> index;
    cout << "enter the value you want to insert:" << endl;
    cin >> value;
    num.isertatp(index, value);
    num.printArray();
    

    return 0;
}