#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%3==0&&n%5==0){
        cout<<2;
    }else if(n%3==0){
        cout<<1;
    }
    else if(n%5==0){
        cout<<0;
    }
    return 0;
}