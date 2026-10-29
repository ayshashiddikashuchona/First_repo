#include <iostream>
using namespace std;

int main()
{
    string STR;

    cout << "Enter a string: ";
    cin >> STR;

    int i = 0;
    int n = 0;

    while (STR[i] != '\0')
    {
        n = n + 1;
        i = i + 1;
    }

    i = 0;
    while (i < n / 2)
    {
        char temp = STR[i];
        STR[i] = STR[n - 1 - i];
        STR[n - 1 - i] = temp;

        i = i + 1;
    }

    cout << "Reversed string: " << STR << endl;

    return 0;
}

