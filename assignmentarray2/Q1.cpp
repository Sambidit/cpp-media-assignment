#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x,n,z,j=0;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>z;
        v.push_back(z);
    }
    for(int i=0;i<v.size();i++){
        if(v[i]>x) j++;
    }
    cout<<j;
}