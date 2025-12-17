#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int totalScore = 0;
        char grid[10][10];

        for (int i = 0; i < 10; i++)
            for (int j = 0; j < 10; j++)
                cin >> grid[i][j];

        // RING 1 (weight = 1)
        for (int j = 0; j < 10; j++) {
            if (grid[0][j] == 'X') totalScore += 1;     // top
            if (grid[9][j] == 'X') totalScore += 1;     // bottom
        }
        for (int i = 1; i < 9; i++) {                    // sides (no corners)
            if (grid[i][0] == 'X') totalScore += 1;     // left
            if (grid[i][9] == 'X') totalScore += 1;     // right
        }

        // RING 2 (weight = 2)
        for (int j = 1; j < 9; j++) {
            if (grid[1][j] == 'X') totalScore += 2;     // top
            if (grid[8][j] == 'X') totalScore += 2;     // bottom
        }
        for (int i = 2; i < 8; i++) {
            if (grid[i][1] == 'X') totalScore += 2;     // left
            if (grid[i][8] == 'X') totalScore += 2;     // right
        }

        // RING 3 (weight = 3)
        for (int j = 2; j < 8; j++) {
            if (grid[2][j] == 'X') totalScore += 3;
            if (grid[7][j] == 'X') totalScore += 3;
        }
        for (int i = 3; i < 7; i++) {
            if (grid[i][2] == 'X') totalScore += 3;
            if (grid[i][7] == 'X') totalScore += 3;
        }

        // RING 4 (weight = 4)
        for (int j = 3; j < 7; j++) {
            if (grid[3][j] == 'X') totalScore += 4;
            if (grid[6][j] == 'X') totalScore += 4;
        }
        for (int i = 4; i < 6; i++) {
            if (grid[i][3] == 'X') totalScore += 4;
            if (grid[i][6] == 'X') totalScore += 4;
        }

        // RING 5 (weight = 5)
        for (int j = 4; j < 6; j++) {
            if (grid[4][j] == 'X') totalScore += 5;
            if (grid[5][j] == 'X') totalScore += 5;
        }
        for (int i = 5; i < 5; i++) {
            if (grid[i][4] == 'X') totalScore += 5;
            if (grid[i][5] == 'X') totalScore += 5;
        }

        cout << totalScore << endl;
    }
    return 0;
}
