#include<bits/stdc++.h>
using namespace std;
int main()
{
stack<int>s;
s.push(5);
s.push(2);
s.push(1);
s.push(4);
//cout<<s.top();

while (s.empty()==false)
{   cout<<s.top()<<" ";
     s.pop();
    /* code */
}

    return 0;
}