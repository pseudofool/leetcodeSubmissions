    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        int index = -1;
        for (int i=1; i<nums.size(); i++){
            sum += nums[i];
        }
        int lSum = 0;
        int rSum = sum;
        for (int i=0; i<nums.size(); i++){
            if (lSum == rSum){
                index = i;
                return index;
            }
            lSum = lSum + nums[i];
            rSum = rSum - nums[i+1];
        }
        return -1;
    }