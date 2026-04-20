class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char, int> rowMap;
        unordered_map<char, int> colMap;
        unordered_map<char, int> squareMap;
        vector<vector<char>>square_arr;

        for(int row = 0; row < board.size(); row++){
            for(int col =0; col < board.size(); col++){
            // check for dups in cols
                if(board[row][col] == '.'){continue;} // skip
                else if(colMap.count(board[row][col])  == 0){
                    colMap[board[row][col]] = 1;
                }
                else{
                    return false;
                }
            }
        colMap.clear();
        }

        for(int col = 0; col < board.size(); col++){
            for(int row =0; row < board.size(); row++){
            // check for dups in cols
                if(board[row][col] == '.'){continue;} // skip
                else if(rowMap.count(board[row][col]) == 0){
                    rowMap[board[row][col]]= 1;
                }
                else{
                    return false;
                }
            }
        rowMap.clear();
        }
    int count = 0;
    while(count < 3){
        for(int row = 0; row < board.size(); row++){
            for(int col =count*3; col < count*3 +3; col++){
            // check for dups in cols
                if(board[row][col] == '.'){continue;} // skip
                else if(squareMap.count(board[row][col])  == 0){
                    squareMap[board[row][col]] = 1;
                }
                else{
                    return false;
                }
            }
            if((row+1) % 3 ==0){squareMap.clear();;}

        }

        count++;
    }

    return true; // test for now
    }
};
