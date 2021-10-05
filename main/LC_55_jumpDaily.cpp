bool canJump(vector<int>& nums) {
    int n = nums.size();
    int reachable = 0; // current reachability is only upto index 0
    int curr;             // current index
    for (curr=0; curr<n; curr++){
        if (curr > reachable){        // current crosses maximum reachable index
            return false;
        }
        if (curr + nums[curr] > reachable){         //max distance from the curr index
            reachable = curr + nums[curr];          /// update reachable
        }
    }
    return true;
} 