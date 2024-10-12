// number 2
//  Created by Shamil Nurmagomedov on 05.10.2024.
//

#include <iostream>

using namespace std;

int main() {
  int a, b;
  int c, d;
  cout << "Введите координаты x и y поля A" << endl;
  cin >> a >> b;
  cout << "Введите координаты x и y поля A" << endl;
  cin >> c >> d;
  // первый аналог решения задачи:
    
// Ладья
    if ((a || b == c) || (a || b == d)) {cout << "Ладья атакует клетку" << endl;}
    else {cout << "Ладья не атакует клетку" << endl;}
    
// Слон
  if (abs(a - c) == abs(b - d)) {cout << "Слон атакует клетку";}
  else {cout << "Слон не атакует клетку" << endl;}
    
// Король за один ход нападает на клетку
  if (abs(a - c) <= 2 && abs(b - d) <= 2) {cout << "Король нападает на клетку за один ход" << endl;}
  else {cout << "Король не нападает на клетку ха один ход" << endl;}
    
// Ферзь
  if ( (( a || b == c) || (a || b == d)) || (abs(a - c) == abs(b - d)) ) {cout << "Ферзь атакует клетку" << endl;}
  else {cout << "Ферзь не атакует клетку" << endl;}
    
// Пешка за один ход нападает на клетку_1 при обычном ходе
  if (abs(a - c) == 1 && d - b == 2) {cout << "Пешка нападает на клетку при обычном ходе" << endl;}
  else {cout << "Пешка не нападает на клетку при обычном ходе" << endl;}
    
// Пешка за один ход нападает на клетку_2 когда она бьет фигуру или пешку соперника
  if ( (a == c || abs(a - c) == 2) && (d - b == 2) ) {cout << "Пешка нападает на клетку при съедении фигуры" << endl;}
  else {cout << "Пешка не нападает на клетку при съедении фигуры" << endl;}


//второй аналог решения задачи:
    pair <unsigned char, unsigned char> position_A;
    pair <unsigned char, unsigned char> position_B;
    
    cout << "Вариант задачи 2:" << endl << "Введите координаты x и y поля A" << endl;
    cin >> position_A.first >> position_A.second;
    
    cout << "Введите координаты x и y поля A" << endl;
    cin >> position_B.first >> position_B.second;
  
   return 0;
}

