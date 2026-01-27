#include <iostream>
using namespace std;

// %  => a /b : a divided by b , what  remains after dividing a by b is modulus
// c++ follows bodmas : B – Bracket O – Orders (powers, roots, exponents) D – Division  M – Multiplication A – Addition S – Subtraction
//Division and Multiplication are done left to right , Addition and Subtraction are done left to right


int main(){
    int a = 16;
    int b = 3;
    cout << a/b <<"\n"; // 5 not 5.33
    // dividing two int always gives back another int : no decimal part
    // division : / is a quotien operator
    cout << 16 / 3.0 <<"\n" ;
    cout << 'f'+1<<endl; // ascii code of f +1 = 102 +1= 103
    cout << char('f'+1)<<endl; // converitng back 103 to ascii char :g


    // garbage values : un defined values


    // char can become integer , but integer can not become an char
    // by default floating point number are in double
    // using f along with number to treat as float
    float it_is_double = 18.897;
    float it_is_float = 18.897f;

    // string is derived data type ,derived from char
    char var = '?';
    int a , b;
    cin >> a >> b ;
    cout << static_cast<float>(a)/b;



    return 0 ;
}