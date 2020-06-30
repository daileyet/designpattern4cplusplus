#include "ChenguanFactory.h"
#include "ChenguanRuler.h"
#include "ChenguanPencil.h"

AbstractRuler* ChenguanFactory::getRuler()
{
	return new ChenguanRuler();
}

AbstractPencil* ChenguanFactory::getPencil()
{
	return new ChenguanPencil();
}
