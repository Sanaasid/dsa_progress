// class Solution {
// public:
//     int numberOfSubstrings(string s) {
//     int count=0;
    
//     for(int i=0;i<s.length();i++){
//         int a=0, b=0, c=0;
//         for(int j=i;j<s.length();j++){
//         if(s[j]=='a'){
//             a++;
//         }
//         if(s[j]=='b'){
//             b++;
//         }
//         if(s[j]=='c'){
//             c++;
//         }
        
//         if(a>0 && b>0 && c>0) count++;
//         }
        
        
//     }  
//     return count;
//     }
// };
class Solution {
public:
    int numberOfSubstrings(string s) {
        int a = -1, b = -1, c = -1;
        int ans = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a')
                a = i;
            else if (s[i] == 'b')
                b = i;
            else
                c = i;

            if (a != -1 && b != -1 && c != -1) {
                ans += min(a, min(b, c)) + 1;
            }
        }

        return ans;
    }
};