int hurdleRace(int k, vector<int> height) {
    sort(height.begin(), height.end());
    if((height[height.size() - 1] - k) > 0){
        return (height[height.size() - 1] - k);
    } else{
        return 0;
    }
    

}