#pragma once
#include "AbstractFactory.h"

class EraserFactory :
	public AbstractFactory
{
public:
	AbstractProduct* getProduct() override;
};

