#include "pole.h"
#include <iostream>

int main() {
    Pole pole;

    int choice;
    do {
        std::cout << "\n=== MENU ===" << std::endl;
        std::cout << "1. Naplnit pole" << std::endl;
        std::cout << "2. Vypsat pole" << std::endl;
        std::cout << "3. Pridat prvek na konec pole" << std::endl;
        std::cout << "4. Vymazat prvek z pole" << std::endl;
        std::cout << "5. Vlozit novy prvek na libovolne misto pole" << std::endl;
        std::cout << "6. Vlozit novy prvek pred libovolne misto pole" << std::endl;
        std::cout << "7. Vlozit novy prvek za libovolne misto pole" << std::endl;
        std::cout << "0. Konec programu" << std::endl;
        std::cout << "Vyberte moznost: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            pole.fillArray();
            break;
        case 2:
            pole.printArray();
            break;
        case 3: {
            int element;
            std::cout << "Zadejte prvek k pridani: ";
            std::cin >> element;
            pole.addElementToEnd(element);
            break;
        }
        case 4: {
            int index;
            std::cout << "Zadejte index prvku k vymazani: ";
            std::cin >> index;
            pole.deleteElement(index);
            break;
        }
        case 5: {
            int index, element;
            std::cout << "Zadejte index, kam vlozit prvek: ";
            std::cin >> index;
            std::cout << "Zadejte prvek k vlozeni: ";
            std::cin >> element;
            pole.insertElement(index, element);
            break;
        }
        case 6: {
            int index, element;
            std::cout << "Zadejte index, pred ktere vlozit prvek: ";
            std::cin >> index;
            std::cout << "Zadejte prvek k vlozeni: ";
            std::cin >> element;
            pole.insertBefore(index, element);
            break;
        }
        case 7: {
            int index, element;
            std::cout << "Zadejte index, za ktere vlozit prvek: ";
            std::cin >> index;
            std::cout << "Zadejte prvek k vlozeni: ";
            std::cin >> element;
            pole.insertAfter(index, element);
            break;
        }
        case 0:
            std::cout << "Konec programu." << std::endl;
            break;
        default:
            std::cout << "Neplatna volba. Zkuste znovu." << std::endl;
        }
    } while (choice != 0);

    return 0;
}
