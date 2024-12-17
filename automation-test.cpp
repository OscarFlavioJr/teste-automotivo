#include <iostream>
#include <conio.h> 

using namespace std;

int main() {
    bool ledState = false;
    char button;

    cout << "Simulador de controle de LED (Tempo Real)\n" << endl;
    cout << "Pressione 1 para ligar o LED, 0 para desligar. Pressione 'q' para sair.\n" << endl;

    while (true) {
        if (_kbhit()) {
            button = _getch(); 

            if (button == 'q') {
                cout << "\nSaindo do programa..." << endl;
                break;
            } 
            else if (button == '1') {
                ledState = true;
                cout << "\nLED ligado." << endl;
            } 
            else if (button == '0') {
                ledState = false;
                cout << "\nLED desligado." << endl;
            } 
            else {
                cout << "\nTecla inválida! Use 1, 0 ou q." << endl;
            }
        }
    }

    return 0;
}
