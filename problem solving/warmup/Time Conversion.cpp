string timeConversion(string s) {
    string hour_str = s.substr(0,2);
    int hour = stoi(hour_str);
    size_t pos = s.find("PM");
    if(pos != string::npos){
        if(hour +12 < 24){
            hour_str = to_string(hour + 12);
            
        }
    }else{
            if(hour == 12){
                hour_str = "00";
            }
        }
        return s.replace(0,2,hour_str).erase(s.size() - 2);
    
     
  
}