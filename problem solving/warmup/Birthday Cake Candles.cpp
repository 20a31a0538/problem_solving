sort(candles.begin(), candles.end());
    int n = candles.size();
    int max = candles[n-1];   //last element
    int cnt = 0;
    int tall = n-1;   //index point to last element
    while(candles[tall] == max){
        cnt++;
        tall--;
    }
    return cnt;