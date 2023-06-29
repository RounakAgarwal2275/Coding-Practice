#include <iostream>
using namespace std;
int main()
{
    int mat[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
           cout<< mat[i][j]<<" ";
        }
        cout<<endl;
        
    }
    for(int j=3;j>=0;j--){
        int row=j,col=0;
        while(row<=3 and col<=3){
            cout<<mat[row][col]<<" ";
            row++,col++;
        }
         cout<<endl;
    }
     for(int i=1;i<=4;i++){
        int row=0,col=i;
        while(row<=3 and col<=3){
            cout<<mat[row][col]<<" ";
            row++,col++;
        }
         cout<<endl;
    }

    return 0;
}