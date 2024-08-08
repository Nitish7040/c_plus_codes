#include <iostream>
using namespace std;

int main() {
    int actual_number = 6;
    int count = 0;

    while (true) {
        int guess;
        cout << "Guess a number: ";
        cin >> guess;

        if (guess == actual_number) {
            count++;
            cout << "Correct guess!" << endl;
            cout << "You took " << count << " guesses." << endl;
            break;
        } else if (guess < actual_number) {
            cout << "Low" << endl;
            count++;
        } else {
            cout << "High" << endl;
            count++;
        }
    }

    return 0;
}
