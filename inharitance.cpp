#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"a class func"<<endl;
    }
};

class B{
    public:
    void show(){
        cout<<"b class func"<<endl;
    }
};
class c:public A,public B{
    public:
    void show(){
        cout<<"c class func"<<endl;
    }
};
int main(){
    c c1;
    c1.show();
    c1.A::show();
    c1.B::show();
}