#include<bits/stdc++.h>
using namespace std;
vector<int> swapAdjacent(stack<int> s){
vector<int> v;
while(s.size()>1){
    int a=s.top();
    s.pop();
    int b=s.top();
    s.pop();
    swap(a,b);
    v.push_back(a);
    v.push_back(b);

}
//remaining elements which are odd
if(!s.empty()){
   v.push_back(s.top());
   s.pop();
   }
   reverse(v.begin(),v.end());
   return v;
}
int main(){
stack<int> s;
int n;
cout<<"Enter the number of elements:";
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    s.push(x);
}
vector<int> result=swapAdjacent(s);
cout<<"After Swapping elemets :";
for(int x : result){
    cout<<x<<" ";
}
return 0;
}
