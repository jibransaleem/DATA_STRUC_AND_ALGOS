#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 9;
    cout << static_cast<float>(a) / b ; // int to float
    cout << static_cast<double> (a)/b << endl ; // int to double

    char A = 'A';
    cout << static_cast<int>(A) << endl; // char to int

    int B= 66 ;
    cout << static_cast<char>(B); //int to char
    int z = 1e9, y = 2e9;
    long long product = static_cast<long long>(z) * y; // prevents overflow

    int number = -97;  
    
    cout <<endl   <<static_cast<bool>(number);


    return 0;
}
