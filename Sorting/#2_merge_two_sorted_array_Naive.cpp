#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    cin >> n1 >> n2;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++) cin >> a[i];
    for(int i=0;i<n2;i++) cin >> b[i];

    int c[n1+n2];
    for(int i=0;i<n1;i++) c[i] = a[i];
    for(int i=0;i<n2;i++) c[i+n1] = b[i];
    sort(c,c+n1+n2);
    for(int x:c) cout << x << " ";
}