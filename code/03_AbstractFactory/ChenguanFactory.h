#pragma once
#include "AbstractFactory.h"
class ChenguanFactory :
	public AbstractFactory
{
public:
	AbstractRuler* getRuler() override;

	AbstractPencil* getPencil() override;
};

