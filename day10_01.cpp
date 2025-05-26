#include<stdio.h>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int price={2,7,5,8,10,12};
    int minPrice = price[0];
    int maxPrice = 0;

    for(int i=0; i<N; ++i){
        if(price[i] < minPrice){
            minPrice=price;
        }
        int profit = prices[i] - minPrice;

        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }

    cout << "Maximum Profit: " << maxProfit << endl;

return 0;
}


