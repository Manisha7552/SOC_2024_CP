#include <iostream>
using namespace std;
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int k=word1.length()+word2.length();
        string f(k, ' '); 
        int i=0;
        int j=0;
        int l=0;
        
        while ((i<word1.length())&&(l<word2.length())){
            f[j]=word1[i];
            j++;
            i++;
            f[j]=word2[l];
            j++;
            l++;

        }
        
            while(l<word2.length()){
                f[j]=word2[l];
                l++;
                j++;

            }
        
        
        
            while(i<word1.length()){
                f[j]=word1[i];
                i++;
                j++;

            }
        
        
        return f;
    }
};

int main(){
    
    string a;
    string b;
    cin>>a;
    cin>>b;
    Solution d;
    cout<< d.mergeAlternately(a,b);
    return 0;
}
