vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
    int n1 = firstList.size();
    int n2 = secondList.size();
    vector<vector<int>> res;
    int i=0, j=0;
    while (i<n1 && j<n2){
        vector<int> x;
        int csp = max(firstList[i][0], secondList[j][0]);
        int cep = min(firstList[i][1], secondList[j][1]);
        if (csp <= cep){
            x.push_back(csp);
            x.push_back(cep);
            res.push_back(x);
            
        }
        if (firstList[i][1] < secondList[j][1]){
                i++;
            }else{
                j++;
        }
        
    }
    return res;
}