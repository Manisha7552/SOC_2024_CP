#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>stk;
        vector<int>y;
        int a= asteroids.size();


        for (int i=0;i<a;i++){
            if(stk.empty()||asteroids[i]>0){
                stk.push(asteroids[i]);
            }
            else {
                while(!stk.empty()&&stk.top()<-asteroids[i] && stk.top()>0){
                    stk.pop();
                }
               if(stk.empty()||stk.top()<0){
                  stk.push(asteroids[i]);
               }
               else if(stk.top()==-asteroids[i]){
                stk.pop();
               }
            }
            

        }
    }
}    
int main(){
    
    vector<int>a;
    Solution d;
    cout<< d.asteroidCollision(a);
    return 0;
}
