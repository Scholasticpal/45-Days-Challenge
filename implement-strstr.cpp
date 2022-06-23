class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = needle.length();
        int n = haystack.length();
        int p = 0;
        int t = 0;
        int d = 5;
        int count = 0;
        if(m ==0){
            return -1;
            break;
        }
        for(int i = 0; i<m; i++){
            p = int(needle[i]) + p*d;
            t = int(haystack[i]) + t*d;
        }
        for(int i = 0; i<n; i++){
            if(p==t){
                bool flag = true;
                for(int j = 0; j<m; j++){
                    if(haystack[i+j] != needle[j]){
                        flag = false;
                        break;
                    }
                }
                if(flag==true){
                    count +=1;
                }
            }
            if(i< n-m){
                t = d*(t-int)
            }
        }
    }

};
