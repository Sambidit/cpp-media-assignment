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
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(min>arr[i]) min=arr[i];
    }
    cout<<"Minimum value element : "<<min;
}