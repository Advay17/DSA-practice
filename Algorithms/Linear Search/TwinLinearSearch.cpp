#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int l1[n];
    int l2[n];
    for(int i=0; i<n; i++){
        cin >> l1[i] >> l2[i];
    }
    int a, b;
    cin >> a >> b;
    for(int i=0; i<n; i++){
        if((a==l1[i] || a==l2[i]) && (b==l1[i] || b==l2[i])){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";

}
