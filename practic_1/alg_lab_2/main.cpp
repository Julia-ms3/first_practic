#include <iostream>

using namespace std;

int main() {
    int numbers[3];
    for (int i = 0; i < 3; ++i) {
        cin >> numbers[i];
    }
    int max_number = numbers[0];
    for (int i = 0; i < 3; ++i) {
        if (numbers[i] > max_number) {
            max_number = numbers[i];
        }
    }
    cout << "max number: " << max_number;
    return 0;
}
