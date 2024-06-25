#include <iostream>
#include <cmath>
#include<vector>
using namespace std;

vector<int> ternary (int x){
 std::vector<int> y;
  int t;
  while (x>0){
    t=x%3;
    y.push_back(t);
    x/=3;
  } 
  return y;
}

vector<int> bvector (vector<int>&a,vector<int>&c){
 std::vector<int> y;
 for (int i =0; i<a.size(); i++) {
  if ((a[i]==2 && c[i]==2)||(c[i]==1 && a[i]==1)||(c[i]==0 && a[i]==0)){
    y.push_back(0);
  }
  else if ((a[i]==2 && c[i]==1)||(a[i]==0 && c[i]==2)||(a[i]==1 && c[i]==0)){
    y.push_back(2);

  }
  else if ((a[i]==2 && c[i]==0)||(a[i]==0 && c[i]==1)||(a[i]==1 && c[i]==2)){
    y.push_back(1);
    
  }
  else{
    continue;
  }

 }
  
  return y;
}
int bvalue(vector<int>&b){
  int c=0;
  int d=1;

  for(int i=0;i<b.size();i++){
    c+=b[i]*d;
    d*=3;
  }
  return c;
}



int main() {
  int a,c,b;
  cout<<"Enter a";
  cin>>a;
  cout<<"Enter c";
  cin>>c;

  vector<int> aa=ternary(a);
  vector<int> cc=ternary(c);
  vector<int> bb;
  
  (aa.size() > cc.size()) ? cc.resize(aa.size(), 0) : aa.resize(cc.size(), 0);  aa.resize(cc.size(), 0);

  bb=bvector(aa,cc);
  b=bvalue(bb);
  cout<<"b="<<b;
  return 0;

}

