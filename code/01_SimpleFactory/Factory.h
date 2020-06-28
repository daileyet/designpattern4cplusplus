#pragma once
#include <string>
#include "AbstractProduct.h"
#include "Ruler.h"
#include "Pencil.h"
#include "Eraser.h"

using namespace std;

class Factory
{
public:
	AbstractProduct* getProduct(string productName);
};

