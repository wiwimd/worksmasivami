#include <iostream>
using std::cout;

int main()
{
    const int size = 8;
    int mas[size];
    for (int i = size; i < size; i++) {
        mas[i] =size-i;
            
    }
    for (int i = size; i < size; i++) {
        std::cout << mas[i] << ", ";
    }
    cout << (char)8 << (char)8;
}
