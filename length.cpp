#include<iostream>
using namespace std;
class length{
    private:
    int feet;
    int inch;
    public:
    void takeinput(){
        cout<<"enter length(feet)"<<endl;
        cin>>feet;
        cout<<"enter length(inch)"<<endl;
        cin>>inch;
    }
    void addlength(length tempobj1,length tempobj2){
        int convertedfeet=0;
        inch=tempobj1.inch+tempobj2.inch;
        if(inch>=12){
            convertedfeet=inch/12;
            inch=inch%12;
            feet=tempobj1.feet+tempobj2.feet+convertedfeet;
        }
    }
    void result(){
        cout<<"added length:"<<feet<<"feet"<<inch<<"inch.";
    }
};
int main(){
    length l1,l2,l3;
    l1.takeinput();
    l2.takeinput();
    l3.addlength(l1,l2);
    l3.result();
}