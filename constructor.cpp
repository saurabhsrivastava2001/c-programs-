#include<iostream>
using namespace std;

class base {
  
    
    public:
    int id;
    base (int a){
        id=a;
        cout<<"base class initializer"<<endl;
    }
    void display(){
        cout<<id;
    }
    ~base(){
        cout<<"destructor is called";
    }
};

class der :public base{
    public:
    der():base(10){
        cout<<"der class initializer list"<<this->id;
    }

};
int main(){
    der a;
}