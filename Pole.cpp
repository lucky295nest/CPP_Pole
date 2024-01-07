#include "pole.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

// Implementace konstruktoru bez parametru
Pole::Pole() {
    // Zadna dalsi inicializace neni potreba, vytvori prazdne pole automaticky
}

// Implementace konstruktoru s parametrem pro vytvoreni pole s danym poctem prvku
Pole::Pole(int size) {
    dynamicArray.resize(size);
}

// Implementace destruktoru
Pole::~Pole() {
    // Zadna specialni akce neni potreba, vector se automaticky uvolni pri zaniku objektu
}

void Pole::fillArray() {
    // Výběr velikosti pole od uživatele
    int size;
    std::cout << "Zadejte velikost pole: ";
    std::cin >> size;

    // Inicializace generátoru náhodných čísel
    std::srand(std::time(nullptr));

    // Vytvoření náhodného čísla a naplnění pole
    dynamicArray.resize(size);
    for (int& element : dynamicArray) {
        element = std::rand() % 101;  // Rozsah od 0 do 100
    }
}

void Pole::printArray() {
    if (dynamicArray.empty()) {
        std::cout << "Pole je prazdne." << std::endl;
    }
    else {
        std::cout << "Obsah pole:" << std::endl;
        for (const auto& element : dynamicArray) {
            std::cout << element << std::endl;
        }
    }
}

void Pole::addElementToEnd(int element) {
    dynamicArray.push_back(element);
    std::cout << "Prvek byl pridan na konec pole." << std::endl;
}

void Pole::deleteElement(int index) {
    if (index >= 0 && index < dynamicArray.size()) {
        dynamicArray.erase(dynamicArray.begin() + index);
        std::cout << "Prvek byl vymazan z pole." << std::endl;
    }
    else {
        std::cout << "Neplatny index." << std::endl;
    }
}

void Pole::insertElement(int index, int element) {
    if (index >= 0 && index <= dynamicArray.size()) {
        dynamicArray.insert(dynamicArray.begin() + index, element);
        std::cout << "Prvek byl vlozen na pozici " << index << "." << std::endl;
    }
    else {
        std::cout << "Neplatny index." << std::endl;
    }
}

void Pole::insertBefore(int index, int element) {
    if (index >= 0 && index < dynamicArray.size()) {
        dynamicArray.insert(dynamicArray.begin() + index, element);
    }
    else {
        std::cout << "Neplatny index pro vkladani pred prvek." << std::endl;
    }
}

void Pole::insertAfter(int index, int element) {
    if (index >= 0 && index < dynamicArray.size()) {
        dynamicArray.insert(dynamicArray.begin() + index + 1, element);
    }
    else {
        std::cout << "Neplatny index pro vkladani za prvek." << std::endl;
    }
}
