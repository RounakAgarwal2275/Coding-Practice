#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    int arr[100];
    int count=0;
    int target=4;
    cout << "enter the array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "printing the array";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            count++;
        }
        
    }
    cout << count;
    return 0;
}