#include <iostream>
using namespace std;
int mohasebeh(int);

int main(){

 int n;


 for (int i=1;i<201;i++){
 n=i;
 n =mohasebeh(n);
   cout<<i<<"  -->  "<< n<<"\n";
}
 return 0;
}


int mohasebeh(int n){
int result;
if(n==1){ return 1;}
if(n-1>0){
result= mohasebeh(n-1);
 if(n%2==0){
result++;
 }

  if(n%5==0){
result++;
 }

  if(n%10==0){
result++;
 }

  if(n%50==0){
result++;
 }

  if(n>5){
      int temp;
      temp=n/5;
 if( n%(5*temp)==2 || n%(5*temp)==4){
result++;
 }
  if(temp>1){
      if( n%(5*temp)==1 || n%(5*temp)==3){
     result++; }}
}


if(n>10){
    int temp;
    temp=n/10;
if( n%(10*temp)==2 || n%(10*temp)==4 || n%(10*temp)==6  || n%(10*temp)==8){
result++;
}

if(n%(temp*10)>5){
 if((n%(temp*10))%5==2 || (n%(temp*10))%5==4){
    result +=2;
} }

if(temp>1){
    if((n%10)==0){
    result +=3;}
    if( n%(10*temp)==2){
   result+=3; }

    if( n%(10*temp)==1 || n%(10*temp)==3){
   result+=2; }
}

  if( n%(10*temp)==5){
result+=2;
}




}

}
return result;
}
