#include <iostream>

int main() {
    int quantidade, num, soma = 0, subtracao = 0, multiplicacao = 1;
    float divisao = 1.0;

    std::cout << "Digite a quantidade de números: ";
    std::cin >> quantidade;

    for (int i = 0; i < quantidade; ++i) {
        std::cout << "Digite o número " << i + 1 << ": ";
        std::cin >> num;

        if (i == 0) { 
            subtracao = num;
            divisao = num;
        } else { 
            subtracao -= num;
            divisao /= num;
        }

        soma += num;
        multiplicacao *= num;
    }

    std::cout << "Soma: " << soma << std::endl;
    std::cout << "Subtração: " << subtracao << std::endl;
    std::cout << "Multiplicação: " << multiplicacao << std::endl;
    std::cout << "Divisão: " << divisao << std::endl;

    return 0;
}

