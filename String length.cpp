#include <iostream>
using namespace std;

int main()
{
    string STR;

    cout << "Enter a string : ";
    cin >> STR;

    int i = 0;
    while (STR[i] != '\0')
    {
        i = i + 1;
    }

    cout << "Length of the string: " << i << endl;

    return 0;
}

