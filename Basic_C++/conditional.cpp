#include <iostream>
using namespace std;

int main() {

    // ---------- Check if number is Positive, Negative or Zero ----------
    int a = 0;

    if (a > 0) {
        cout << "Positive" << endl;
    } 
    else if (a < 0) {
        cout << "Negative" << endl;
    } 
    else {
        cout << "Zero" << endl;
    }

    // ---------- Ternary Operator Example ----------
    // Syntax: condition ? value_if_true : value_if_false
    int output = 10;
    string ans = (output % 2 == 0) ? "even" : "odd";
    cout << "Number is " << ans << endl;

    // ---------- Even or Odd using if-else ----------
    int ip = 10;
    int flag;   // Declare outside so it can be used later

    if (ip % 2 == 0) {
        flag = 1;   // Even
    }
    else {
        flag = 0;   // Odd
    }

    cout << "flag value is " << flag << endl;

    return 0;
}
