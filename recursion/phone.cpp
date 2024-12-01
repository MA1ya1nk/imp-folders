#include<bits/stdc++.h>
#include<vector>
using namespace std;
string alpha(int num){
    if(num==2){
     return "abc";
    }
    if(num==3){
        return "def";
    }
    if(num==4){
        return "ghi";
    }
    if(num==5){
        return "jkl";
    }
    if(num==6){
        return "mno";
    }
    if(num==7){
        return "pqrs";
    }
    if(num==8){
        return "tuv";
    }
    if(num==9){
        return "wxyz";
    }
}
void phone(string str,int index,vector<char> output,vector<vector<char>> &ans){
      if(index>=str.length()){
          
      }
      phone(str,++index,output,ans);
     
}
int main(){
    string str;
    cout<<"enter the string"<<endl;
    cin>>str;
    vector<vector<char>> ans;
    vector<char> output;
    vector<string> ans;
    vector<string> temp;

    for(int i=0;i<str.length();i++){
        int n=str[i]-'0';
        string s=alpha(n);
        temp.push_back(s);

    }

    for(auto i: temp){
        cout<<i<<" ";
    }


     phone(str,index,output,ans);
   vector<vector<int>> ans;
   ans[0].push_back(1);
   ans[0].push_back(2);
   ans[1].push_back(3);
   ans[1].push_back(4);
   for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
   }


}