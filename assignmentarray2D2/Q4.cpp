#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int matrix[n][n];
    int minc=0,minr=0,maxc=n-1,maxr=n-1,tne=n*n,count=0,a=1;
        while(count<tne){
            for(int j=minc;j<=maxc && count<tne;j++){
                matrix[minr][j]=a++;
                count++;
            }
            minr++;
            for(int i=minr;i<=maxr && count<tne;i++){
                matrix[i][maxc]=a++;
                count++;
            }
            maxc--;
            for(int j=maxc;j>=minc && count<tne;j--){
                matrix[maxr][j]=a++;
                count++;
            }
            maxr--;
            for(int i=maxr;i>=minr && count<tne;i--){
                matrix[i][minc]=a++;
                count++;
            }
            minc++;
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}