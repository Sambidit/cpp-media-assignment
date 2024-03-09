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
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag=true;
                break;
            }
        }
    }
    if(flag==true) cout<<"Contains duplicate";
    else cout<<"Doesn't contains duplicate";
}