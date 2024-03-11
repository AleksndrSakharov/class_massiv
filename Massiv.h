#pragma once
#include <iostream>
#include <cmath>

template<typename T>
class Massiv
{
private:
    T* _array;
    T* _last;
public:
    Massiv(){
    };
    Massiv(T* array, T* last){
        _last = last;
        _array = array;
    };


    Massiv operator++(int32_t x){
        Massiv result(*this);
        result._array ++;
        return result;
    }

    friend std::ostream& operator<<(std::ostream &os, Massiv &array){
        int count = 0;
        while (array._array[0] != *array._last){
            os << "a[" << count << "] = " << array._array[0] << std::endl;
            count++;
            array._array++;
        }
        return os;
    }
    ~Massiv(){};
};

