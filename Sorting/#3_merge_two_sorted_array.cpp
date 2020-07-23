#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    int a[m],b[n];
    for(int i = 0;i<m;i++) cin >>a[i];
    for(int i = 0;i<n;i++) cin >>b[i];

    int i = 0;
    int j = 0;
    int c[n+m];
    int temp = 0;
    while(i<m && j<n){
        if(a[i] > b[j]){
            c[temp] = b[j++];
            temp++;
        }
        else{
            c[temp] = a[i++];
            temp++;
        }
    }
    while(i<m){
        c[temp] = a[i++];
        temp++;
    }
    while(j<n){
        c[temp] = b[j++];
        temp++;
    }

    //  printing merged array;
    for(int x:c) cout << x << " ";
}