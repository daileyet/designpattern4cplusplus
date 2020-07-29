#pragma once
#include <iostream>
#include <map>
using namespace std;

enum Color {
	WHITE, BLACK
};

struct Point {
	int x, y;
};

class Chess {
public:
	void draw() {
		cout << "Chess " << (m_color==WHITE?"white":"black") << " at position:("<< m_pos.x<<","<< m_pos.y<<")" << endl;
	}
	Color getColor() {
		return m_color;
	}
	Point getPoint() {
		return m_pos;
	}
	void setPoint(int x, int y) {
		m_pos.x = x;
		m_pos.y = y;
	}
protected:
	Color m_color;
private:
	Point m_pos;
};

class WhiteChess :public Chess {
public:
	WhiteChess()  {
		m_color = WHITE;
	}
};

class BlackChess :public Chess {
public:
	BlackChess() {
		m_color = BLACK;
	}
};

class ChessFactory {
public:
	Chess* getChess(Color color) {
		map<Color, Chess*>::iterator l_it = m_chesses.find(color);
		Chess* ret = nullptr;
		if (l_it == m_chesses.end()) {
			switch (color)
			{
			case WHITE:
				ret = new WhiteChess;
				break;
			default:
				ret = new BlackChess;
				break;
			}
			m_chesses[color] = ret;
			return ret;
		}
		return (*l_it).second;
	}
private:
	map<Color, Chess*> m_chesses;
};