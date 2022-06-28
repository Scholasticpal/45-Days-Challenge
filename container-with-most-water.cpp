int maxArea(vector& height) {
    int s=0;
    int e=height.size()-1;
    int res=0;
    while(s<e){
        res= max(res,(e-s)*min(height[s],height[e]));
        
        if(height[s]<height[e]){
        s++;
    }else{
        e--;
    }
        
      
    }
    
    
return res;
}

// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int n = height.size();
//         int area = 0;
//         int maxarea = 0;
//         for(int i = 0; i < n-1; i++){
//             for(int j = i+1; j<n;j++){
//                     area = max(area, (j-i) * min(height[i+j], height[i]));
//                     // cout<<area<<endl;
//             }
            
//             maxarea = max(maxarea,area);
//             // cout<< maxarea<<endl;
//             area = 0;
//         }
//          return maxarea;
//     }
// };

