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

-----------------------------------------------------OR--------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int screen = y / 2;
        int cell = screen * 7;
        if (y % 2 != 0)
        {
            screen++;
            cell += 11;
        }

        if (x > cell)
        {
            x -= cell;
            screen += x / 15;
            if (x % 15 != 0)
            {
                screen++;
            }
        }

        cout << screen << endl;
    }
    return 0;
}
