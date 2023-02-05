class Solution
{
public:
     bool isPossibleToCutPath(vector<vector<int>> &grid)
     {
          int row = grid.size();
          int col = grid[0].size();
          for (int i = 1; i < row - 1; i++) // EXCLUDE FIRST AND LAST ROW
          {

               int counto = 0; // COUNT OF 1'S
               for (int j = 0; j < col; j++)
               {
                    if (grid[i][j] == 1)
                         counto++;
               }
               if (counto == 1 || counto == 0)
                    return true;
          }

          for (int j = 1; j < col - 1; j++) // EXCLUDE FIRST AND LAST COLUMN
          {

               int counto = 0; // COUNT OF 1'S
               for (int i = 0; i < row; i++)
               {
                    if (grid[i][j] == 1)
                         counto++;
               }
               if (counto == 1 || counto == 0)
                    return true;
          } //    40/41 CASES PASSED TILL HERE
          bool flag = false;
          if (row == col)
          {
               for (int i = 0; i < row; i++)
               {
                    for (int j = 0; j < row; j++)
                    {
                         if (grid[i][j] == grid[j][i] && grid[j][i] == 1) // IF GRID IS COMPLETELY FILLED WITH 1'S
                              continue;
                         else
                              flag = true;
                    }
               }
          }
          if (flag == false)
               return false;
          if (row == col)
          {
               for (int i = 0; i < row; i++)
               {
                    for (int j = 0; j < row; j++)
                    {
                         if (grid[i][j] != grid[j][i]) // CHECK FOR TRANSPOSE
                              return false;
                    }
               }
               for (int i = 0; i < row; i++)
                    if (grid[i][row / 2] != 1) // MIDDEL SHOULD BE COMPLETELY FILLED WITH 1'S
                         return false;

               return true;
          }
          return false;
     }
};