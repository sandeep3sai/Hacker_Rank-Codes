using namespace std;
#include <iostream>
#include <chrono>
#include<unordered_map>


//char hash_func (char s) {/

//return  s;

//}

int main() {

chrono::time_point<chrono::system_clock> start, stop;
chrono::duration<double> elapsed_seconds;
start = chrono::system_clock::now();

string s ="abbacccbbnnmmmaasswweerrttyy";

unordered_map <char,int> dup;
unordered_map<char,int>::iterator  iter;


for (char i :s) {

dup[i]++;

}
for (iter =dup.begin();iter!=dup.end();iter++) {
//cout<<iter->first <<" "<< iter->second <<endl; 
cout<<(*iter).first <<" "<< (*iter).second <<endl; 
}


stop = chrono::system_clock::now();
elapsed_seconds = stop - start;

cout << "Time taken "<< elapsed_seconds.count() << "s\n";




}