<h1>Standard Template Language in CPP</h1>

<h1>1.Pair in Stl</h1>

```cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,string> p;
    p={2,"abcd"};
    pair<int,string> &p1=p;
    p1.first=3;
    cout<<p.first<<" "<<p.second<<endl;
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    swap(p_array[0],p_array[2]);
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second;
        
            }
}
```
<h1>2.Vextor in STL</h1>

```cpp
//2 Vectors in cpp

#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> v){
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    }
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x); //O(1)
    }
    printVec(v);
}
```

<h1>3.Iterators in STL</h1>
<h2>3_1</h2>

```cpp
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
```
<h2>3_2</h2>

```cpp
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
 ```

 <h1>5. MAPS in STL</h1>
 <h2>5_1 Normal Maps</h2>


 ```cpp
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
 ```
 <h2>5_2 Unordered_Maps in STL</h2>

 ```cpp
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
```
<h1>6. Sets in STL</h1>

```cpp
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
```

<h2>MultiSets in STL</h2>

```cpp
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        multiset<long long> bags;
        for(int i=0;i<n;i++){
            long long candy_ct;
            cin>>candy_ct;
            bags.insert(candy_ct);
        }
        long long total_candies=0;
        for(int i=0;i<k;i++){
            auto last_it=(--bags.end());
            long long candy_ct=*last_it;
            total_candies+=candy_ct;
            bags.erase(last_it);
            bags.insert(candy_ct/2);
        }
        cout<<total_candies<<endl;
    }
}
```

<h1>Nested Sets:</h1>

```cpp
#include<bits/stdc++.h>
using namespace std;

int main(){
    /*map<set<int>,int> m;
    set<int> s1={1,2,3};
    set<int> s2={2,3};
    cout<<(s1<s2);*/
   map<pair<string,string>,vector<int>>m;
   set<pair<int,int>>st;
   int n;
   cin>>n;
   for(int i=0;i<n;++i){
    string fn,ln;
    int ct;
    cin>>fn>>ln>>ct;
    for(int j=0;j<ct;j++){
        int x;
        cin>>x;
        m[{fn,ln}].push_back(x);
    }
   }
   for(auto &pr : m){
    auto &full_name = pr.first;
    auto &list=pr.second;
    cout<<full_name.first<<" "<<full_name.second<<endl;
    cout<<list.size()<<endl;
    for(auto &element: list){
        cout<<element<<" ";
    }
    cout<<endl;
   }
}
```

<h2>2.Nested Sets</h2>

```cpp
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,multiset<string>>marks_map;
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int marks;
        string name;
        cin>>name>>marks;
        marks_map[marks].insert(name);
    }
    auto cur_it=--marks_map.end();
    while(true){
        auto &students = (*cur_it).second;
        int marks =(*cur_it).first;
        for(auto student: students){
            cout<<student<<" "<<marks<<endl;
        }
        if(cur_it==marks_map.begin()) break;
        cur_it--;
    }
}
```



