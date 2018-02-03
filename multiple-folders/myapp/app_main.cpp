#include <iostream>

#include "mystlib/mystlib.h"
#include "myshlib/myshlib.h"

int main(int argc, char *argv[]) {
    std::cout << get_number(100) << std::endl;
    std::cout << get_number_shlib(100) << std::endl;
    return 0;
}
