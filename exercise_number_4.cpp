//number 4
//

#include <iostream>

using namespace std;

int main() {
    int x;
    float product_1 = 1;
    float product_2 = 1;
    float product_3 = 1;
    float product_4 = 1;
    int a;
    int b;
    
//part num 1 (от 8 до 15)
    
    for (int i = 8; i <= 15; ++i)
        product_1 = product_1 * i;
    cout << "Произведение целых чисел от 8 до 15" << " = " << product_1 << endl;
    
//part num 2 (от a до 20)
    
    cout << "Введите целое число от 2 до 19: ";
    cin >> a;
    x = a;
    
    for (;a <= 20; ++a)
        product_2 = product_2 * a;
    cout << "Произведение целых чисел от " << x << " до 20" << " = " << product_2 << endl;
    
//part num 3 (от a до 20)
    
    cout << "Введите целое число от 2 до 19: ";
    cin >> b;
    x = b;
    
    for (; b > 1; --b)
        product_3 = product_3 * b;
    cout << "Произведение целых чисел от 1 до " << x << " = " << product_3 << endl;

//part num 4 (от a до b, причем b >= a)
    
    cout << "Введите целых числa: " << endl;
    cin >> a;
    cin >> b;
    
    for (; a <= b; ++a)
        product_4 = product_4 * a;
    cout << "Произведение целых чисел от a до b = " << product_4 << endl;
    
    
    return 0;
}

