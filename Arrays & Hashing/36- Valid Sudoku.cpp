//-------O(1)--------------------
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Row check
        for (int i = 0; i < 9; i++) {
            vector<int> arr(10, 0); // arr[1 to 9] to mark numbers
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;

                int num = board[i][j] - '0';

                if (arr[num] > 0) {
                    return false;
                }

                arr[num] = 1; // mark as seen
            }
        }

        // Column check
        for (int j = 0; j < 9; j++) {
            vector<int> arr(10, 0);
            for (int i = 0; i < 9; i++) {
                if (board[i][j] == '.') continue;

                int num = board[i][j] - '0';

                if (arr[num] > 0) {
                    return false;
                }

                arr[num] = 1;
            }
        }

        // 3x3 box check
        for (int k = 0; k < 9; k++) {
            vector<int> arr(10, 0);
            int startRow = (k / 3) * 3;
            int startCol = (k % 3) * 3;

            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    char ch = board[startRow + i][startCol + j];

                    if (ch == '.') continue;

                    int num = ch - '0';

                    if (arr[num] > 0) {
                        return false;
                    }

                    arr[num] = 1;
                }
            }
        }

        return true;
    }
};
