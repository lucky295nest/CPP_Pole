#ifndef POLE_H
#define POLE_H

#include <vector>

class Pole {
private:
    std::vector<int> dynamicArray;

public:
    // Konstruktor bez parametru
    Pole();

    // Konstruktor s parametrem pro vytvoření pole s daným počtem prvků
    explicit Pole(int size);

    // Destruktor pro uvolnění případných alokovaných zdrojů
    ~Pole();

    void fillArray();       // Naplni pole cisly
    void printArray();      // Vypise hodnoty prvku pole
    void addElementToEnd(int element);  // Prida prvek na konec pole
    void deleteElement(int index);      // Vymaze prvek pole
    void insertElement(int index, int element);   // Vlozi novy prvek na libovolne misto pole
    void insertBefore(int index, int element);  // Vloží prvek před prvek na přípustném indexu
    void insertAfter(int index, int element);   // Vloží prvek za prvek na přípustném indexu
};

#endif // POLE_H
