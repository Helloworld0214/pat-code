#include<iostream>


using namespace std;


int main(){
	char N[1005];
	int index[100];
	cin>>N;
	int i = 0,cnt = 0;
	while(N[i]!='\0'){
		cnt +=(N[i]-'0');
		i++;
	}
	if(!cnt)	cout<<"ling";
	else {
		i = 0;
		while(cnt){
			index[i] = cnt%10;
			cnt /=10;
			i++; 	
		}
		cout<<num[index[--i]];
		while(i)
			cout<<" "<<num[index[--i]];
	}
	return 0;
}
 
