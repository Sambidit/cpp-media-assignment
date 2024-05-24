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
        if(i%2==0) arr[i]+=10;
        else{ 
            arr[i]*=2;
        }
        cout<<arr[i]<<" ";
    }
}