#include<iostream>
using namespace std;
bool power(int n){
    int cnt=0;
    while(n>0){
        if((n&1) == 1){
          cnt++;  
        }
        n=n>>1;
    }
    if(cnt==1){
        return true;
    }
    else{
        return false;
    }
}
string counterGame(long n) {
      int count=1;
      while(n != 1){
          if(power(n)){
              n=n/2;
              count++;
          }
          else{
              int small=1;
              while(small<n){
                  small=small*2;            
              }
              small=small/2;
              
              n=n-small;
              count++;
          }
      }
      if((count%2)==0){
          string str="Richard";
          return str;
      }
      else{
         string str1="Louise";
         return str1; 
      }
      
}
int main(){
    long n=6;
    string name="";
    name=name+counterGame(n);
    cout<<name;
    // cout<<"mayank";

}

