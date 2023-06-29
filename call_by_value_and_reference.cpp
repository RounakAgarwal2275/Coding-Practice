#include<iostream>
using namespace std;
//call by value
void swap(int a,int b){
    int t=a;
    a=b;
    b=t;
cout<<"a after swaping "<<a<<" b after swapping"<<b<<endl;
}
void swap2(int*ptr_a,int *ptr_b){
    int t=*ptr_a;
    *ptr_a=*ptr_b;
    *ptr_b=t;
    cout<<"a after swaping "<<*ptr_a<<" b after swapping"<< *ptr_b<<endl;
}
int main()
{
    int a=7,b=8;
   // swap(a,b);
int *ptr_a=&a;
int *ptr_b=&b;
swap2(ptr_a,ptr_b);
cout<<a<<b;
    return 0;
}