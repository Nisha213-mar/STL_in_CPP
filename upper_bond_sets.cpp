#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    set<int>s;
  map<int,int> m;
  for(int i=0;i<int(1e6);++i){
    s.insert(rand());
  }
  for(int i=0;i<int(1e6);++i){
    auto it=s.lower_bond(rand());
  }
    return 0;
}