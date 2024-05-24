#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,z,j=-1,k=-1,l=-1;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>z;
        v.push_back(z);
    }
    for(int i=0;i<v.size();i++){
        if(v[i]>j) j=v[i];
    }
    for(int i=0;i<v.size();i++){
        if(v[i]!=j && v[i]>k) k=v[i];
    }
    for(int i=0;i<v.size();i++){
        if(v[i]!=j && v[i]!=k && v[i]>l) l=v[i];
    }
    cout<<l<<" "<<k<<" "<<j;
}