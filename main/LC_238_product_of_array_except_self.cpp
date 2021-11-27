vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    
    // finding the suffix product or product of right part for each index element
    int suffixProd[n];
    suffixProd[n-1] = nums[n-1];
    for (int i=n-2; i>=0; i--){
        suffixProd[i] = suffixProd[i+1]*nums[i];
    }
    
    
    vector<int> res;
    int prefixProd = 1;
    for (int i = 0; i<n-1; i++){
        // finding the product of prefix and suffix prodcts
        res.push_back(prefixProd * suffixProd[i+1]);
        prefixProd = prefixProd * nums[i];
    }
    res.push_back(prefixProd);
    return res;
}