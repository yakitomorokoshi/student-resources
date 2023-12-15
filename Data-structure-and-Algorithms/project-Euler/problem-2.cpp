// https://projecteuler.net/about

#include <iostream>
int F1,F2,F3;
int main(){

  int s=2;
  F1=1, F2=2;

  for(;;){
    F3=F1+F2;
    if(F3%2==0){
      if(s<4000000){
        s+=F3;
      }
      else{
        break;
      }    
    }
    F1=F2;
    F2=F3;
  }
  
  std::cout<<s;
  return 0;
}

/*
int main(){
  int s=2;
  F1 = 1, F2 = 2;
  while (s <= 4000000) {
      F3 = F1 + F2;
      if (F3 % 2 == 0) {
          s += F3;
      }
      F1 = F2;
      F2 = F3;
  } std::cout << s;
  return 0;
}
*/

/*
int main(){
    int s = 2;
    F1 = 1, F2 = 2;
    for (;s<=4000000;){
        F3 = F1 + F2;
        if (F3 % 2 == 0){
           s += F3;
        }
        F1 = F2;
        F2 = F3;
    } std::cout << s;
    return 0;
}
*/