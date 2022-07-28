class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> s_vec, t_vec;
        if(s.size() != t.size()){
            return false;
        }
        for(int i = 0; i < s.size(); i++){
            s_vec.push_back(int(s[i]));
            t_vec.push_back(int(t[i]));
        }
        sort(s_vec.begin(), s_vec.end());
        sort(t_vec.begin(), t_vec.end());
        for(int i = 0; i < s.size(); i++){
            if(s_vec[i] != t_vec[i]){
                return false;
            }
        }
        return true;
    }
};