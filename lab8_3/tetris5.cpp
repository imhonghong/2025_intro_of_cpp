#include <iostream>
#include <cstdlib>
#include <ctime>
#include "genMino.h"

#include <new>

using namespace std;
int main(){
    
    try{
    int* p = new int[92233720368547758];
    delete[] p;
    } catch (std::bad_alloc& e){
        std::cout << "Memory allocation failed: " << e.what() << std::endl;
    }
    Mino * mino_ptr;

    srand(time(NULL));
    for(int i=0;i<3;++i){
        mino_ptr = genMino();
        mino_ptr->paint();
        delete mino_ptr;
    }
    return 0;
}

