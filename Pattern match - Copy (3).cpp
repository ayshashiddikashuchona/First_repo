#include <iostream>
using namespace std;

int main()
{
    string STR1, STR2;
    int n = 0,m = 0;
    cout << "Enter the text: ";
    cin >> STR1;

    cout << "Enter the pattern: ";
    cin >> STR2;

    while (STR1[n] != '\0')
    {
        n = n + 1;
    }

    while (STR2[m] != '\0')
    {
        m = m + 1;
    }

    int i = 0;

    while (i < n - m + 1)
    {
        int c = 0;

        for (int j = 0; j < m; j++)
        {
            if (STR1[i + j] == STR2[j])
            {
                c = c + 1;
            }
        }

        if (c == m)
        {
            cout << "Found" << endl;
            return 0;
        }

        i = i + 1;
    }

    cout << "Not Found" << endl;

    return 0;
}
