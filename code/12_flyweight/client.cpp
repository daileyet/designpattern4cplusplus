#include "chess.h"

int main() {

	ChessFactory factory;

	Chess* white1 = factory.getChess(Color::WHITE);
	white1->setPoint(0, 0);
	white1->draw();

	Chess* black1 = factory.getChess(Color::BLACK);
	black1->setPoint(1, 1);
	black1->draw();


	Chess* white2 = factory.getChess(Color::WHITE);
	white2->setPoint(2, 6);
	white2->draw();

	Chess* black2 = factory.getChess(Color::BLACK);
	black2->setPoint(3, 4);
	black2->draw();

	return 0;
}