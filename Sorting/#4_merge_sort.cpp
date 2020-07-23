#include<bits/stdc++.h>
using namespace std;

int merge(int a[],int s,int m,int e){
        int i,j,k;
        int n1 = m-s+1;
        int n2 = e-m;

        int L[n1],R[n2];
        for(i = 0;i<n1;i++)
            L[i] = a[s+i];
        for(i = 0;i<n2;i++)
            R[i] = a[m+1+j];

        i = 0;
        j = 0;
        k = e;

        while(i<n1 && j < n2){
            if(L[i] <= R[j])
            {
                a[k] = L[i];
                i++;
            }
            else{
                a[k] = R[j];
                j++;
            }
            k++;
        }

}

void merge_sort(int a[],int s,int e){
    if(e>s){
        int m = s + (e-s)/2;
        merge_sort(a,s,m);
        merge_sort(a,m+1,e);
        merge(a,s,m,e);
    }
}


int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i<n; i++) cin >> a[i];
    cout <<"Before Sort: ";
    for(int x:a) cout << x << " ";
    merge_sort(a,0,n);
    cout <<"After sort: ";
    for(int x:a) cout << x << " ";
}