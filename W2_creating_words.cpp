#include <iostream>
using namespace std;



int main() {
  int a;
  cin >> a;
  char f[a][3];
  char g[a][3];
  string c;
  string d;
  
  char k;
  
  
  for (int i=0;i<a;i++){
    cin >> c;
    cin >> d;
    for(int j=0;j<3;j++){
          f[i][j]=c[j];
        g[i][j]=d[j];
     };
    
 };
 for (int i=0;i<a;i++){
    k=f[i][0];
    f[i][0]=g[i][0];
    g[i][0]=k;
    
 };
 
  for (int i=0;i<a;i++){
    
     for(int j=0;j<3;j++){
          cout<<f[i][j];
     };
     cout<<"\t";
     
     for(int j=0;j<3;j++){
          cout<<g[i][j];
     };
     cout<<"\n";
     
    
 };
 
 
  
}
