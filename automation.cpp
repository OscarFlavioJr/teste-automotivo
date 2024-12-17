#include <iostream>
using namespace std;

int main() {
    bool ledState = false;
    int button;

    cout << "Simulador de controle de LED\n" << endl;
    cout << "Digite 1 para ligar o LED e 0 para desligar. Digite -1 para sair.\n" << endl;

    while (true) {
        cout << "Pressione o botão 1/0: ";
        cin >> button;

        if (button == -1) {
            cout << "Saindo do programa..." << endl;
            break; // Encerra o loop
        } 
        else if (button == 1) {
            ledState = true;
            cout << "LED ligado.\n" << endl;
        } 
        else if (button == 0) {
            ledState = false;
            cout << "LED desligado.\n" << endl;
        } 
        else {
            cout << "Comando inválido. Tente novamente.\n" << endl;
        }
    }

    return 0; 
    system("PAUSE");
}
