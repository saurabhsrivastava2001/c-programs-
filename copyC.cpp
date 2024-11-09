#include<iostream>
#include<string>

using namespace std;

 class a{
    public:
    int id;
    a(){}
    a (const a& obj){
        this->id=obj.id;
    }

 };
 int main(){
    a obj1;
    obj1.id=10;
    a obj2=obj1;
    cout<<obj2.id;
 }