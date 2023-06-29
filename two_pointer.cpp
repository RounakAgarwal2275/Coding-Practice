/*#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 6;
    int flag=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[j]+arr[i] == sum)
            {
                flag=1;
            }
            else
            {
                break;
            }
        }

    }
    if(flag==1){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}*/

#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 99;
    int flag=0;
     int i=0,j=n-1;
     while(i<j){
        int cur_sum=arr[i]+arr[j];
        cout<<" i "<<i<<" J "<<j<<" sum "<<cur_sum<<endl;
        if( cur_sum>sum){
            j--;
        }else if (cur_sum<sum)
        {
            i++;
        }else{
            flag=1;
            break;
        }
     }
        
     
    
    if(flag==1){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

    return 0;
}