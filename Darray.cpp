#include <iostream>
using namespace std;
class dynamic
{
private:
    int *array;
    int size;
    int capacity;

public:
    int getsize()
    {
        return size;
    }
    int getcapacity()
    {
        return capacity;
    }
    dynamic()
    {
        array = new int[1];
        size = 0;
        capacity = 1;
    }

    ~dynamic()
    {
        delete[] array;
        size = 0;
        capacity = 0;
    }
    void insertByshift(int index, int value)
    {
        if (size == capacity)
        {
            resize();
        }
        if (index >= capacity)
        {
            cout << "memory does not exist" << endl;
        }
        for (int i = size; i >= index; i--)
        {
            array[i] = array[i - 1];
        }
        array[index] = value;
        size++;
    }
    void insert(int index, int value)
    {
        if (size == capacity)
        {
            resize();
        }
        if (index >= capacity)
        {
            cout << "memory does not exist" << endl;
        }
        array[index] = value;
        size++;
    }
    void printarray()
    {
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
        cout << "size =" << size << "capacity =" << capacity << endl;

        cout << endl;
    }
    void resize()
    {
        int *temp = new int[2 * capacity];
        for (int i = 0; i < size; i++)
        {
            temp[i] = array[i];
        }
        delete[] array;
        array = temp;
        capacity = 2 * size;
    }
    void deletee(int index)
    {
        if (index >= size)
        {
            cout << "index does not exist" << endl;
            return;
        }
        for (int i = index; i < size - 1; i++)
        {
            array[i] = array[i + 1];
        }
        size--;
    }
};
int main()
{
    dynamic num;
    int *a{new int[5]{1, 2, 3, 4, 5}};
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl;
    num.insert(0, 10);
    num.printarray();

    num.insert(1, 20);
    num.printarray();

    num.insert(2, 30);
    num.printarray();

    num.insert(3, 40);
    num.printarray();

    num.insert(4, 90);
    num.printarray();

    num.insertByshift(2, 100);
    num.printarray();

    num.deletee(4);
    num.printarray();
    return 0;
}