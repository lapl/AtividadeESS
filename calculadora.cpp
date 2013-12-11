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
	    return a/b;
	}
};

int main() {
    Calculadora c = Calculadora();
    while(1) {
        cout << "add -> 0" << endl;
        cout << "sub -> 1" << endl;
        cout << "mult -> 2" << endl;
        cout << "div -> 3" << endl;
        cout << "expo -> 4" << endl;
        cout << "Digite o comando: " << endl;
        int command;
        cin >> command;
        cout << "Digite o primeiro numero" << endl;
        int x;
        cin >> x;
        cout << "Digite o segundo numero" << endl;
        int y;
        cin >> y;
        if(command == 0) cout << "Resultado: " << c.add(x,y);
        else if(command == 1) cout << "Resultado: " << c.sub(x,y) << endl;
        else if(command == 2) cout << "Resultado: " << c.mult(x,y) << endl;
        else if(command == 3) {
            if(y == 0) cout << "Nao pode dividir por zero" << endl;
            else cout << "Resultado: " << c.divide(x,y) << endl;
        } else if(command == 4){
            cout << "Resultado: " << c.exponencia(x,y) << endl;
        } else cout << "Nao é um comando valido" << endl;
        cout << "Deseja continuar? (Y/N)" << endl;
        string s;
        cin >> s;
        if(s == "N") break;
    }
    return 0;
}
