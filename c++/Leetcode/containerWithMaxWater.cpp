class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area=-1;
        int curr_area;
        int i=0,j=height.size()-1;
        // je water content ta ke change korche(min) ta ke change kor -> 2 pointer algorithm
        while(i!=j){
            curr_area=abs(i-j)*min(height[i],height[j]);
            if(curr_area>max_area) max_area=curr_area;
            if(height[i]<height[j]) i++;
            else j--;
        }
        return max_area;
    }
};
        // Same problem but time complexity O(n square)
        // for(int i=0;i<height.size()-1;i++){
        //     for(int j=i+1;j<height.size();j++){
        //         curr_area=abs(i-j)*min(height[i],height[j]);
        //         if(curr_area>max_area) max_area=curr_area;
        //     }
        // }