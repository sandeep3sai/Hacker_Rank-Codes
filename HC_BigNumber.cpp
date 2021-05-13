#include<bits/stdc++.h>

using namespace std;

int main() {
int num;
cin>>num;

int  a[400];
a[0] = 1;
int size =1;
int res;

for (int i=2;i<=num;i++) {
	
	int carry =0;
	
	for (int j=0;j<size;j++) {
		
		res = i*a[j] + carry;
		
		carry = res/10;
		
		a[j] = res%10;  }
		
	while (carry) {
	
		a[size] = carry%10;
		carry = carry/10; 
        size++;   }
	
	}
	
for(int i=size-1;i>=0;i--) {
cout<<a[i]; }
		
}
