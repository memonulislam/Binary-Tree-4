#include <bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    getline(cin, str);
    stringstream ss(str);
    string word;

    map<string, int> mp;
    while (ss >> word)
    {
        mp[word]++;
    }

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}

/*
input format :
I love football he loves football we love football they love football
*/