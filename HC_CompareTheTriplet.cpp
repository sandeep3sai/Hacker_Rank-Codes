#include <iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int a[3],b[3];
	int a_score=0,b_score=0;
	
	for (int i=0;i<3;i++) {
	cin>>a[i];}
	
	for (int i=0;i<3;i++) {
	cin>>b[i];}

	
	
	for (int i=0;i<3;i++) {
		if (a[i]>b[i]) {
			a_score +=1;

		}
		else if(a[i]<b[i]) {
			b_score +=1;
			
		}
		
	}
	
	cout << a_score <<" "<<b_score;
}

