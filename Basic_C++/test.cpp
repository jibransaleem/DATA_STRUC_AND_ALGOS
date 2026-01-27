#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    long long t1 = a*b;
    long long t2 = c*d;
    cout << (t1*t2)%100;
    return 0;
}