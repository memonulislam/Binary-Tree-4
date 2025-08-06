#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int res = (y + 1) / 2;

        int cell = res * 15;
        int ccupied = y * 4;

        x -= (cell - ccupied);

        if (x < 0)
        {
            x = 0;
        }

        res += (x + 14) / 15;

        cout << res << endl;
    }

    return 0;
}