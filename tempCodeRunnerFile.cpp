#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int count = 0;
        int n1 = s1.size();
        int n2 = s2.size();

        for (int i = 0; i < n2; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                if (s1[i] == s2[j])
                {
                    count++;
                    break;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}