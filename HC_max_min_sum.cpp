#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() 
{
int val,i;
long long int sum=0;

vector<int> array;
int arr[5];

cout<<"enter the value :"<<endl;

for(i=0; i<5; i++)
{
        
		cin>>val;
        arr[i] = val;
        sum = sum+val;
}

// sort the input
for (int k=0;k<(sizeof(arr)/sizeof(arr[0]));k++){
    for (int j=k+1;j<(sizeof(arr)/sizeof(arr[0]));j++){
        if(arr[k]>arr[j]){
            swap(arr[k],arr[j]);
            // int c=arr[k];
            // arr[k]=arr[j];
            // arr[j]=c;
        }
    }
}

cout<<sum-arr[4]<<" "<<sum-arr[0]<<endl;  
cout<<"sorted array :  ";
for (i=0;i<5;i++){
	cout<<arr[i]<<"  ";
}

return 0;
}

// define swap
int swap(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
    return (a,b);
}
