#include<iostream>

using namespace std;

int main(){
  int N,D;
  int cnt = 0,cnt1 = 0;
  double e;
  int flag = 1;
  cin>>N>>e>>D;
  for(int i = 0;i < N;i++){
  	  int n;double t;
	  int cntd = 0; 
	  cin>>n;
	  int ti = 0;
	  if(n <= D) flag  = 0;
	  while(ti < n){
	  	cin>>t;
	  	if(t-e < 0)
	  		cntd++;
	  	ti++;
	  }
	  if(!flag)	{
	  	if(cntd > n/2)
	  		cnt++;
	  }
	  else {
	  	if(cntd > n/2)
	  		cnt1++;
	  }
	  flag = 1;
  }
  printf("%.1f%% %.1f%%",cnt*100.0/N,cnt1*100.0/N);
  return 0;
} 

