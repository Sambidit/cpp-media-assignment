#include<iostream>
using namespace std;
int main(){
    int m=3,n=3;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    int p=3,q=3;
    int b[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]+b[i][j]<<" ";
        }
        cout<<endl;
    }
}