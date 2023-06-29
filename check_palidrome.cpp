#include<bits/stdc++.h>
using namespace std;
int main()
{
 string a="bcb";
//  reverse(a.begin(),a.end());
//  cout<<a;
int flag=0;
string y="";
 for(int i=2;i>=0;i--){
    y=y+a[i];
 }
 //cout<<y;
 if(y==a){
    flag=1;
 }else{
    flag=0;
 }
 if(flag==1){
    cout<<"palidrome";
 }else{
    cout<<"not palidrome";
 }
 
    return 0;
}