#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    auto it=a.upper_bond();
    if(it==a.end()){
        cout<<"Not found";
        return 0;
    }
    cout<<(*it)<<endl;
}