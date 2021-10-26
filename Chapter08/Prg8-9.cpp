// 병렬 배열
// 학생 5명 이름, 점수, 학점 저장

#include <iostream>
#include <iomanip>
using namespace std;

// findGrade 함수
// 매개변수: score 상수 배열, grade 배열, 크기
// score 배열을 활용해서 grade 배열을 만듦
void findGrade(const int scores[], char grades[], int size)
{
  char temp[] = {'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};

  for(int i = 0; i < size; i++)
  {
    grades[i] = temp[scores[i] / 10];
  }

  return;
}

int main()
{
  string names[4] = {"George", "John", "Luci", "Mary"};
  int scores[4] = {82, 73, 91, 72};
  char grades[4];

  // 함수 호출
  findGrade(scores, grades, 4);

  // 배열 값 출력
  for(int i = 0; i < 4; i++)
  {
    cout << setw(10) << left << names[i] << "   " << setw(2);
    cout << scores[i] << "    " << setw(2) << grades[i] << endl;
  }

  cout << endl;

  return 0;
}