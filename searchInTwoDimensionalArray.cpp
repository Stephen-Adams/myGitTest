class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int h=array.size(),w=array[0].size();
        for(int i=0,j=w-1;i<h&&j>=0;){
            if(array[i][j]==target) return true;
            else if(array[i][j]>target) j--;
            else i++;
        }
        return false;
    }
};
