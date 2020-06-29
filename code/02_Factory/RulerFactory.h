#pragma once
#include "AbstractFactory.h"

class RulerFactory:public AbstractFactory
{
public:
	AbstractProduct* getProduct() override;
};

