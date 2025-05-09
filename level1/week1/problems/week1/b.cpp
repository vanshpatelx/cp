// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B


#include<iostream>
using namespace std;

int main(){
    long long a, b, c;
    cin >> a >> b >> c;

    bool x = a % c;
    bool y = b % c;

    if(x == false && y == false){
        cout << "Both" << endl;
    }else if(x == false && y == true){
        cout << "Memo" << endl; 
    }else if(y == false && x == true){
        cout << "Momo" << endl; 
    }else if(x == true && y == true){
        cout << "No One" << endl; 
    }
    return 0;
}