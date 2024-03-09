#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no. of elements : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int smpe=1;
    for(int i=0;i<n;i++){
        if(arr[i]==smpe) smpe++;
        else break;
    }
    cout<<"Smallest missing positive integer : "<<smpe;
}