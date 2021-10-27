// 100~199 랜덤 정수 갖는 6x6 2차원 배열 만든 후
// 배열의 주대각선과 반대각선을 요소로 갖는 두 배열 만든 뒤
// 모두 출력

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// 원본 배열, 왼쪽 위에서 오른쪽 아래 대각선으로 추출한 배열, 오른쪽 위에서 왼쪽 아래 대각선으로 추출한 배열을 출력
void Print(const int originArr[][6], const int mainDiagonal[], const int skewDiagonal[])
{
  cout << "원본 배열" << endl;
  // 원본 배열 할당
  for(int i = 0; i < 6; i++)
  {
    for(int j = 0; j < 6; j++)
    {
      cout << originArr[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;

  cout << "주대각선 배열: ";
  for(int i = 0; i < 6; i++)
  {
    cout << mainDiagonal[i] << " ";
  }
  cout << endl;

  cout << "반대각선 배열: ";
  for(int i = 0; i < 6; i++)
  {
    cout << skewDiagonal[i] << " ";
  }
  cout << endl;
}

void MakeMainDiagonalArray(const int originArr[][6], int mainDiagonal[])
{
  int x = 0;
  int y = 0;

  for(int i = 0; i < 6; i++, x++, y++)
  {
    mainDiagonal[i] = originArr[x][y];
  }
}

void MakeSkewDiagonalArray(const int originArr[][6], int skewDiagonal[])
{
  int x = 0;
  int y = 5;

  for(int i = 0; i < 6; i++, x++, y--)
  {
    skewDiagonal[i] = originArr[x][y];
  }
}

int main()
{
  srand(time(NULL));

  int originArr[6][6];
  int mainDiagonal[6];  // 주대각선
  int skewDiagonal[6];  // 반대각선

  int randNum;
  int i, j;

  // 원본 배열 할당
  for(i = 0; i < 6; i++)
  {
    for(j = 0; j < 6; j++)
    {
      randNum = 100 + rand() % 100;
      originArr[i][j] = randNum;
    }
  }

  MakeMainDiagonalArray(originArr, mainDiagonal);
  MakeSkewDiagonalArray(originArr, skewDiagonal);
  Print(originArr, mainDiagonal, skewDiagonal);

  return 0;
}