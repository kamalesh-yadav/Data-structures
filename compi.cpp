#include <iostream>
using namespace std;
class problem
{
private:
    int array[4];

    int size = 0;

public:
    void insert(int index, int value)
    {
        array[index] = value;
        size++;
    }
    void printarray()
    {
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
    }
    int getsize()
    {
        return size;
    }
    int get(int index)
    {
        return index;
    }
    int sum(int target)
    {
        int value;
        for (int i = 0; i < size - 1; i++)
        {
            value = array[i] + array[i + 1];
            if (value == target)
            {
                cout<<i<<","<<i+1<<endl;
            }
        }
    }
};
int main()
{

    problem num;
    num.insert(0, 2);
    num.insert(1, 7);
    num.insert(2, 11);
    num.insert(3, 15);
    num.getsize();
    num.sum(26);
    return 0;
}