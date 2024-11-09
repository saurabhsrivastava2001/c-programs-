#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b=7;
    for (int i=0;i<10;++i,a<b?a:b,++a,cout<<i<<" "<<a<<" "<<b<<endl){}
}

