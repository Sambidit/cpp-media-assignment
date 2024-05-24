#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter size of array : ";
    cin>>x;
    cout<<"Enter the elements : ";
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    for(int i=0;i<x;i++){
        bool flag=true;
        for(int j=0;j<x;j++){
            if(j==i) continue;
            if(arr[i]==arr[j]){
            flag=false;
            break;
            } 
        }
        if(flag==true){
            cout<<arr[i]<<" ";
        }
    }
}