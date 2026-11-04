int maxProfit(int* prices, int pricesSize) {
    int min=prices[0],maxprofit=0;
    for(int i =0;i<pricesSize;i++){
        if(prices[i]<min)min=prices[i];
        if(prices[i]-min>maxprofit)maxprofit=prices[i]-min;

    }
    return maxprofit;
}