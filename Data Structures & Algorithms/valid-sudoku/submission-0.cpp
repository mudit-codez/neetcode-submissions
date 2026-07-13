class Solution {
   public:
    bool allrowsvalid(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_map<char, int> freq;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] >= '1' && board[i][j] <= '9') {
                    freq[board[i][j]]++;
                    if (freq[board[i][j]] > 1) {
                        return false;
                    }
                }
            }
        }
        return true;
    }

    bool allcolumnsvalid(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_map<char, int> freq;
            for (int j = 0; j < 9; j++) {
                if (board[j][i] >= '1' && board[j][i] <= '9') {
                    freq[board[j][i]]++;
                    if (freq[board[j][i]] > 1) {
                        return false;
                    }
                }
            }
        }
        return true;
    }

    bool validbox(vector<vector<char>>& board, int startrow, int startcol) {
        unordered_map<char, int> freq;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[startrow+i][startcol+j] >= '1' && board[startrow+i][startcol+j] <= '9') {
                    freq[board[startrow+i][startcol+j]]++;
                    if (freq[board[startrow+i][startcol+j]] > 1) {
                        return false;
                    }
                }
            }
        }
        return true;
    }

    bool allboxesvalid(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                if (!validbox(board, i, j)) {
                    return false;
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        if (allrowsvalid(board) && allcolumnsvalid(board) && allboxesvalid(board)) {
            return true;
        }
        return false;
    }
};