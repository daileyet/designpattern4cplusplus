#pragma once
#include "AbstractFactory.h"


class PencilFactory :
	public AbstractFactory
{
public:
	AbstractProduct* getProduct() override;
};

