#include <iostream>

using namespace std;

int main() {
    int arr[10] = {0};
    int account_number;
    int operation = 0;
    int sum;

    while (true) {
        cout << "Hi, this is virtual bank. Enter the operation {1 - Top up; 2 - Withdraw; 3 - Balance check; 4 - Entire bank capacity; 5 - Exit}: ";
        cin >> operation;

        switch (operation) {
        case 1:
            cout << "Enter the account number (0-9): ";
            cin >> account_number;
            if (account_number < 0 || account_number > 9) {
                cout << "Wrong account number!" << endl;
                break;
            }
            cout << "Enter the sum to top up: ";
            cin >> sum;
            arr[account_number] += sum;
            cout << "Balance updated: " << arr[account_number] << endl;
            break;

        case 2:
            cout << "Enter the account number (0-9): ";
            cin >> account_number;
            if (account_number < 0 || account_number > 9) {
                cout << "Wrong account number!" << endl;
                break;
            }
            cout << "Enter the sum to withdraw: ";
            cin >> sum;
            if (arr[account_number] >= sum) {
                arr[account_number] -= sum;
                cout << "Balance updated: " << arr[account_number] << endl;
            } else {
                cout << "Insufficient funds!" << endl;
            }
            break;

        case 3:
            cout << "Enter the account number (0-9): ";
            cin >> account_number;
            if (account_number < 0 || account_number > 9) {
                cout << "Wrong account number!" << endl;
                break;
            }
            cout << "Balance: " << arr[account_number] << endl;
            break;

        case 4:
            cout << "Entire bank capacity:\n";
            for (int i = 0; i < 10; i++) {
                cout << "Account " << i << ": " << arr[i] << endl;
            }
            break;

        case 5:
            cout << "Exiting the virtual bank. Goodbye!" << endl;
            return 0;

        default:
            cout << "Invalid operation! Please try again.\n";
        }
    }

    return 0;
}
