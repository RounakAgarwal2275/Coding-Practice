#include<iostream>
using namespace std;
int main()
{
int n=6;
int arr[6]={4,3,1,5,8,-5};
int curr_sum=0;
int max_sum=0;
for(int i=0;i<n;i++){
    curr_sum=arr[i]+curr_sum;

if(curr_sum<0){
    curr_sum=0;
}
if(curr_sum>max_sum){
    max_sum=curr_sum;
}
}
cout<<curr_sum;

    return 0;
}