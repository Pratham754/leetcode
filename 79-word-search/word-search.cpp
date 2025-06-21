class Solution {
public:
    bool dfs(vector<vector<char>>& board, string& word, int i, int j, int idx) {
        if (idx == word.size()) return true;

        int row = board.size(), col = board[0].size();
        if (i < 0 || i >= row || j < 0 || j >= col || board[i][j] != word[idx])
            return false;

        char temp = board[i][j];
        board[i][j] = '#';

        bool found = dfs(board, word, i + 1, j, idx + 1) ||
                     dfs(board, word, i - 1, j, idx + 1) ||
                     dfs(board, word, i, j + 1, idx + 1) ||
                     dfs(board, word, i, j - 1, idx + 1);

        board[i][j] = temp;
        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int row = board.size(), col = board[0].size();

        unordered_map<char, int> boardFreq, wordFreq;
        for (int r = 0; r < row; r++)
            for (int c = 0; c < col; c++)
                boardFreq[board[r][c]]++;

        for (char ch : word)
            wordFreq[ch]++;

        for (auto& [ch, freq] : wordFreq)
            if (boardFreq[ch] < freq)
                return false;

        if (boardFreq[word[0]] > boardFreq[word.back()])
            reverse(word.begin(), word.end());

        for (int r = 0; r < row; r++) {
            for (int c = 0; c < col; c++) {
                if (board[r][c] == word[0] && dfs(board, word, r, c, 0))
                    return true;
            }
        }

        return false;
    }
};
