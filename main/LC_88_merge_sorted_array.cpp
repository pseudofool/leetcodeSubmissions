void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int current = n+m-1;
    int p1 = m-1;
    int p2 = n-1;
    while(p2>=0){
        if (p1>=0 && nums1[p1]>nums2[p2]){
            nums1[current] = nums1[p1];
            current--;
            p1--;
        }else{
            nums1[current] = nums2[p2];
            current--;
            p2--;
        }
    }
}