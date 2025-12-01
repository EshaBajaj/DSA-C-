class Solution{
    long printAll(vector<int> &arr){
        int N;
        int pfsum[N];
        long sum=0;
        for(int i=0; i<N; i++){
            pfsum[i]=sum;
        }
        long total=0;
        for(int i=0; i<N; i++){
            for(int j=i; j<N; j++){
                long sum=0;
                if(i==0){
                    sum+=pfsum[j];
                }
                else{
                    sum= pf[j]-pf[i-1];
                }
                total=total+sum;
            }
        }
    }
};

//Sum by contribution technique

class Solution {
  public:
    long long subarraySum(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        long sum = 0;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
        long long occ = 1LL * (i+1)*(n-i);
        sum = (sum + arr[i] * occ) % MOD;
        }
        return sum;
    }
    
};