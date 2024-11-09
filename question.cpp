#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int N;
    cin >> N;
    int a ;
    for (int i = 0; i < N;i++,cin>>a,
        cout<<fixed<<setprecision(2)<<a/100.0<<"m"<<endl){}
}