#include <iostream>
using namespace std;

int main()
{
    string STR;

    cout << "Enter a string: ";
    cin >> STR;

    int i = 0;
    int n = 0;
    int a = 0;

    while (STR[i] != '\0')
    {
        n = n + 1;
        i = i + 1;
    }

    i = 0;

    while (i < n / 2)
    {
        if (STR[i] != STR[n - 1 - i])
        {
            a = 1;
            break;
        }

        i = i + 1;
    }

    if (a == 0)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
