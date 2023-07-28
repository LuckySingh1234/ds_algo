#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<string> fruits(n);
    for(int i=0; i<n; i++) {
        cin>>fruits[i];
    }
    map<string, int> freq;
    for(int i=0; i<n; i++) {
        freq[fruits[i]]++;
    }
    for(auto row:freq) {
        cout<<row.first<<" "<<row.second<<endl;
    }
    return 0;
}