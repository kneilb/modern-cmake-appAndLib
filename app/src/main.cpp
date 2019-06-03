#include <iostream>
#include "lib1-pub-header.h"
#include "lib2-pub-header.h"

int main(int, char **) {
	std::cout << "1 + 2 = " << sum(1, 2) << '\n';
    std::cout << "1 * 2 = " << mult(1, 2) << '\n';
	return 0;
}
