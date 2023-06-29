#include<bits/stdc++.h>
using namespace std;
int main()
{
set<int>s;
s.insert(6);
s.insert(7);
s.insert(5);
s.insert(10);

// for(auto it=s.begin();it!=s.end();it++){
//     cout<<(*it)<<endl;
// }
// for(auto x:s){
//     cout<<x<<" ";
// }
if(s.find(10)==s.end()){
    cout<<"not present";
}
for(auto x:s){
    cout<<x<<" ";
}
s.erase(10);
for(auto x:s){
    cout<<x<<" ";
}

    return 0;
}