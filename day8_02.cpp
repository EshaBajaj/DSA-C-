#include<iostream>
#include<vector>

void reverse(int ar[], int l, int r){
    int P1=l;
    int P2=r;
    int temp=ar[P1];
    ar[P1]=ar[P2];
    ar[P2]=temp;
    P1++;
    P2--;
}

void RotateKtimes(int ar[],int N, int k){
    k=k%N;
    reverse(ar,0,N-1);
    reverse(ar,0,k-1);
    reverse(ar,k,N-1);

}