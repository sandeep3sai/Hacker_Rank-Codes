#include<bits/stdc++.h>

using namespace std;

int bsearch(int a[],int l,int h) {
	
	if 
	
	
}

int main() {

int n,d,num;
cin>>n>>d;

int median,notification =0;

vector<int> a,c;

for (int i=0;i<n;i++) {

	cin>>num;
	a.push_back(num);

}



for (int i=0;i<n-d;i++) {
sort (a.begin(),a.begin()+d-1);			
		if (i!=0) { 
	
		if (d/2 != 0 || d==1) {
			median = a[(2*i+d)/2]; cout<<"odd median :" <<median<<endl;}
	
		else { median = (a[(2*i+d)/2] + a[((2*i+d)/2)-1])/2; cout<<"even median :" <<median<<endl;}
		
		if (a[d+i] >=2*median) {cout<<"notif : "<<a[d+i]<<" : "<<2*median<<endl;notification++;}
		

	


}
cout<<notification<<endl;
}