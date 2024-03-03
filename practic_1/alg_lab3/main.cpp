#include <iostream>

using namespace std;

int main() {
    int length_number;
    cout << "input length: ";
    cin >> length_number;

    double sum = 0;
    double number = 1;
    for (int i = 0; i < length_number; ++i) {
        cout << number << endl;
        sum += number;
        number *= -0.5;
    }
    cout << "Sum: " << sum << " ";
    return 0;
}
