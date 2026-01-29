#include <bits/stdc++.h>
using namespace std;
int main(){
    double number = 123.98933457;
    cout << setprecision(9)<<endl; // gives from msb : counts dig from 1
    cout << number;
    cout << fixed << setprecision(7)<<endl; // using fixed allows to start from msb after decimal point
    cout << number;

    double a = 123.234;
    double int_part ;
    double frac_part  =     modf(a  , &int_part);
    cout << endl << "int part "<< int_part ;
    cout << endl << "frac part "<< frac_part ;
    cout <<endl;
    long double point  = 123.1345667;
    cout << point;
    return 0;

}