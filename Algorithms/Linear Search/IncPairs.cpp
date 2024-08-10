#include <bits/stdc++.h>
using namespace std;

bool inc(int v, int l, int r){
    return v<=r && v>=l;
}
int main() {
	int n;
	cin >> n;
	int p[n][2];
	for(int i=0; i<n; i++){
	    cin >> p[i][0] >> p[i][1];
	}
	int l, r;
	cin >> l >> r;
	for(int i=0; i<n; i++){
	    if(inc(p[i][0]*p[i][1], l, r)&&inc(p[i][0]+p[i][1], l, r)){
	        cout << p[i][0] << " " << p[i][1] << endl;
	    }
	}
}
