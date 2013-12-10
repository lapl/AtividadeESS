#include <bits/stdc++.h>

using namespace std;

class Calculadora {
public:
    Calculadora() {}

    int exponencia(int a, int b) {
        int retorno = 1;
        while (b) {
            if (b&1) {
                retorno *= a;
            }
            a *= a;
            b >>= 1;
        }
        return retorno;
    }
};

int main() {
    Calculadora c = Calculadora();
    printf("%d\n", c.exponencia(3,5));
    return 0;
}
