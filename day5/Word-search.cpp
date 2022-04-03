//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/word-search/
//submission link: https://leetcode.com/submissions/detail/673091202/

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for (int i=0; i<board.size(); i++)
        {
            for (int j=0; j<board[0].size(); j++)
            {
                if (goSearch(i, j, 0, board, word))    //if 1st letter of word is found in the board we go and search adjacents further and if further all fouund we return true
                    return true;
            }
        }
        return false;
    }
    
    bool goSearch(int i, int j, int index, vector<vector<char>>& board, string word)
    {
        if (index==word.size())           //if the search reaches beyond the word length means all were found so return true
            return true;
        
        if (i<0 or j<0 or i>board.size()-1 or j>board[0].size()-1) //if any of this occurs means all possible searches are done and we couldn't find anything i.e we are outofboundary
            return false;
        
        if (word[index]!=board[i][j])       //not found
            return false;
        
        //found:
        board[i][j]='@';            //mark visited and go ahead
        if (goSearch(i, j+1, index+1, board, word) or
            goSearch(i+1, j, index+1, board, word) or
            goSearch(i-1, j, index+1, board, word) or
            goSearch(i, j-1, index+1, board, word) )            // recursive check for all adjacent elements if all found true 
        {
            return true;
        }
        
        board[i][j]=word[index];      //if code reaches here means the word wasnot found through this direction so do reset
        return false;
        
    }
};
