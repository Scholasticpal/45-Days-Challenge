 class Solution {
 public:
//     string reverseWords(string s) {
//         int n = s.length();
//         int flag = n-1;
//         int j = 0;
//         for(int i = n-1; i >= 0; i-- ){
//             if(s[i] == ' '){
//                 string a = s.substr(i+1, (flag - i));
//                 s.insert(j, a);
//                 j += a.length();
//                 s.insert(j+1, " ");
//                 flag = i-1;
//                 cout<<s;
//             }
//         }
//         return s;
//     }
// };

string reverseWords(string str) {
	stringstream s(str); 
	
	string ans = "";
	string word;
	
	while (s >> word){
		ans = word + " " + ans;
	}
	
	return ans.substr(0,ans.length() - 1);
}
 };
