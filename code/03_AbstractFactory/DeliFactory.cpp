#include "DeliFactory.h"
#include "DeliRuler.h"
#include "DeliPencil.h"

AbstractRuler* DeliFactory::getRuler() {
	return new DeliRuler();
}

AbstractPencil* DeliFactory::getPencil() {
	return new DeliPencil();
}
