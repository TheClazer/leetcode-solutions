int minCostClimbingStairs(int* cost, int costSize) {
    int min(int a, int b){
        if(a>b) return b;
        else return a;
    }
    int reachcost[costSize];
    reachcost[0]=0, reachcost[1]=0;
for(int i = 2; i<costSize; i++){
        reachcost[i]=min(reachcost[i-1]+cost[i-1], reachcost[i-2]+cost[i-2]);
    }
    return min(reachcost[costSize-2]+cost[costSize-2], reachcost[costSize-1]+cost[costSize-1]);
}