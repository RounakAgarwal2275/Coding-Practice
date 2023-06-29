#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>arr={4,5,5,1,2,1,4};
  set<int>s;
  for(int i=0;i<7;i++){
    if(s.find(arr[i])==s.end()){
        s.insert(arr[i]);
    }else{
        s.erase(arr[i]);
    }
  }
  cout<<(*(s.begin()));
    return 0;
}