class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int b = 0;
        int ans = 0;
        for(auto s:bank){
            int c = 0;
            for(int i=0;i<s.length();++i){
                if(s[i]=='1'){
                    ++c;
                }
            }
            if(c!=0&&b!=0){
                ans+=b*c;
                b = c;
            }else if(b==0&&c!=0){
                b=c;
            }
        }
        return ans;
    }
};
