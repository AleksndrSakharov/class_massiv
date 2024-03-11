#include "Massiv.h"
    
int main(){
    long a[8] = {1, 2, 5, 4, 5, 6, 7, 8};

    Massiv array = Massiv(a, &a[8]);
    std::cout << array << std::endl;
    return 0;
}