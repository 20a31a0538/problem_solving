int n;
    for(int& grade : grades){
        if(grade >=38){
            n=grade % 5;
            if(n >= 3){
                grade += (5-n);
            }
        }
    }
    return grades;