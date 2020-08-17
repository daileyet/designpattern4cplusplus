#include "expression_type.h"

int main() {
	Context ctx;
	ctx.input("1 + 1")->interpret()->showOutput();
	ctx.input("9 - 5")->interpret()->showOutput();
	ctx.input("1 + 1 - 1")->interpret()->showOutput();
}

