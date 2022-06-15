/*In each Query you are given a string print YEs if string is present else print no

N<= 10^6
|s| <=100
Q <= 10^6*/

#include<bits/stdc++.h>
using namespace std;
 int main(){
    unordered_set<string> s;
    cout<<"Enter number\n";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);
    }
    int q;
    cin>>q;
    while(q--){
        string str;
        cin>>str;
        if(s.find(str)==s.end()){
            cout<<"no\n";
        }else{
            cout<<"yes\n";
        }
    }
    
 }