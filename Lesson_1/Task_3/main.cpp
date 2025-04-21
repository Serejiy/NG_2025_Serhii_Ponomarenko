#include <iostream>

using namespace std;

void romboid(int amount){
    if (amount % 2 == 0) {
        amount += 1;
    }

    int mid = amount / 2;
    int left = mid;
    int right = mid;

    for (int row = 0; row < amount; row++) {
        for (int col = 0; col < amount; col++) {
            if (col >= left && col <= right) {
                cout << "*";
            } else {
                cout << " ";
            }
        }


        if (row < mid) {
            left--;
            right++;
        } else {
            left++;
            right--;
        }

        cout << endl;
    }
}

void spiral(int amount){

}

int main() {
    int amount;
    cout << "Enter the amount of stars: ";
    cin >> amount;




    spiral(amount);
    romboid(amount);
    return 0;
}
