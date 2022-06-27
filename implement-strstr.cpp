class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = needle.length();
        int n = haystack.length();
        int p = 0, t=0, d= 256, val = 0;
        int count = 0;
        int h = 1;
        const int q=101;
        if(m == 0){
            return 0;
        }
        for(int i = 1; i<m; i++){
            h = (h*d)%q;
        }
        for(int i = 0; i<m; i++){
            p = (int(needle[i]) + p*d)%q;
            t = (int(haystack[i]) + t*d)%q;
        }
        for(int i = 0; i<n; i++){
            if(p==t){
                bool flag = true;
                for(int j = 0; j<m; j++){
                    if(haystack[i+j] != needle[j]){
                        flag = false;
                        break;
                    }
                    if(flag==true){
                     val = i;
                     return val;
                    }
                }
            }
            if(i< n-m){
                t = (d*(t-h*int(haystack[i])) + haystack[i+m])%q;
                if(t<0)t=t+q; // the following line fails the code for test case: "mississippi" "sipp". will write a better code for rabi karp.
                
            }
        }
        if(val == 0){
            return -1;
        }
        else{
            return val;
        }
    }

};
