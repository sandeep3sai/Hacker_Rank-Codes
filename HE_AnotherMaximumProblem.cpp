#include <iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

int main() {
vector<int> v;
int n; 
int arr[n];
int t; // number of test cases
cout<<"enter the number of inputs :  ";
cin>>n;

for (int i=0;i<n;i++){
cin>>arr[i];
v.push_back(arr[i]);

}

cout<<"\nAfter Unique :"<<endl;
unique(v.begin(),v.end());

for (int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
	
}

sort(v.begin(),v.end());

cout<<"After sorting : "<<endl;
for (int i=0;i<n;i++){
    cout<<v[i]<<" ";
}

cout<<"\n After Reverse :"<<endl;
reverse(v.begin(),v.end());
//cin>>t;

for (int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}


}