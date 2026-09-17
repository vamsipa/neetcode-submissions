class Solution {
public:
    int maxArea(vector<int>& heights) {

        int res=0;
        int pt1 = 0, pt2 = heights.size()-1;

        while(pt1 < pt2) {
            int cur_area = (abs(pt2-pt1) * (std::min(heights[pt1], heights[pt2])) );
            if( cur_area > res ) {
                res = cur_area;
            }

            if(heights[pt1] <= heights[pt2]) {
                pt1++;
            } else {
                pt2--;
            }
        }

        return res;
        
    }
};
