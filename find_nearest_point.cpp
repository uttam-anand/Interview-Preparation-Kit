class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int ans = -1, dis = INT_MAX, i = 0;
        for(auto p : points){
            if(p[0] == x or p[1] == y){
                int d = abs(p[0] - x) + abs(p[1] - y);
                if(d < dis){
                    dis = d;
                    ans = i;
                }
            }
            i += 1;
        }
        return ans;
    }
};
