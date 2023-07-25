long minSum = 0, maxSum =0, n= arr.size();
    sort(arr.begin(), arr.end());
    for(int i= 0; i< 4; i++){
        minSum += arr[i];
        maxSum += arr[n-1 -i];
    }
    cout<< minSum <<" " << maxSum;