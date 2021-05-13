#include <iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin>>n;
int a[n];

for (int i=0;i<n;++i) {
cin>>a[i];

}

float pve=0,nve=0,zero=0;

for (int i=0;i<n;++i){
if (a[i]>0)  pve++;
else if (a[i]<0) nve++;
else zero++;
}

cout<<pve/n<<endl<<nve/n<<endl<<zero/n;


}