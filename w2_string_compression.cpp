 class Solution {
  public:
    int compress(vector<char>& chars) {
        int c= chars.size();
        vector<char> y(0);
        
        
        int k=1;int j;
        for(int i=1;i<=c;i++){
            if(i<c && chars[i]==chars[i-1] ){
                k++;

            }
            else{
                y.push_back(chars[i-1]);
                if(k>1){
                     string temp=to_string(k);
                    for(char ch:temp){
                        y.push_back(ch);
                    }
                }
                k=1;
            }

                        
   

        }
        j=y.size();
        chars=y;
        return j;


        
    }
};
