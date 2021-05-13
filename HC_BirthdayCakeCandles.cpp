#include <algorithm>
#include<vector>
#include <iterator>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	
	long int n;
	long long int val;
	int total;
	
	vector<long long int>  arr;
	//cout<<"Enter the age : ";
	cin>>n;
	
	for (long int i=0;i<n;i++){
		cin>>val;
		arr.push_back(val);
	}
	
	sort(arr.begin(),arr.end());
	total = count(arr.begin(),arr.end(),arr[n-1]);
	
	cout<<total;
	
}
	