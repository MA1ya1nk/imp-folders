#include<iostream>
#include<vector>
using namespace std;
void subsequence(string str,int index,vector<char>output,vector<vector<char>> &ans){
    if(index >= str.length()){
           ans.push_back(output);
           return ;
    }
    subsequence(str,index+1,output,ans);
    char ch=str[index];
    output.push_back(ch);
    subsequence(str,index+1,output,ans);

}
int main(){
    string str;
    cout<<"enter name"<<endl;
    cin>>str;
    int index=0;
    vector<vector<char>> ans;
    vector<char> output;
    subsequence(str,index,output,ans);
    cout<<"size "<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}