#include <iostream>

using namespace std;

int main() {
    int number;
    int i =2;
    cin >> number;
    if (number < 2) {
        cout << "error!";
    }

    while( number % i !=0){
        i++;
    }
    cout << i;
    return 0;
}
