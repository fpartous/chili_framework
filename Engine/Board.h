#pragma once
#include "Graphics.h"
#include "Location.h"
#include <assert>
class Board
{
public:
	Board(Graphics& gfx);
	void DrawCell(Location& loc, Color c);
	int getGridWidth() const;
	int getGridHeight() const;
private:
	static constexpr int dimension = 20;
	static constexpr int width = 10;
	static constexpr int height = 10;
	Graphics& gfx;
};

