#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int i=s.length()/2;
    int j=s.length()-1;
    while(i<j){
        int temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    cout<<s;
}