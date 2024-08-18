#include<iostream>
#include<string>
using namespace std;
bool palendrom(string s){
    int i=0;
    int j=s.length()-1;
    while(i<j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}
int main(){
    string s;
    getline(cin,s);
    if(palendrom(s)==true) cout<<"IS A PALENDROM";
    else cout<<"IS NOT A PALENDROM";
}