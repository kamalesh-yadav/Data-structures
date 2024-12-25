#include <iostream>
using namespace std;
class A
{
public:
   virtual void fun()
    {
        cout << "fun from class a" << endl;
    }
    void fun1()
    {
        cout << "fun1 from class a" << endl;
    }
    void fun2()
    {
        cout << "fun2 from class a" << endl;
    }
};
class B : public A
{
public:
    void fun()
    {
        cout << "fun from class B" << endl;
    }
    void fun1()
    {
        cout << "fun1 from class B" << endl;
    }
};
int main()
{
    A *obj;
    B objb;
    obj=&objb;
    obj->fun();
    obj->fun1();
    obj->fun2();
}