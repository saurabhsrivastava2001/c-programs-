#include<iostream>
using namespace std;
int main(){
    int **arr = new int*[3];
    for(int i = 0; i < 3; i++) {
        arr[i] = new int[3]; 
    }
    int *counter =new int(0) ;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            arr[i][j] = *++counter;
        }
    }
    int *max =new int(0);
    int *current=new int(0) ;
    for (int i=0;i<3;++i, *max=*current>*max?*current:*max,*current=0){
       for (int j=0;j<3;++j,*current+=arr[i][j]){} 
    }
    cout<<*max;
}