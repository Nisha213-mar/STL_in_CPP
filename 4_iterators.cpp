#include<bits/stdc++.h>
using namespace std;
 int main(){
    /*vector<pair<int,int>> v_p={{1,2},{2,3},{3,4},{4,5}};
    vector<pair<int,int>> :: iterator it;
    for(it=v_p.begin();it!=v_p.end();++it){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }*/
    vector<pair<int,int>>v_p={{1,2},{2,3}};
    for(auto &value: v_p){
        cout<<value.first<<" "<<value.second<<endl;
    }
    auto a=1.0;
    cout<<a<<endl;
 }