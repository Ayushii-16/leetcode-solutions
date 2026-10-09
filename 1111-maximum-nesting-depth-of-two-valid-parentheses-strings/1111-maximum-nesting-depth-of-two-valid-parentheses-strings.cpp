class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int n = seq.length();
        int depth = 0;
        vector<int>v;
        for(int i=0;i<n;i++){
            if(seq[i] == '('){
                v.push_back(depth%2);
                depth++;
            }
            else {
                depth--;
                v.push_back(depth%2);

            }
        }
        return v;
    }
};