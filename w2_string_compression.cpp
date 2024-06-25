class Solution {
public:
    int compress(vector<char>& chars) {
        int c= chars.size();
        vector<char> y(0);
        
        int k=1;int j;
        for(int i=0;i<c-1;i++){
            if(chars[i]==chars[i+1]){
                k++;

            }
            else{
                if(k==1){
                    y.push_back(chars[i]);
                    
                }
                else{
                     y.push_back(chars[i]);
                    
                    string f=to_string(k);
                    for(char ch:f){
                     y.push_back(ch);
                     
                     }
                     
                    k=1;
                    

                }

            }

        }
        j=y.size();
        chars=y;
        return j;


        
    }
};