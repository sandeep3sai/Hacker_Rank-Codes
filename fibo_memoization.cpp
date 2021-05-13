#include<iostream>
#include<chrono>
using namespace std;

long long int fibo(int n) {

long long int fib[n];
fib[0]=1;
fib[1]=1;
if (n==1) return 1;
else if (n==2) return 1;
else {
for (int i=2;i<n;i++){
fib[i]= fib[i-1]+fib[i-2]; }

}
return fib[n-1];
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