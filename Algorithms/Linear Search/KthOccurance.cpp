#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    char c;
    int k;
    cin >> s >> c >> k;
    int o=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]==c && ++o == k){
            cout << i;
            return 0;
        }
    }
    cout <<-1;

}
