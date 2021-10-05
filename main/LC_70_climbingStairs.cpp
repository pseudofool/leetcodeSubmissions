int climbStairsHelper(int n, int mem[]){
    // two base cases
    if (n==0)
        return 1;
    if (n<0)
        return 0;
    // memoization used
    if (mem[n] > 0){
        return mem[n];
    }
    int temp = climbStairsHelper(n-1, mem) + climbStairsHelper(n-2, mem);
    mem[n] = temp;
    return temp;
}
int climbStairs(int n) {
    int mem[n+1];
    // initilazes array with zero
    for (int i = 0; i<n+1; i++){
            mem[i] = 0;
    }
    return climbStairsHelper(n, mem);
}