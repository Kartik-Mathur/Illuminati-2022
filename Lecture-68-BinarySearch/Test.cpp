#include<iostream>
#include<cmath>
using namespace std;
bool isSafe(int mat[][9], int i, int j, int n, int no)
{
  //Same row ya col mein same no nhi hona chahiye
  for (int k = 0; k < n ; ++k)
  {
    if (mat[i][k] == no || mat[k][j] == no)
    {
      return false;
    }
  }
  n = sqrt(n);
  //Chote Block mein check karein
  int si = (i / n) * n;
  int sj = (j / n) * n;

  for (int k = si; k < si + n ; ++k)
  {
    for (int l = sj; l < sj + n; ++l)
    {
      if (mat[k][l] == no)
        return false;
    }
  }
  return true;
}
bool SudukoSolver(int mat[][9], int i, int j, int n)
{
  //Base Case//
  if (i == n)
  {
    for (int i = 0; i < n; ++i)
    {
      for (int j = 0; j < n; ++j)
      {
        cout << mat[i][j] << " ";
      }
      cout << "\n";
    }
    return true;
  }
  //Agar Hum Overshoot karde toh//
  if (j == n)
  {
    //bool solve=SudukoSolver(mat,i+1,0,n);
    return SudukoSolver(mat, i + 1, 0, n);
  }
  //Agar Cell already filled hai
  if (mat[i][j] != 0)
  {
    return SudukoSolver(mat, i, j + 1, n);
  }

  //Recursive Case//
  //Do the work for empty cell
  for (int no = 1; no <= n; ++no)
  {
    if (isSafe(mat, i, j, n, no) == true)
    {
      //Agar rakhna safe h toh rakh do
      mat[i][j] = no;

      //Check karo baaki ka hua ya nhi
      bool bakihua = SudukoSolver(mat, i, j + 1, n);
      if (bakihua)
      {
        return true;
      }

      //Agar False Ho Jata H//
      mat[i][j] = 0; ///Back Tracking
    }
  }

  //Agar 1 se n tak koi nhi chalta
  return false;

}
int main()
{
  int mat[9][9] =
  { {5, 3, 0, 0, 7, 0, 0, 0, 0},
    {6, 0, 0, 1, 9, 5, 0, 0, 0},
    {0, 9, 8, 0, 0, 0, 0, 6, 0},
    {8, 0, 0, 0, 6, 0, 0, 0, 3},
    {4, 0, 0, 8, 0, 3, 0, 0, 1},
    {7, 0, 0, 0, 2, 0, 0, 0, 6},
    {0, 6, 0, 0, 0, 0, 2, 8, 0},
    {0, 0, 0, 4, 1, 9, 0, 0, 5},
    {0, 0, 0, 0, 8, 0, 0, 7, 9}
  };
  SudukoSolver(mat, 0, 0, 9);
  return 0;
}