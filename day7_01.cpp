void LeftRotate (vector<int> &arr,int n){
    int temp=arr[0];
    for(int i=1; i<n; ++i){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return arr;
}

//**LeftRotate by D indexes
int d,n;
 d=d%n;
 int temp[d];
 for(int i=0; i<d; ++i){
    arr[i]=temp[i];
 }
 for(int i=d; i<n; ++i){
    a[i-d]=a[i];
 }
 for(int i=i-d; i<n; ++i){
    a[i]=temp[i-(n-d)];
 }
