#include<bits/stdc++.h>
using namespace std;

int insertion_sort(int n, int* arr) {
	for(int i=1; i<n; i++) {
		int temp = arr[i];
		int j =i-1;
		while(j>=0 && arr[j] > temp) {
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
}

int main() {
	int n;
	cout<<"Enter the value of n: "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the element in n: "<<endl;
	for(int i=0; i<n; i++) {
		cin>>arr[i];
	}
	insertion_sort(n, arr);
	cout<<"Array After Insertion Sort: "<<endl;
	for(int i=0; i<n; i++) {
		cout<<arr[i]<<" ";
	}
	return 0;
}
