int singleNumber(vector<int>& nums) {
    // used xor property
    int result = nums[0];
    for (int i=1; i<nums.size(); i++){
        result = result^nums[i];
    }
    return result;
}