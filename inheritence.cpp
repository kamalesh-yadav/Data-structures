#include<iostream>
using namespace std;
class empdetails{
    private:
    char str[20];
    public:
    void name(){
        cout<<"enter your name"<<endl;
        fgets(str,20,stdin);
        cin>>str;
    }
};
int main(){
    empdetails num;
    num.name();
    return 0;
}