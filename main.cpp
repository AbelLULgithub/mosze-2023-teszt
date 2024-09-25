#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];  //hibás név (N_ELEMENTS)
    std::cout << '1-100 ertekek duplazasa'  //"" (;hiányzik a végéről)
    for (int i = 0;)  //hibás for ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)  // hibás for ciklus 
    {
        std::cout << "Ertek:"  // a b[i] és a ; hiányzik
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;  // nincs inicializálva
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]  // ; hiányzik 
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
                    // nincs memória felszabadítás (delete b) 
    return 0;
}
