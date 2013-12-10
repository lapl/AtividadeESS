#include <bits/stdc++.h>

using namespace std;

class Calculadora {
public:
    Calculadora() {}
    
    int add(int a, int b) {
        return a + b;
    }
};


int main() {
    Calculadora c = Calculadora();
    cout << c.add(4,5) << endl;
    return 0;
}
