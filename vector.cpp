#include <bits/stdc++.h>
using namespace std ;
int compare_strings(string a , string b){
    int index = 0 ;
    while(a.length()>index ){
        if (tolower(a[index])>tolower(b[index])){
            return 1 ;
        }
        else if (tolower(a[index])<tolower(b[index])){
            return -1;
        }
    index+=1;
    }
    return  0;

}

int main(){
    string a , b;
    cin >>a ;
    cin >>b ;
    // a = "aAaaaAAaAaaAzZsssSsdDfeEaeqZlpP";
    // b=  "AaaaAaaAaaAaZzSSSSsDdFeeAeQZLpp";
    int ans  = compare_strings(a,b);
    cout << ans;
    return  0;


}