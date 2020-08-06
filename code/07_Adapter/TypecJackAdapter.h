#pragma once
#include "HeadsetJack.h"
class TypecJackAdapter :
	public TypecJack, public TraditionJack
{
public:
	void output35mm() override;
	void outputtypec() override;
};

