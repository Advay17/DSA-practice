#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        if((a+b)%k==0){
            cout << "(" << a << ", " << b << ")" << endl;
        }
    }
}
