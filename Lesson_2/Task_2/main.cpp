#include <iostream>

using namespace std;

int main()
{
    string arr[5][5];
    int dig, dig1, dig2, dig3, dig4;

    cout << "Enter your digits: " << endl;
    cin >> dig >> dig1 >> dig2 >> dig3 >> dig4;

    for (int a = 0; a < 5; a++) {
        arr[a][0] = (a < dig) ? "*" : " ";
        arr[a][1] = (a < dig1) ? "*" : " ";
        arr[a][2] = (a < dig2) ? "*" : " ";
        arr[a][3] = (a < dig3) ? "*" : " ";
        arr[a][4] = (a < dig4) ? "*" : " ";
    }

    for (int a = 0; a < 5; a++) {
        for (int b = 0; b < 5; b++) {
            cout << arr[a][b] << " ";
        }
        cout << endl;
    }

    return 0;
}

