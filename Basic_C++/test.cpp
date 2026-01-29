#include <bits/stdc++.h>
using namespace std;

int nth_feb(int n ){
    // base cases
    if (n ==2 ){
        return 1;
    }
    if (n==1){
        return 0;
    }
    return nth_feb(n-1)+nth_feb(n-2);
}
signed main(){
    long long number ;
    cin >> number;
    long long ans  = nth_feb(number);
    cout <<  ans;
    return 0;
}