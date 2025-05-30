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
    char check = true;
    while(check) {
    cout << "Informe a sua opção: " << endl;    
    cin >> op;
    if(op == 1) {
        rec = nu2();
        check = false;
    } else if (op == 2) {
        rec = nu3();
        check = false;
    } else if(op == 3) {
        rec = nu4();
        check = false;
    } else if(op == 4) {
        rec = nu5();
        check = false;
    } else {
        cout << "Inválido!!";
    }
    }
}