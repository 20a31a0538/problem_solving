int viralAdvertising(int n) {
    int people =5; int likes =2;
    if(n>1){
        for(int i =2; i<=n;i++){
            people = floor(people/2) * 3;
            likes += floor(people/2);
        }
    }
    return likes;

