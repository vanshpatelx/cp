// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L

#include<iostream>
using namespace std;

int main(){
    string str1, str2, str3, str4;
    cin >> str1 >> str2 >> str3 >> str4;

    if(str2 == str4){
        cout << "ARE Brothers";
    }else{
        cout << "NOT";
    }
    return 0;
}