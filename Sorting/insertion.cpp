#include<bits/stdc++.h>
using namespace std;

void insertionsort(int a[],int n){
    for(int i=1;i<n;i++){
        int key = a[i];
        int j = i-1;
        while(j>=0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    cout <<"Before sorted:";
    for(int x:a) cout << x << " ";
    cout << endl;
    insertionsort(a,n);
    cout <<"After sorted:";
    for(int x:a) cout << x << " ";
}