#include<bits/stdc++.h>
using namespace std;
 int main(){
    map<int,string> m;
    m[1]="abc";
    m[5]="cdc";
    m[3]="acd";
    m.insert({4,"afg"});
    /*map<int,string> :: iterator it;
    for(it=m.begin();it!=m.end();++it){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }*/
    auto it=m.find(7);
    if(it!=m.end())
      m.erase(it);
    for(auto &pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
 }