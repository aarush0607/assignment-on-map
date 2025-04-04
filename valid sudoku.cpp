class Solution {
public:

    bool issafe(int row,int col,vector<vector<char>>& board,char val)
    {
        for(int i=0;i<board.size();i++)
        {
            //for row
            if(board[row][i]==val && i!=col)
            {
                return false;
            }

            //for col
            if(board[i][col]==val && i!=row)
            {
                return false;
            }
            int r=3*(row/3)+i/3;
            int c=3*(col/3)+i%3;
            if(board[r][c]==val && (r!=row && c!=col))
            {
                return false;
            }


        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board.size();j++)
            {
                if(board[i][j]<='9' && board[i][j]>='1')
                {
                    if(!issafe(i,j,board,board[i][j]))
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
}; 
