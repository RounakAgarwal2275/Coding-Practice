#include<bits/stdc++.h>
using namespace std;
int main()
{  
    priority_queue<int,vector<int>,greater<int>>pq;
  //  priority_queue<int>pq;
    pq.push(10);
    pq.push(29);
    pq.push(20);
    while(pq.empty()==false){
        int f=pq.top();
        cout<<f<<endl;
        pq.pop();
    }
    return 0;
}