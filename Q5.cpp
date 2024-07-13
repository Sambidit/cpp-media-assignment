#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int maxsum=INT8_MIN;
    int maxrow=-1;
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
        if(sum>maxsum){
            maxsum=sum;
            maxrow=i;
        }
    }
    cout<<maxsum<<" "<<maxrow;
}