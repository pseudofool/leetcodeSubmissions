int removeDuplicates(vector<int>& nums) {
    if (nums.size() < 3){
        return nums.size();
    }
    int n = nums.size();
    int index = 2;
    for (int i=2; i<n; i++){
        if (nums[i] != nums[index-2]){
            nums[index] = nums[i];
            index++;
        }
    }
    return index;
}