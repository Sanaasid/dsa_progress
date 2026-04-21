class Solution {
public:
    vector<vector<int>> colorGrid(int n, int m, vector<vector<int>>& sources) {
        queue<pair<pair<int,int>,int>> q;
        vector<vector<int>> ans(n, vector<int>(m, 0));
        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};
        for (auto &src : sources) {
            int r = src[0];
            int c = src[1];
            int color = src[2];
            ans[r][c] = max(ans[r][c], color);
            if (dist[r][c] == INT_MAX) {
                dist[r][c] = 0;
                q.push({{r, c}, 0});
            }
        }
        while (!q.empty()) {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            q.pop();
            for (int i = 0; i < 4; i++) {
                int nrow = r + delrow[i];
                int ncol = c + delcol[i];
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m) {
                    if (dist[nrow][ncol] == INT_MAX) {
                        dist[nrow][ncol] = t + 1;
                        ans[nrow][ncol] = ans[r][c];
                        q.push({{nrow, ncol}, t + 1});
                    }
                    else if (dist[nrow][ncol] == t + 1) {
                        ans[nrow][ncol] = max(ans[nrow][ncol], ans[r][c]);
                    }
                }
            }
        }

        return ans;
    }
};