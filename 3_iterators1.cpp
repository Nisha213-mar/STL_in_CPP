#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={2,3,4,6,7};
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<pair<int,int>> v_p={{1,2},{2,3},{3,4},{4,5}};
    vector<pair<int,int>> :: iterator it;
    for(it=v_p.begin();it!=v_p.end();++it){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    for(it=v_p.begin();it !=v_p.end();++it){
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }
    //(*it).first <=> (it->first)
}
