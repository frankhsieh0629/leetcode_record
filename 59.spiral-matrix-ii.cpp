/*
 * @lc app=leetcode id=59 lang=cpp
 *
 * [59] Spiral Matrix II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>> data(n, vector<int>(n, 0));
        int x=0;
        int y=0;
        int count = 1;
        int i=0;
        int j=0;
        int len = n-1;
        int loop = n/2;

        cout << "test" << endl;

        while(loop){
            cout << loop << endl;
            // left to right
            for(j=y; j<y+len; j++){
                data[i][j] = count++;
            }

            // up to down
            for(i=x; i<x+len; i++){
                data[i][j] = count++;
            }

            //right to left
            for(; j>len; j--){
                data[i][j] = count++;
            }

            // down to up
            for(i=i+1; i>len; i--){
                data[i][j] = count++;
            }

            len--;
            x++;
            y++;
            loop--;
        }

        //mid element
        if(n%2 == 1){
            data[n/2][n/2] = n*n;
        }

        return data;
    }
};
// @lc code=end

