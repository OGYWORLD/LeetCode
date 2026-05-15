class Solution
{
public:
    bool isValidSudoku(vector<vector<char>>& board)
    {
        const int LENGTH = 9;

        for(int i = 0; i < LENGTH; i++)
        {
            vector<bool> isVisited(LENGTH + 1, false);

            for(int j = 0; j < LENGTH; j++)
            {
                if(board[i][j] == '.')
                {
                    continue;
                }

                int current = board[i][j] - '0';

                if(isVisited[current])
                {
                    return false;
                }

                isVisited[current] = true;
            }
        }

        for(int i = 0; i < LENGTH; i++)
        {
            vector<bool> isVisited(LENGTH + 1, false);

            for(int j = 0; j < LENGTH; j++)
            {
                if(board[j][i] == '.')
                {
                    continue;
                }

                int current = board[j][i] - '0';

                if(isVisited[current])
                {
                    return false;
                }

                isVisited[current] = true;
            }
        }

        for(int row = 0; row < LENGTH; row += 3)
        {
            for(int col = 0; col < LENGTH; col += 3)
            {
                vector<bool> isVisited(LENGTH + 1, false);

                for(int i = 0; i < 3; i++)
                {
                    for(int j = 0; j < 3; j++)
                    {
                        if(board[row + i][col + j] == '.')
                        {
                            continue;
                        }

                        int current = board[row + i][col + j] - '0';

                        if(isVisited[current])
                        {
                            return false;
                        }

                        isVisited[current] = true;
                    }
                }
            }
        }

        return true;
    }
};