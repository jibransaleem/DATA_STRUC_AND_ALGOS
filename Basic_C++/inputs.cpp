#include <iostream>
using namespace std;
int main(){

    // using cin : each multi inputs are seprated by sapce no matter input is integer or string or char
    int inp1 , inp2 ;
    cin >>inp1>>inp2;
    cout << inp1  << " " << inp2 ;
    
    string a , b ; 
    cout << "Enter the string a ";
    // getline(cin , var) takes multi line string input , it is for string , not for numbers 
    getline(cin , a);
    cout << "Enter the string b ";
    getline(cin , b);
    cout <<  a << endl;
    cout << b ; 
    // cout << "\n" << a*b ;
    return 0 ;
}
