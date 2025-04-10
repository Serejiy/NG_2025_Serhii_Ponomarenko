#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b;
    char op;
    cout << "Enter expression (a op b): ";
    cin >> a >> op >> b;

    switch(op) {
    case '+': cout << a + b << endl; break;
    case '-': cout << a - b << endl; break;
    case '*': cout << a * b << endl; break;
    case '/':
        if (b != 0) cout << a / b << endl;
        else cout << "Error! Division by zero." << endl;
        break;
    case '^': cout << pow(a, b) << endl; break;
    case 's': cout << sqrt(a) << endl; break;
    default: cout << "Invalid operator!" << endl; break;
    }

    return 0;
}
