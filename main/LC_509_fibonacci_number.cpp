int fibonacci(int *arr, int n){
    if (n <= 1){
        return n;
    }
    
    if (arr[n] != -1){
        return arr[n];
    }
    
    arr[n] = fibonacci(arr, n-1) + fibonacci(arr, n-2);
    return arr[n];
}

int fib(int n) {
    int *arr = new int[n+1];
    for (int i=0; i<=n; i++){
        arr[i] = -1;
    }
    return fibonacci(arr, n);
}