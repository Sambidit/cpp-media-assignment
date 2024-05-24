#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,z,s1=0,s2=0;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>z;
        v.push_back(z);
    }
    for(int i=0;i<v.size();i++){
        if(i%2==0){
            s1+=v[i];
        }
        else s2+=v[i];
    }
    cout<<s1-s2;
}