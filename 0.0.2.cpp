#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    bool fail = false;
    int num[10], n, s, k, l;
    string str;

    for (str ; getline(cin, str); )
    {
        istringstream stream(str);

        for (k = 0; k < 10; ++k)
        {
            if (!(stream >> num[k]))
            {
                cout << "An error has occurred while reading the input sequence";
                return 0;
            }
        }
        break;
    }

    for (k = 0; k < 9 ; k++)
        if (num[k] > num[k+1])
        {
            cout << "The input sequence must be non-decreasing.";
            return 0;
        }

    cin >> n;

    for (k = 0; k <10; k++)

    {

        for (l = k + 1; l <10; l++)
        {
            s = num[k]+num[l];
            if(s == n)
            {
                cout << num[k] << ' '<< num[l];
                return 0;
            }
            else fail = true;
        }
    }

    if (fail) cout << "There is no such pair of num.";

    return 0;
}