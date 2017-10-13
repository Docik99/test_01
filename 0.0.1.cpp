#include <iostream>

using namespace std;
int main()
{
    int i, p;
    char str[81];
    cin.getline(str,81);
    p = strlen(str);

    for(i = 0; i < p; i++)
    {
        if (str[i] == ' ')
            cout << "%20";
        else cout << str[i];
    }
    return 0;
}