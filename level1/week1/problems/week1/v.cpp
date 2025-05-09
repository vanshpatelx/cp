// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V

#include<iostream>
using namespace std;

int main(){
    int a, c;
    char b;
    cin >> a >> b >> c;
    int count = 0;
    if(b == '>'){
        if(a > c) count++;
    }else if(b == '<'){
        if(a < c) count++;
    }else{
        if(a == c) count++;
    }

    if(count == 1){
        cout << "Right" << endl;
    }else{
        cout << "Wrong" << endl;
    }
    return 0;
}