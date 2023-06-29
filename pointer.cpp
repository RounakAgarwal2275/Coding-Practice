#include<iostream>
using namespace std;
int main()
{  int a=7;
int *ptr=&a;
cout<<ptr;// store the address
cout<<endl;
int b=*ptr;//dereferenceing the value
cout<<b;
    return 0;
}