class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> res;
        res.push_back(first);
        for(int i=0;i<encoded.size();i++)
        {
            res.push_back(first^encoded[i]);// A xor B xor B = A
            first=res[i+1];
        }
        return res;
    }
};