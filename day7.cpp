void SelectionSort(int arr[],int n){
    for(int i=0; i<n-1; ++i){
        int mini=i;
        for(int j=i; j<n; ++j){
          if(arr[j]<mini){
            mini=j;
          } 
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;

    }
}
void BubbleSort(int arr[],int n){
    for(int i=0; i<n-1; ++i){
        for(int j=0; j<n-1; ++j){
            if(arr [j+1]< arr [j]){
                int temp =arr[j+1];
                arr [j+1]=arr[j];
                arr[j]= temp;
            }
        }
    }
}