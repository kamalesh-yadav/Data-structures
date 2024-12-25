#include <iostream>
using namespace std;
class gsnumber
{
private:
    int arr[5], i;

public:
    void input()
    {
        cout << "enter five numbers" << endl;
        for (i = 1; i <= 5; i++)
        {
            cin >> arr[i];
        }
    }
    int maxnum()
    {
        int max = arr[0];
        for (i = 0; i <= 4; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        return max;
    }
    int minnum()
    {
        int min = arr[0];
        for (i = 0; i <= 4; i++)
        {
            if (min > arr[i])
            {
                min = arr[i];
            }
        }
        return min;
    }
};
int main()
{
    gsnumber num;
    num.input();
    cout << endl
         << "maximum:" << num.maxnum() << endl;
    cout << endl
         << "minimum:" << num.minnum() << endl;
    return 0;
}
