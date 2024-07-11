class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       map<int, int> unique;
       set<int>s;

      int  x=arr.size();
        
        for(int i=0;i<x;i++){
            unique[arr[i]]++;
        }

        for (auto x:unique){
            s.insert(x.second);
        }
        if(s.size()==unique.size()){
            return true;
        }
        else{
            return false;
        }



        
    }

};
int main(){
    
    vector<int> a;
    int b,c;
    cin>>b;
    for(int i=0;i<b;i++){
        cin>>c;
        a.push_back(c);
    }
    Soultion d;
    cout<< d.uniqueOccurrences(vector<int>& arr);
    return 0;
}
