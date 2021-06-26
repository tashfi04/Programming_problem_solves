#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, a, min_num, max_num, min_pos, max_pos, req_moves;

    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> n;

        max_num = min_pos = max_pos = req_moves = 0;
        min_num = INT_MAX;

        for (int j = 0; j < n; j++)
        {
            cin >> a;

            if(a < min_num)
            {
                min_num = a;
                min_pos = j + 1;
            }

            if(a > max_num)
            {
                max_num = a;
                max_pos = j + 1;
            }
        }

        if(min_pos > max_pos)
        {
            a = max_pos;
            max_pos = min_pos;
            min_pos = a;
        }

        req_moves = min(min(max_pos, n - min_pos + 1), min_pos + n - max_pos + 1);

        cout << req_moves << endl;
        
    }

    return 0;
}
