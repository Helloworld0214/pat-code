#include<iostream>

using namespace std;

int input(char num[][20]){
  int cnt = 0;
  char str;
  while((str=getchar())!='\n'){
    if(str == '[')
      scanf(" %[^]]",num[cnt++]);
  }
  return cnt;  
} 



int main(){
  char hands[12][20],eyes[12][20],mouths[12][20];
  string ERROR = "Are you kidding me? @\\/@";
  int cnth = 0,cnte = 0,cntm = 0;
  cnth=input(hands);
  cnte=input(eyes);
  cntm=input(mouths); 
  int N,lefthand,lefteye,mouth,righteye,righthand;
  cin>>N;
  for(int i = 0;i < N;i++){
    cin>>lefthand>>lefteye>>mouth>>righteye>>righthand;
    if(lefthand>cnth||righthand>cnth
    ||lefteye>cnte||righteye>cnte||mouth>cntm||lefthand<=0||lefteye<=0||righteye<=0||mouth<=0||righthand<=0){
        cout<<ERROR<<endl;  
        continue;
    }
    printf("%s(%s%s%s)%s\n",hands[lefthand-1],eyes[lefteye-1],mouths[mouth-1],eyes[righteye-1],hands[righthand-1]);
  }
  return 0;
} 

/*
[¨r][¨q][o][~\][/~][<][>]
[¨s][¨t][^][-][=][>][<][@][¡Ñ]
[§¥][¨Œ][_][¦Å][^]
4
1 1 2 2 2
6 8 1 5 5
3 3 4 3 3
2 10 3 9 3
*/
