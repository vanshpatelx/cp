// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K


#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int min, max;

    if(a > b){
        max = a;        
        min = b;
    }else{
        min = a;        
        max = b;
    }

    if(max < c){
        max = c;
    }

    if(min > c){
        min = c;
    }

    cout << min << " " << max << endl;
    return 0;
}