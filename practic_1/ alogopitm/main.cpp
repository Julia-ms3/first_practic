#include <iostream>

using namespace std;

int main() {
    int numbers[3];
    cout << "input 3 number: ";
    for (int i = 0; i < 3; ++i) {
        cin >> numbers[i];
    }
    cout << "your numbers that fell into the range[1,15]: ";
    for (int i = 0; i <3 ; ++i) {
        if(numbers[i] >= 1 && numbers[i] <= 15){

            cout << numbers[i] << " ";
        }

    }
   return 0;
}
