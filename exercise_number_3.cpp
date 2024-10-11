// number 3
//

#include <iostream>

using namespace std;

int main() {
    
//part num 1:
    int a = 7;
    int i;
    int N;
    
    for (i = 1; i < 10; ++i)
        cout << i << " * " << a << " = " << i * a << endl;

//part num 2:
    cin >> N;
    
    for (i = 1; i < 10; ++i)
        cout << i << " * " << N << " = " << i * N << endl;
    return 0;
}
