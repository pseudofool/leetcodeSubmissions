// perfect squares

#include <cmath>
int minCount(int n)
{
	if (n<=3){
        return n;
    }
    
    if (sqrt(n) - floor(sqrt(n)) == 0){
        return 1;
    }
    
    int size = sqrt(n);
    int result = n;
    for (int i = 1; i<=size; i++){
    	result = min(result, 1+minCount(n-i*i));
    }
    return result;
    
}

// memoization
int numSquares(int *ans, int n) {
    if (n<=3){
        return n;
    }

    if (ans[n] != -1){
        return ans[n];
    }
    if (sqrt(n) - floor(sqrt(n)) == 0){
        return 1;
    }

    int size = sqrt(n);
    int result = n;
    for (int i = 1; i<=size; i++){
        result = min(result, 1+numSquares(ans, n-i*i));
    }
    ans[n] = result;
    return ans[n];
}

int numSquares(int n){
    int *ans = new int[n+1];
    for(int i=0; i<=n; i++){
        ans[i] = -1;
    }
    return numSquares(ans, n);
    
}