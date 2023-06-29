#include <iostream>
using namespace std;
int main()
{
    int n = 7;
    int arr[7] = {4, 5, 6, 7, 8, 9, 5};
    int flag = 0;
    int target = 91;
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    while (s <= e)
    {

        mid = (s + e) / 2;
        if (arr[mid] == target)
        {
            flag = 1;
            break;
        }
        else if (arr[mid] > target)
        {
            e = mid - 1;
        }
        else{
             s = mid +1;
        }
    }
    if (flag == 1){
        cout << "element found";
    }
    else
    {
        cout << "element not found";
    }

    return 0;
}