int numberOfArithmeticSlices(vector<int>& nums) {
    int n = nums.size();
    if (n<3){
        return 0;
    }
    int ans[n];
    ans[0] = 0;
    ans[1] = 0;
    for (int i=2; i<n; i++){
        if ((nums[i]-nums[i-1]) == (nums[i-1]-nums[i-2])){
            ans[i] = ans[i-1] + 1;
        }else{
            ans[i] = 0;
        }
    }
    int count = 0;
    for (int i=0; i<n; i++){
        count += ans[i];
    }
    return count;
}