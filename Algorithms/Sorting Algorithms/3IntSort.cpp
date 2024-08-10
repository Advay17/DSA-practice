#include <bits/stdc++.h>
using namespace std;
void swap(int a[], int x, int y){
        int t=a[x];
        a[x]=a[y];
        a[y]=t;
}

int main() {
    int a[3];
    for(int i=0; i<3; i++){
        cin >> a[i];
    }
    for(int i=0; i<2; i++){
        if(a[0]>a[1]){
            swap(a, 0, 1);
        }
        if(a[1]>a[2]){
            swap(a, 1, 2);
        }
        if(a[0]>a[2]){
            swap(a, 0, 2);
        }
    }
    cout << a[0] << " " << a[1] << " "<< a[2];
}

