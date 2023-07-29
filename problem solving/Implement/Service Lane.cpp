vector<int> serviceLane(int n, vector<vector<int>> cases, vector<int> width) {
    int i, j, k, smallest; 
    vector<int> ans(cases.size());
    for(int x=0; x < cases.size(); x++){
        i = cases[x][0];
        j=cases[x][1];
        k=i;
        smallest = INT_MAX;
        while(k<=j){
            smallest =min(width[k], smallest);
            k++;
            }
            ans[x] = smallest;   //assign smallest to answer vector
        
    }
    return ans;

}