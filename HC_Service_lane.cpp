#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the serviceLane function below.
// Complete the serviceLane function below.
vector<int> serviceLane(vector<int> width, vector<vector<int>> cases) {
    vector<int> result;
    
    for (long unsigned int i=0;i<cases.size();i++) {
        int min = INT_MAX;
		
        for (long unsigned int j = cases[i][0];j<=cases[i][1];j++) {
			
            if (width[j]<min) min = width[j];

        }
        
        result.push_back(min);

    }
    return result;

}

int main()
{


    string nt_temp;
    getline(cin, nt_temp);

    vector<string> nt = split_string(nt_temp);

    int n = stoi(nt[0]);

    int t = stoi(nt[1]);

    string width_temp_temp;
    getline(cin, width_temp_temp);

    vector<string> width_temp = split_string(width_temp_temp);

    vector<int> width(n);

    for (int i = 0; i < n; i++) {
        int width_item = stoi(width_temp[i]);

        width[i] = width_item;
    }

    vector<vector<int>> cases(t);
    for (int i = 0; i < t; i++) {
        cases[i].resize(2);

        for (int j = 0; j < 2; j++) {
            cin >> cases[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    vector<int> result = serviceLane(width, cases);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << "\n";
        }
    }

    cout << "\n";

    

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
