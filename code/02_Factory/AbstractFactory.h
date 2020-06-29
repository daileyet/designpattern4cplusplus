#pragma once
#include "AbstractProduct.h"

class AbstractFactory {
public:
	virtual AbstractProduct* getProduct()=0;
};