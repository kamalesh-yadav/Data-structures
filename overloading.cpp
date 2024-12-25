#include<iostream>
using namespace std;
class A{
    public:
    void sum(int a,int b){
        return a+b;
    }
};
int main(){
    A num;
    
    cout<<"value:"<<num.sum(3,4)<<endl;

    return 0;
}