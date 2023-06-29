#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    string s1 = "abcd";
     string s2 = "cdba";
 sort(s1.begin(), s1.end());
 sort(s2.begin(), s2.end());
     if(s1==s2){
        cout<<"1";
     }else{
        cout<<"0";
     }
    return 0;
}