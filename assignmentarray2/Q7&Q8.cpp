//   Q7


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
    int i=0,j=x-1;
    bool flag=true;
    while(i<j){
        if(arr[i]!=arr[j]){
        flag=false;
        break;
        }
        i++;
        j--;
    }
    if(flag==true){
        cout<<"It is a palendrom";
    }
    else cout<<"It is not a palendrom";
}


//   Q8

// array is not sent but rather a element is sent which is not intialised in function
// this {} brackets are not given in funtion