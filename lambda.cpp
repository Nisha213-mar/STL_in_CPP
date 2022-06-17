#include<bits/stdc++.h>
using namespace std;

bool is_positive(int x){
    return x>0;
}
 int main(){
   // cout<<[](int x,int y){return x+y;}(4,7)<<endl;
   /*auto sum=[](int x,int y){return x+y;};
   cout<<sum(2,3);*/
  vector<int> v={2,4,6,7};
  cout<<all_of(v.begin(),v.end(),[](int x){return x%2==0;})<<endl;
  cout<<any_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;
  cout<<none_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;
 }