#include <iostream>

using namespace std;

int main()
{
    char word[250];
    cout << "Enter: ";
    cin >> word;
    int amount = 0;

    for (int a = 0; word [a]; a++){
        char c = word[a];
        if (c <= 9 && c >= 0){
            while (c <=9 && c >=0){
                a++;
            }
        }
    }
    cout << word[1];
    return 0;
}


