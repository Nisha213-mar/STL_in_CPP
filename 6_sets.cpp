#include<bits/stdc++.h>
using namespace std;

void print(multiset<string> &s){
    for(string value: s){
        cout<<value<<endl;
    }
}
int main(){
    //set<string> s;
    multiset<string> s;
    s.insert("abc");//log(n)
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");
    /*auto it=s.find("abc");
    if(it !=s.end()){
        s.erase(it);
    }*/
    print(s);
}