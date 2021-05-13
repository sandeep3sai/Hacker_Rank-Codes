 #include <iostream>
 #include <string>
 #include<chrono>
 using namespace std;
 
 int hash_func(char); // function prototype
 
 int main() {
 
 string s;
 cin>>s;
 
 chrono::time_point<chrono::system_clock> start,stop;
  
 int freq[26]={0};
 cout<<freq[15]<<endl;
 
 for (int i=0;i<s.size();++i) {
 
 int index = hash_func(s[i]) ;
 freq[index]++;
 
 }
 
 for (char i= 'a';i<='z';i++) {
 cout<<"freq of  "<<i<<" is :  "<<freq[i-'a']<<endl;
 
 }
 
 }
 
 int hash_func(char c) {
 
 return (c-'a');
 
 }
   
  