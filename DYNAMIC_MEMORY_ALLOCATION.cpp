#include<iostream>
#include<string>
using namespace std;
int main() {
        int size=5;
        int *ptr;
        cout<<"enter array  elements"<<endl;
        ptr= new int [size];
        for (int i=0; i<size; i++){
            cin>>ptr[i];
        }
        for(int i=0; i<size; i++){
            cout<<ptr[i]<<endl;
        }
        delete[] ptr;


 }
