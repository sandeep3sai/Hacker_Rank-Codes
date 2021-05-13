      using namespace std;
      #include <iostream>
      #include <chrono>
	  
	  int main() {
	  int a[10] ={1,10,-5,6,-7,15,17,-10,12,-1};
	  
	  int m[10];
	  int max =0;
	  
	  m[0] = a[0]>0 ? a[0] : 0;
	  
	  for (int i=1;i<10;i++) {
	  
	  if (m[i-1]+a[i] >0) m[i] = m[i-1]+a[i] ;
	  else m[i] =0;
	  
	  cout<<m[i]<<endl;
	  
	  
	  }
	  
	  
	  //cout<<m[3]<<endl;;
	  
	  }