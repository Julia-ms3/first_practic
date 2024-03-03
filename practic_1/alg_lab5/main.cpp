#include <iostream>

using namespace std;

int main() {
    int length;
    cin >> length;
    int num1 = 0, num2 = 1, num3;
    cout << num1 << " " << num2 << " ";
    for (int i = 0; i < length; ++i) {
        cout << num3 <<" ";
        num1 = num2;
        num2 = num3;
        num3 = num1 + num2;
    }

    return 0;
}
