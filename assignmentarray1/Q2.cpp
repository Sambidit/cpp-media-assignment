#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the no. of elements : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]) max=arr[i];
    }
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=max && smax<arr[i]) smax=arr[i];
    }
    cout<<"Second largest element : "<<smax;
}