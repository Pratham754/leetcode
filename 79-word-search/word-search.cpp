class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int row = board.size();
        int col = board[0].size();
        for (int r = 0; r < row; r++) {
            for (int c = 0; c < col; c++) {
                if (board[r][c] == word[0] && dfs(board, word, r, c, 0, row, col))
                    return true;
            }
        }
        return false;
    }

    bool dfs(vector<vector<char>>& board, string word, int r, int c, int index, int row, int col) {
        if (index == word.length()) return true;
        if (r < 0 || c < 0 || r >= row || c >= col || board[r][c] != word[index]) return false;

        char temp = board[r][c];
        board[r][c] = '*';

        bool find = dfs(board, word, r + 1, c, index + 1, row, col) ||
                    dfs(board, word, r - 1, c, index + 1, row, col) ||
                    dfs(board, word, r, c + 1, index + 1, row, col) ||
                    dfs(board, word, r, c - 1, index + 1, row, col);
        board[r][c] = temp;
        
        return find;
    }
};