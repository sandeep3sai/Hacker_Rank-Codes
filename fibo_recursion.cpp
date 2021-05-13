#include<iostream>
#include<chrono>
using namespace std;

long long int fibo(int n) {

if (n==1) return 1;
else if (n==2) return 1;
else return fibo(n-1)+fibo(n-2); 

}



int main(){

int n;
cin>>n;
chrono::time_point<chrono::system_clock> start,stop;
chrono::duration<double> elapsed_time;

start = chrono::system_clock::now();
long long int out = fibo(n);
stop = chrono::system_clock::now();
elapsed_time = stop-start;

cout<<out<<endl;;
cout<<elapsed_time.count()<<endl;

}