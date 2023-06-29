#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s="abbc";
 int arr[26]={0};
 for(int i=0;i<s.size();i++){
    int ind=s[i]-'a';
    arr[ind]++;
 }
 for(int i=0;i<26;i++){
    char ch=i+'a';
    cout<<ch<<" "<<arr[i]<<endl;
 }
    return 0;
}