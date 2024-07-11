class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string str3;
        if (str1 + str2 != str2 + str1) {
            return "";}
        else{
            int a=str1.size();
            int b=str2.size();
            int temp;
            while (b!=0){
                temp=b;
                b=a%b;
                a=temp;
            }
            

             return str1.substr(0,a);
            

        }
        
    }
};