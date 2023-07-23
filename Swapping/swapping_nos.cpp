#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin>>a>>b;

    // Using third variable in same function

    // int temp;
    // temp = a;
    // a = b;
    // b = temp;

    // Without using third variable in the same function

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<a<<" "<<b;
    return 0;
}