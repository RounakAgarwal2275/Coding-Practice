#include<bits/stdc++.h>
using namespace std;
int main()
{      
    stack<int>s;
    vector<int>arr={4,3,6,5,1};
    int n=5;
    vector<int>ngr(n);
    for (int i = n-1; i>=0; i--)
    {
       while(s.empty()==false and s.top()<=arr[i]){
        s.pop();
       }
       if(s.empty()==false){
        ngr[i]=s.top();
       }else{
        ngr[i]=-1;
       }
       s.push(arr[i]);
    }
     for(int i=0;i<n;i++){
        cout<<"Element"<<arr[i]<<" ,NGR: "<<ngr[i]<<endl;
     }
    return 0;
}