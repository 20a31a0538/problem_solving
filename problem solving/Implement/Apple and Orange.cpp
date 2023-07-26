void countApplesAndOranges(int& s, int& t, int& a, int& b, vector<int>& apples, vector<int>& oranges) {
    int apple_cnt =0, orange_cnt =0;
    //apple distance
    for(int& apple_dist : apples){
        if((apple_dist + a >= s) && (apple_dist + a <= t)){
            apple_cnt++;
        }
    }
    //orange dist
    for(int& or_dist: oranges){
        if((or_dist + b <=t) && (or_dist + b >= s)){
            orange_cnt++;
        }
    }
    
    //print count
    cout<< apple_cnt<<endl;
    cout<< orange_cnt;
}