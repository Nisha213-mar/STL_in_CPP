#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int min=*min_element(v.begin(),v.end());
    cout<<min<<endl;
    int max=*max_element(v.begin(),v.end());
    cout<<max<<endl;
    int sum=accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;
    int ct=count(v.begin(),v.end(),2);
    cout<<ct<<endl;
   /* int element=find(v.begin(),v.end(),2);
    cout<<element<<endl;*/
    auto it=find(v.begin(),v.end(),10);
    if(it != v.end())
    cout<<*it<<endl;
    else
    cout<<"Element not found\n";
    reverse(v.begin()+2,v.end());
    for(auto val:v){
        cout<<val<<" ";
    }
    cout<<endl;
    
        return 0;
}