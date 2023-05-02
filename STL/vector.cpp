#include <bits/stdc++.h>
using namespace std;

int main() {
    // int n;
    // cout << "Enter the value of n:" << endl;
    // cin >> n;
    // int arr[n];
    // cout << "Enter the Array Elements:" << endl;
    // for(int i=0; i<n; i++) {
    //     cin>>arr[i];
    // }
    // cout<<"Entered Elements are:"<<endl;
    // for(int i=0; i<n; i++) {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter array elements:"<<endl;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<"Entered elements are:"<<endl;
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr.begin(), arr.end());
    cout<<"Sorted Elements are:"<<endl;
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int temp;
    cout<<"Enter an elements to add at the end of array: ";
    cin>>temp;
    arr.push_back(temp);
    n = arr.size();
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Now removing an element from the end of array: "<<endl;
    arr.pop_back();
    n = arr.size();
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

    // Enter the value of n: 5
    // Enter array elements:
    // 60 50 40 10 90
    // Entered elements are:
    // 60 50 40 10 90
    // Sorted Elements are:
    // 10 40 50 60 90
    // Enter an elements to add at the end of array: 100
    // 10 40 50 60 90 100 
    // Now removing an element from the end of array:
    // 10 40 50 60 90
}