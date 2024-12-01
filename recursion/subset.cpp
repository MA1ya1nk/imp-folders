#include<iostream>
#include<vector>
using namespace std;
void subsets(vector<int> num,int index,vector<int> output,vector<vector<int>> &ans){
    if(index >= num.size()){
        ans.push_back(output);
        return ;
    }
    subsets(num,index+1,output,ans);
    int b=num[index];
    output.push_back(b);
    subsets(num,index+1,output,ans);
}
int main(){
   vector<int> num;
   int n;
   cout<<"enter the size of array"<<endl;
   cin>>n;
   for(int i=0;i<n;i++){
         int a;
         cin>>a;
         num.push_back(a);
   }
   for(int i=0;i<n;i++){
    cout<<num[i]<<" ";
   }
   vector<int> output;
   int index=0;
   vector<vector<int>> ans;
   subsets(num,index,output,ans);
   cout<<"size "<<ans.size()<<endl;
   for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
   }

}