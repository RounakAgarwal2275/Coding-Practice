#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<char, int> mp;
    mp['a'] = 10;
    mp['b'] = 20;
    mp['c'] = 30;
    if (mp.find('c') == mp.end())
    {
        cout << "not present";
    }
    if (mp.count('d') == 0)
    {
        cout << "not present" << endl;
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << "key:" << it.first << "value" << it.second << endl;
    }
    for (auto it : mp)
    {
        cout << "keys" << it.first << "value" << it.second << endl;
    }

    return 0;
}