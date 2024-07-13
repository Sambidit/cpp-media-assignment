#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int l1,r1,l2,r2;
    cout<<"Enter 1st cordinates : ";
    cin>>l1>>r1;
    cout<<"Enter 2nd cordinates : ";
    cin>>l2>>r2;
    int sum=0;
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum+=a[i][j];
        }
    }
    cout<<sum;
}