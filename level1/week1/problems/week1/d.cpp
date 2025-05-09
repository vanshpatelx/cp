// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D

#include<iostream>
using namespace std;

int main(){
    long long a, b, c;
    long long result;

    cin >> a >> b >> c >> result;

    if((a + b - c) == result){
        cout << "YES" << endl; 
        return 0;
    }
    if((a - b + c) == result){
        cout << "YES" << endl; 
        return 0;
    }
    if((a + b * c) == result){
        cout << "YES" << endl; 
        return 0;
    }
    if((a * b + c) == result){
        cout << "YES" << endl; 
        return 0;
    }
    if((a - b * c) == result){
        cout << "YES" << endl; 
        return 0;
    }
    if((a * b - c) == result){
        cout << "YES" << endl; 
        return 0;
    }

    cout << "NO" << endl;
    return 0;
}