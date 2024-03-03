#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    int number;
    cout << "input number [1,20]: ";
    cin >> number;
    int number_rand;
    number_rand = rand() % 21;
    cout << number_rand << endl;
    int number_of_times = 1;

    while (number != number_rand) {
        if (number < 0 || number > 20) {
            cout << "incorrect value" << endl;
        }
        if (number_rand > number) {
            cout << "The proposed number is less than the intended one" << endl;
        } else {
            cout << "The proposed number is higher than the intended one" << endl;
        }
        cin >> number;
        number_of_times++;
    }

    cout << "you hit the number on " << number_of_times << " tries";
    return 0;
}
