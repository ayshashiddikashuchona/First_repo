#include <iostream>
using namespace std;

int main()
{
    string STR;

    cout << "Enter a string: ";
    cin >> STR;

    int i = 0;
    int vowel = 0;
    int consonant = 0;

    while (STR[i] != '\0')
    {
        if (STR[i] == 'a' || STR[i] == 'e' || STR[i] == 'i' ||
            STR[i] == 'o' || STR[i] == 'u' ||
            STR[i] == 'A' || STR[i] == 'E' || STR[i] == 'I' ||
            STR[i] == 'O' || STR[i] == 'U')
        {
            vowel = vowel + 1;
        }
        else
        {
            consonant = consonant + 1;
        }

        i = i + 1;
    }

    cout << "Number of vowels: " << vowel << endl;
    cout << "Number of consonants: " << consonant << endl;

    return 0;
}
