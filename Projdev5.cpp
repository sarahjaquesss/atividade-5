#include <iostream>
#include <string>

std::string inverterString(const std::string& str) {
    std::string inverted = str; 
    int n = inverted.length();
    for (int i = 0; i < n / 2; i++) {
        std::swap(inverted[i], inverted[n - i - 1]); // Troca de caracteres
    }
    return inverted; 
}

int main() {
    std::string str;

    std::cout << "Digite uma string para inverter: ";
    std::getline(std::cin, str);

    if (!str.empty()) { 
        std::string resultado = inverterString(str);
        std::cout << "String invertida: " << resultado << std::endl;
    } else {
        std::cout << "String vazia. Nada para inverter." << std::endl;
    }

    return 0;
}

