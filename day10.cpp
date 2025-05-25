#include <iostream>
void tripletsInVector(int arr[],int N){
    int count=0;
    
    for(int i=1; i<N; i++){
        int cg=0,cl=0;
        for(int j=0; j<i; ++j){
            if(arr[j]>arr[i]){
                cl++;
            }
        }
        for(int k=i+1; j<N; j++){
            if(arr[k]>arr[i]){
                cg++;
            }
        }
        count+=cl*cg;
        }
        cout<<"Triplets in the array"<<count<<endl
        
    }
int main()
{
    int arr[8]={3,2,7,6,4,10,9,12};
    int N= sizeof(arr[N])/sizeof(arr[0]);
    tripletsInVector(arr,N);
    return 0;
}