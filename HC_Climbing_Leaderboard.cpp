#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);


inline int binarySearch( vector<int> arr , int x , int low , int high )
{
    int mid;
    while( low < high ) {
        mid = ( high + low ) / 2;
        if( arr[mid]== x ) {
            break;
        }
        else if( arr[mid] < x ) {
            high=mid-1;
        }
        else {
            low= mid+1;
        }
    }
    mid = ( high + low ) / 2;
    if (x>=arr[mid])
        return mid+1;
    else 
        return mid+2;
}
// Complete the climbingLeaderboard function below.
vector<int> climbingLeaderboard(vector<int> scores, vector<int> alice) {

    vector<int>::iterator itr;
    itr = unique(scores.begin(),scores.end());
    scores.resize(distance(scores.begin(), itr));
    vector<int> result1(alice.size());
    // itr = NULL;
    result1[0] = scores.size();
    for (long int i=0;i<alice.size();i++) {
        // scores.push_back(alice[i]);
        
        // inplace_merge(scores.begin(),scores.end()-1,scores.end(),greater<int>());
        // if (i==0)
        //  result1[i] = binarySearch(scores , alice[i] , 0 , result1[0]-1 );
        // else 
        //  result1[i] = binarySearch(scores , alice[i] , 0 , result1[i-1]-1 );
        //  high+=1;
        // itr = find(scores.begin(),scores.end(),alice[i]);
        
        // result1.push_back(high+1);
        
        itr = lower_bound(scores.begin(),scores.end(),alice[i],greater<int>());
        result1[i] = distance(scores.begin(),itr)+1;
    }
    return result1;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int scores_count;
    cin >> scores_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string scores_temp_temp;
    getline(cin, scores_temp_temp);

    vector<string> scores_temp = split_string(scores_temp_temp);

    vector<int> scores(scores_count);

    for (int i = 0; i < scores_count; i++) {
        int scores_item = stoi(scores_temp[i]);

        scores[i] = scores_item;
    }

    int alice_count;
    cin >> alice_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string alice_temp_temp;
    getline(cin, alice_temp_temp);

    vector<string> alice_temp = split_string(alice_temp_temp);

    vector<int> alice(alice_count);

    for (int i = 0; i < alice_count; i++) {
        int alice_item = stoi(alice_temp[i]);

        alice[i] = alice_item;
    }

    vector<int> result = climbingLeaderboard(scores, alice);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

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
