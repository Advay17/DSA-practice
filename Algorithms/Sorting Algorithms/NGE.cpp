#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; ++i){
        int o=-1;
        for(int j=i+1; j<n; ++j){
            if(a[i]<a[j] && (o==-1 || o>a[j])){
                o=a[j];
            }
        }
        cout << o << " ";
    }
}

