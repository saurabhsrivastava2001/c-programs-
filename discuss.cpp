#include <iostream>
#include<string>
using namespace std;

class a{
    public:a(){
        cout<<"a consttructor is called"<<endl;

    }
    ~a(){
        cout<<"a destructor is called"<<endl;
    }
};
class b:public a{
    public:
    b(){
        cout<<"b consttructor is called"<<endl;

    }
    ~b(){
        cout<<"b destructor is called"<<endl;
    }
};

class c:public b{
    public:
    c(){
        cout<<"c consttructor is called"<<endl;

    }
    ~c(){
        cout<<"c destructor is called"<<endl;
    }
};

int main(){
    c c1;
}