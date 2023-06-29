#include<iostream>
using namespace std;
int main()
{
int mt[3][3]={1,2,3,4,5,6,7,8,9};
int target=0;
int flag=0;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(mt[i][j]==target){
            flag=1;
            break;
        }

    
    }cout<<endl;
}
if(flag==1){
    cout<<"yes";
}
else{
cout<<"no";
}
    return 0;
}
