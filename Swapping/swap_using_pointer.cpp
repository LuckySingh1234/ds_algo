#include<bits/stdc++.h>
using namespace std;

void swap_using_third(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_without_using_third(int* a, int* b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int a, b;
    cin>>a>>b;
    
    int* ptr_a = &a;
    int* ptr_b = &b;

    // Using third variable

    // swap_using_third(ptr_a, ptr_b);

    // Without using third variable

    swap_without_using_third(ptr_a, ptr_b);

    cout<<a<<" "<<b;
    return 0;
}