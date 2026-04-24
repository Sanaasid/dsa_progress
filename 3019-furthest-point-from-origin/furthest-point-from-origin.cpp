class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
//         int n=moves.length();
//     unordered_map<char,int> mp;
//     for(int i=0;i<moves.length();i++){
//         mp++;
//     }
//     int ptr=0;
//     int maxdist=0;
//     for(int i=0;i<moves.length();i++){
//         if(moves[i]=='L' || moves[i]='_') ptr++;
//         else if(moves[i]=='R' || moves[i]='_') ptr--;
//         maxdist=max(maxdist,ptr);
//     }
//     return maxdist;

//     }
// };
        int l = 0, r = 0, blank = 0;

        for(char ch : moves) {
            if(ch == 'L') l++;
            else if(ch == 'R') r++;
            else blank++;
        }

        return abs(l - r) + blank;
    }
};