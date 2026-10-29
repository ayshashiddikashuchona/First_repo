#include <iostream>
using namespace std;

int main()
{
    char STR[100], STREx[200];

    cout << "Enter first string: ";
    cin >> STR;

    cout << "Enter second string: ";
    cin >> STREx;

    int i = 0;
    int j = 0;

    while (STREx[i] != '\0')
    {
        i++;
    }

    while (STR[j] != '\0')
    {
        STREx[i] = STR[j];
        i++;
        j++;
    }

    STREx[i] = '\0';
    cout << "Concatenated string: " << STREx << endl;

    return 0;
}
