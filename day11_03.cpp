int ans=0;
for(int j=0; j<N; i++){
    if(arr[i]=='b')
        int la=0; 
        int ra=0;
        for(int i=0; i<j; i++){
            if(a[i]=='a'){
                la++;
            }
            for(int k=j+1; k<N; k++){
                if(a[i]=='a'){
                    ra++;
                }
                ans= ans+la+ra;
            }
        }
        return ans;
}