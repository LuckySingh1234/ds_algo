#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int> arr, int key) {
    int n = arr.size();
    int start = 0;
    int end = n-1; 
    while(start <= end) {
        int mid = (start+end)/2;
        if(arr[mid] == key) {
            return mid;
        }
        if(key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid-1;
        }
    }
    return -1;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int ans = binary_search(arr, key);
    cout<<ans;
    return 0;
}