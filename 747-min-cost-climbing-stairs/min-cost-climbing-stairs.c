
int min(int x,int y){
    if(x<y){
        return x;
    }else if (x==y){
        return x;
    }
    else{
        return y;
    }
}



int minCostClimbingStairs(int* cost, int costSize) {
    int n = costSize;
    int dp[n];

    dp[0] = cost[0];
    dp[1] = cost[1];

    for(int i=2;i<n;i++){
        dp[i] = cost[i] + min(dp[i-1],dp[i-2]);
    }


    return min(dp[n-1],dp[n-2]) ;

    
}