#pragma once
#include "AbstractFactory.h"

class DeliFactory :
	public AbstractFactory {
public:
	AbstractRuler* getRuler() override;
	AbstractPencil* getPencil() override;
};

