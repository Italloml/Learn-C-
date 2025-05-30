#include <iostream>
using namespace std;

int nu2() {
    int nu = 0, res;
    while(nu <= 10) {
        res = nu * 2;
        cout << "2 X " << nu << " = " << res <<  endl;
        nu++;
    }
}

int nu3() {
    int nu = 0, res;
    while(nu <= 10) {
        res = nu * 3;
        cout << "3 X " << nu << " = " << res <<  endl;
        nu++;
    }
}

int nu4() {
    int nu = 0, res;
    while(nu <= 10) {
        res = nu * 4;
        cout << "4 X " << nu << " = " << res <<  endl;
        nu++;
    }
}

int nu5() {
    int nu = 0, res;
    while(nu <= 10) {
        res = nu * 5;
        cout << "5 X " << nu << " = " << res <<  endl;
        nu++;
    }
}

// função principal

int main() {
    int op, rec;
    cout << "1 - Tabuada 2 || 2 - Tabuada 3 || 3 - Tabuada 4 || 4 - Tabuada 5" << endl;
    cout << "Informe a sua opção: " << endl;    
    cin >> op;
    if(op == 1) {
        rec = nu2();
    } else if (op == 2) {
        rec = nu3();
    } else if(op == 3) {
        rec = nu4();
    } else if(op == 4) {
        rec = nu5();
    } else {
        cout << "Inválido!!";
    }
}