#pragma once
#include "AbstractRuler.h"
#include "AbstractPencil.h"

class AbstractFactory {
public:
	virtual AbstractRuler* getRuler() = 0;
	virtual AbstractPencil* getPencil() = 0;
};