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
    
    int add(int a, int b) {
        return a + b;
    }
    
     int sub(int a, int b){
        return a-b;
    }
    
    int mult(int a, int b){
        int res = 0;
        for(int i = 0; i < b; ++i) res += a;
        return res;
    }
	
	int divide(int a, int b){
	(b!=0)?(return a/b):printf("Nao pode dividir por zero");
	}
};

int main() {
    Calculadora c = Calculadora();
    printf("%d\n", c.exponencia(3,5));
    cout << c.add(4,5) << endl;
    cout << c.sub(10,2) << endl;
    return 0;
}
