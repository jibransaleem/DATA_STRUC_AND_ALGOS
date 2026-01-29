#include <bits/stdc++.h>
using namespace std;
int main(){
    string name  = "jibran";
    cout <<"At index 0 " <<name[0];
    name[0] = 'H';
    cout <<"\n"<<"At index 0 " <<name[0];
    cout << "\n" <<"Name after eiditing first index "<< name ;

    // common strings methods
    cout << "\n";
    // lentgh
    cout << name.length();
    cout << "\n";
    // remves last  ele
    name.pop_back();
    cout << name ; 
    // clear => removces complte string

//     substr(start, length) 
// ✅ start

// 👉 Index number from where the substring begins

// ✅ length

// 👉 How many characters to take, not the ending index
    cout << "\n";
    string couting = "123456789";
    cout << couting.substr(1,5);

    //find the string or char
    cout << "\n" ;
    string me  = "jibran";
    cout << me.find("i");// returns index of char if found
    cout << "\n" <<me.find("k");// returns random number : string.npos
    cout << "\n" <<me.find("ran");// will returns an starting index of ran : index of r

    cout <<"\n";
    if (me.find("abc") != string::npos) {
        cout << "Found!";
    } else {
        cout << "Not found!";
    }
    cout << "\n";
    reverse(me.begin() , me.end());
    cout << me <<'\n';

    cout << me.empty(); // checks if string is empty

    //tolower() | to upper() = > to lower case , upper case respectivly

    // converting strings to numbers : sto <data type inital> (number)
    // stoi(x)  : converting string x to int
    // stoll(x) :converting string x to long long
    // stof(x) : from string to float
    // stod(x):from string to double
     return 0 ;
}