int designerPdfViewer(vector<int> h, string word) {
    int max =0; 
    for(char& c : word){
        int current_char_height = h[c - 97];
        max = (max < current_char_height) ? current_char_height : max;
    }
    return max*word.size();

}