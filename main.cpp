#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{

    int *b = new int[N_ELEMENTS]; //hibás név (N_ELEMENTS)   ... javítva
    std::cout << "1-100 ertekek duplazasa"; //"" (;hiányzik a végéről)  ... javítva
    for (int i = 0; i < N_ELEMENTS; i++) //hibás for ciklus   ... javítva
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) // hibás for ciklus ... javítva
    {
        std::cout << "Ertek: "<<b[i]<<std::endl; // a b[i] és a ; hiányzik  ... javítva
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag=0; // nincs inicializálva    ... javítva
    for (int i = 0; i < N_ELEMENTS; i++) 
    {
        atlag += b[i]; // ; hiányzik    ... javítva
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    
    std::cout<< "Bucsuházy Barnabás beleírt" << std::endl;
    std::cout << "Még egy kiírás pr miatt" << std::endl;

    delete [] b;    // nincs memória felszabadítás (delete b)    ... javítva
    return 0; 
}  

