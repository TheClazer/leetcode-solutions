int maxProfit(int* prices, int pricesSize) {
    if(pricesSize==1) return 0;
    int buy=0,sell=0,profit=0;
    while(buy<pricesSize-1){
        while(buy<pricesSize-1 && prices[buy]>=prices[buy+1]){
            buy++;
        }
        sell=buy;
        while(sell< pricesSize-1 && prices[sell] < prices[sell+1]){
            sell++;
        }
        profit =  profit + prices[sell]-prices[buy];
        buy=sell;
    }
    return profit;
    
}