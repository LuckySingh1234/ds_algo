#include<bits/stdc++.h>
using namespace std;

int linearSearch(int n, int* arr, int key) {
	for(int i =0; i<n; i++) {
		if(key == arr[i]) {
			return i;
		}
	}
	return -1;
}

int main() {
	int n;
	cout<<"Enter the value of n: "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of array: "<<endl;
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	int key;
	cout<<"Enter key to be searched: "<<endl;
	cin>>key;
	int ans = linearSearch(n, arr, key);
	if(ans != -1) {
		cout<<"Key "<<key<<" found at index: "<<ans;
	} else {
		cout<<"Key "<<key<<" not found";
	}
	return 0;
}
