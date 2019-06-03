#include "lib2-pub-header.h"
#include "lib2-priv-header.h"

int mult_aux(const int first, const int second) {
	return first * second;
}

int mult(const int first, const int second) {
	return mult_aux(first, second);
}
