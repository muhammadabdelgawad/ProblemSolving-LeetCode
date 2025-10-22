class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
      
        for(int r = 0; r< matrix.size();r++)
        {
            vector<bool> seen( matrix.size()+1,false);
            for(int c = 0; c < matrix.size(); c++)
            {
              int value= matrix[r][c];
              if(seen[value]) return false;
              seen[value]=true;
            }
        }
        for(int c = 0; c< matrix.size();c++)
        {
            vector<bool> seen( matrix.size()+1,false);
            for(int r=0;r< matrix.size();r++)
            {
                int value = matrix[r][c];
                if(seen[value]) return false;
                seen[value]=true;
            }
        }
        return true;
    }
};