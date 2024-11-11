#include<iostream>
using namespace std;
int main(){
    int a=10;

    int*ptr=&a;
    for (int i=0;i<10;i++,cout<<*ptr<<endl,((*ptr)++)){}
}