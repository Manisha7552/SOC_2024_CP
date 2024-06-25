#include <iostream>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int j=0;
        int x=0;
        int y=1;
        for(int i=n;i>1;i/=2){
            j=i%2;
            if(j==1){
                break;
            }
            x++;
        }
        for(int f=x;f>0;f--){
            y*=2;
        }
        if(y==n){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    
    int a;
    cin >> a;
    
    Solution d;
    cout << (d.isPowerOfTwo(a) ? "true" : "false") << endl;
    return 0;
}
