int birthday(vector<int> s, int d, int m) {
    int cnt=0;
    for(int i=0;i<s.size(); i++){
        if(i+m-1 < s.size()){
            int sum =0;
            //sum up to m size sub array
            for(int j = i; j<= i+m-1; j++){
                sum += s[j];
            }
            if(sum == d){
                cnt++;
            }
        }
    }
    return cnt;

}