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
<h1>Stack </h1>

```cpp
#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}
```
<h1>8_1 Balanced Paranthesis in Stack</h1>

```cpp
#include<bits/stdc++.h>
using namespace std;
 unordered_map<char,int> symbols={{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};
 string isBalanced(string s){
    stack<char> st;
    for(char bracket:s){
        if(symbols[bracket]<0){
            st.push(bracket);
        }else{
            if(st.empty()) return "NO";
            char top=st.top();
            st.pop();
            if(symbols[top]+symbols[bracket]!=0)
            return "NO";
        }
    }
    if(st.empty()) return "YES";
    return "NO";
 }
 int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;
    }
    return 0;
 }
 ```

 <h2>8_2 Next Greatest Integer in Stack</h2>

 ```cpp
 #include<bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int> v){
    vector<int> nge(v.size());
    stack<int> st;
    for(int i=0;i<v.size();++i){
        while(!st.empty() && v[i]>v[st.top()]){
            nge[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        nge[st.top()]=-1;
        st.pop();
    }
    return nge;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    vector<int> nge=NGE(v);
    for(int i=0;i<n;++i){
        cout<<v[i]<<" "<<(nge[i]==-1 ?-1:v[nge[i]])<<endl;
    }
    return 0;
}
```

<h1>9 Queue</h1>

```cpp
#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<string> q;
    q.push("abc");
    q.push("bcd");
    q.push("cde");
    q.push("def");
    q.push("ghi");
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
}
```

<h1>10 Comparator in STL</h1>

```cpp
#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.first != b.first){
        return a.first<b.first;
    }
    return a.second>b.second;
}

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    sort(a.begin(),a.end(),cmp);
    for(int i=0;i<n;i++){
        cout<<a[i].first<<" "<<a[i].second<<endl;

    }
    cout<<endl;
    return  0;
}
```

<h1>11. Inbuilt Sort in STL</h1>

```cpp
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin()+2,a.end());
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
```

<h1>12. Upper bond in STL</h1>

```cpp
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
```

<h1>13.Functions in STL</h1>

```cpp
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
```

