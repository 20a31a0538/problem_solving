void bonAppetit(vector<int>& bill, int& k, int& b) {
    int sum =0;
    for(int& item : bill ){
        sum += item;
    }
    int mustpay = (sum - bill[k])/2;
    if(mustpay == b) cout<<"Bon Appetit";
    else cout<< b - mustpay;
}