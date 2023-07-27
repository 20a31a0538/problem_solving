vector<int> breakingRecords(vector<int>& scores) {
    int mini = scores[0], maxi = scores[0], most = 0, least =0;
     
    for(int i=1; i<scores.size(); i++){
        if(scores[i] > maxi){
            maxi = scores[i];
            most++;
        }
        else if(scores[i] < mini){
            mini = scores[i];
            least++;
        }
    }
    return vector<int> ({most, least});
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string scores_temp_temp;
    getline(cin, scores_temp_temp);

    vector<string> scores_temp = split(rtrim(scores_temp_temp));

    vector<int> scores(n);

    for (int i = 0; i < n; i++) {
        int scores_item = stoi(scores_temp[i]);

        scores[i] = scores_item;
    }

    vector<int> result = breakingRecords(scores);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}