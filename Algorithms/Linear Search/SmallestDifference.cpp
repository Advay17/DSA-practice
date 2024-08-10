#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int e=a[0];
    for(int i=1; i<n; i++){
        if(abs(k-a[i])<abs(k-e) || a[i]<e &&abs(k-a[i]==abs(k-e))){
            e=a[i];
        }
    }
    cout << e;
}
