class Solution {
public:
bool Match(string&s, int si, string&p, int pi)
{
    //base case
    if(si==s.size() && pi==p.size()){
        return true;
    }
    //if si is empty and pi is not empty
    if(si==s.size () && pi<p.size() ){
        while(pi<p.size()){
            if(p[pi]!='*')
            return false;
            pi++;
        }
        return true;
    }

    if(s[si]==p[pi] || p[pi]=='?')
    {
    return Match(s,si+1,p,pi+1);
    }
    if(p[pi]=='*'){
        //treat * as empty
        bool case1 = Match(s,si,p,pi+1);
        //* consumes element
        bool case2=Match(s,si+1,p,pi); 
        return case1 || case2; 
     }
    return false;
    //character doesnt match
}
    bool isMatch(string s, string p) {
        int si=0;//pointer index for s string
        int pi=0;//pointer index for p string
        return Match(s,si,p,pi);
    }
};
