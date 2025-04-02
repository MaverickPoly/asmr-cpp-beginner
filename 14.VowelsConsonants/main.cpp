#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

vector<int> count(const char *str)
{
    cout << "String: " << str << endl;
    int vowels = 0;
    int consonants = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        char var = tolower(str[i]);
        if (isalpha(var))
            if (var == 'o' || var == 'a' || var == 'e' || var == 'u' || var == 'i')
                vowels++;
            else
                consonants++;
    }

    return vector<int>{vowels, consonants};
}

int main()
{
    char input[1000];

    cout << "Enter a string: ";
    cin >> input;

    vector<int> res = count(input);

    cout << "Vowels: " << res[0] << endl;
    cout << "Consonants: " << res[1] << endl;

    return 0;
}