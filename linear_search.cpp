#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int arr[5] = {5, 7, 9, 3, 2};
    int target = 99;
    int flag = 0;
   
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == target)
        {
            flag = 1;
            break;
        }
    }
        if (flag == 1)
        {
            cout << "element found";
        }
        else
        {
            cout << "element not found";
        }
    

    return 0;
}