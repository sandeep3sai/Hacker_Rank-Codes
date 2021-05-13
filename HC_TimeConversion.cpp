#include <iostream>
#include <string>
#include <sstream>
#include<vector>
#include <cstring>
using namespace std;

int main() {
	
	string   s,s1,s2,s3,s4;
    s3 ="0";

	cin>>s;	
	
for (int i=0;i<2;i++){
	
	s1.append(1,s[i]);
	
	
}
	int a = stoi(s1);
	
	if (s[8]=='P' && a!=12) {
		
		a=a+12;
		
	}
	
	else if (s[8] =='A' && a==12){
		a =0;
	}
	if (a>=10) {
		s2 = to_string(a); }
		
	else { s4 = to_string(a);
	s2 = s3.insert(1,s4);}
	
	s.replace(0,2,s2);
	s.erase(8,2);
	

     cout<<s<<endl;

}
