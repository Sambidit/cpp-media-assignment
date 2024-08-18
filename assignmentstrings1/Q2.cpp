// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     char str[n];
//     for(int i=0;i<n;i++){
//         cin>>str[i];
//     }
//     int count=0;
//     int i=0;
//     while(i<n){
//         if(str[i]!='a' && str[i]!='e' &&  str[i]!='i' &&  str[i]!='o' &&  str[i]!='u'){
//             count++;
//         }
//         i++;
//     }
//     cout<<count;
// }

#include<iostream>
#include<string>
using namespace std;
bool constant(char ch){
    if(ch<65) return false;
    else if(ch>90 && ch<97) return false;
    else if(ch>122) return false;
    else if(ch=='a' || ch=='A') return false;
    else if(ch=='e' || ch=='E') return false;
    else if(ch=='i' || ch=='I') return false;
    else if(ch=='o' || ch=='O') return false;
    else if(ch=='u' || ch=='U') return false;
    else return true;
}
int main(){
    string s;
    getline(cin,s);
    int count=0;
    for(int i=0;i<s.length();i++){
        if(constant(s[i])) count++;
    }
    cout<<count;
}