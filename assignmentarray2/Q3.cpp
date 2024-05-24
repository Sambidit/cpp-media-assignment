#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,z;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>z;
        v.push_back(z);
    }
    for(int i=0;i<v.size();i++){
        if(v[i]>v[i+1]){ 
        cout<<"Array is not sorted";
        break;
        }
        else cout<<"Array is sorted";
    }
}