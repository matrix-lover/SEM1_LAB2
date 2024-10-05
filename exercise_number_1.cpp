// number 1
//  Created by Shamil Nurmagomedov on 05.10.2024.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    
    // 1 каждое из чисел X и Y нечетное
    if (x % 2 && y % 2 == 0) {cout << "condition is true";} 
    else {cout << "condition is false";} 
    
    // 2 только одно из чисел X и Y меньше 20
    if ((x < 20 || y < 20) && !(x && y < 20)) {cout << "condition is true";} 
    else {cout << "condition is false";}
    
    // 3 хотя бы одно из чисел X и Y равно нулю
   if (x == 0 || y == 0) {cout << "condition is true";} 
   else {cout << "condition is false";}
    
    // 4 каждое из чисел X, Y, Z отрицательное
    if (x && y && z < 0) {cout << "condition is true";} 
    else {cout << "condition is false";}
    
    // 5 только одно из чисел X, Y и Z кратно пяти
    if ((x % 5 == 0 && y || z % 5 != 0) || (y % 5 == 0 && x || z % 5 != 0) || (z % 5 == 0 && x || y % 5 != 0)) {
    cout << "condition is true";} 
    else {cout << "condition is false";}
    
    // 6 хотя бы одно из чисел X, Y, Z больше 100
    if (x || y || z > 100) {cout << "condition is true";} else {cout << "condition is false";}
    
    return 0;
}
