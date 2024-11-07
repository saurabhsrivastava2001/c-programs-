#include <iostream>
#include <vector>
using namespace std;
int main(){
    //print first n numberz that have digit sum equal to k
    int n,k;
    cin>>n>>k;
    vector<int> ans_arr;
    int count=0;
    int dig_sum=0;

    for (int i=0;i<INT_MAX;i++){
        if(count==n){
            
            break;
        }
        int temp=i;
        while(temp>0){
            dig_sum+=temp%10;
            temp/=10;
        }
        
        if (dig_sum==k){
            count++;
            ans_arr.push_back(i);
        }
        dig_sum=0;
    }
    for(int i=0;i<ans_arr.size();i++){
        cout<<ans_arr[i]<<endl;
    }
    
}