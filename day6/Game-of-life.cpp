//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/game-of-life/
//submission link: https://leetcode.com/submissions/detail/674538271/

class Solution {
public:
    int countLiveNeighbors(vector<vector<int>>& board, int i, int j) {          //funtion to count live neighbours, remember if the value is 1 or 3 gives the condition where the cell was EARLIER alive
        
        int count=0;
        if(i>0)                                                                 //all the conditions below handle out of bound senarios also
        {
            if(board[i-1][j]==1 or board[i-1][j]==3) 
                count++;
        }
        
        if(i<board.size()-1) 
        {
            if(board[i+1][j]==1 or board[i+1][j]==3) 
                count++;
        }
        
        if(j>0) 
        {
            if(board[i][j-1]==1 or board[i][j-1]==3) 
                count++;
        }
        
        if(j<board[0].size()-1) 
        {
            if(board[i][j+1]==1 or board[i][j+1]==3) 
                count++;
        }

        if(i>0 and j>0) 
        {
            if(board[i-1][j-1]==1 or board[i-1][j-1]==3) 
                count++;
        }
        
        if(i>0 and j<board[0].size()-1) 
        {
            if(board[i-1][j+1]==1 or board[i-1][j+1]==3) 
                count++;
        }
        
        if(i<board.size()-1 and j>0) 
        {
            if(board[i+1][j-1]==1 or board[i+1][j-1]==3) 
                count++;
        }
        
        if(i<board.size()-1 and j<board[0].size()-1) 
        {
            if(board[i+1][j+1]==1 or board[i+1][j+1]==3) 
                count++;
        }
        
        return count;

    }
    
    
    void gameOfLife(vector<vector<int>>& board) {
        
        for (int i=0; i<board.size(); i++)
        {
            for (int j=0; j<board[0].size(); j++)                               //new nomenclature
            {
                if (board[i][j]==1 and countLiveNeighbors(board, i, j)<2)           
                {
                    board[i][j]=3;                                              //earlier live but now dead
                }
                else if (board[i][j]==1 and countLiveNeighbors(board, i, j)>3)      
                {
                    board[i][j]=3;                                              //earlier live but now dead
                }
                else if (board[i][j]==0 and countLiveNeighbors(board, i, j)==3)
                {
                    board[i][j]=2;                                              //earlier dead but now live
                }
            }
        }
        
        
        for (int i=0; i<board.size(); i++)                                      //change all nomenclature to previous
        {
            for (int j=0; j<board[0].size(); j++)
            {
                if (board[i][j]==2)
                    board[i][j]=1;
                else if (board[i][j]==3)
                    board[i][j]=0;
            }
        }
    }
};
