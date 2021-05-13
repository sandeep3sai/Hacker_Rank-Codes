#include <bits/stdc++.h>

using namespace std;

long triplet(long a[],long n,long r) {
	
	unordered_map<long,long> right,left;
	//unordered_map<long,long>::iterator it_r,it_l;
	long count =0;
	//it_r =right.begin();
	//it_l =left.begin();
	for (long i=0;i<n;i++) {
		
		right[a[i]]++;
		
		
	}
	
	// to iterate through the map
	
	//for (it_r=right.begin();it_r!=right.end();it_r++) {/
		
		//cout<<it_r->first<<"   "<<it_r->second<<endl;		
		
	//}
	
	for (long i=0;i<n;i++) {
		right[a[i]]--;
		long cr = right[a[i]*r];
		long cl =left[a[i]/r];
		left[a[i]]++;
		
		
		count = count+(cr*cl);
		//cout<<count<<"hi "<<cr<<"  "<<cl<<endl;
		
	}
	
	
	return count;
	
	
}



int main() {

long n,r;
long count=0;
long a[n];
cin>>n;cin>>r;

for (long i=0;i<n;i++) {
cin>>a[i];
}


for (long i=0;i<n;i++) {
	for (long j=i+1;j<n;j++) {
		long k =a[j]/r;
		
		if (a[i] == k) {
		for (long m=j+1;m<n;m++) {
		long l = a[m]/pow(r,2);
		if (a[i] == l) { count++;//cout<<i<<" "<<j<<" "<<m<<endl;
		}
		}
		}
	}
}

cout<<count<<endl;

long c = triplet(a,n,r);
cout<<c<<endl;

}
