#include "Board.h"

Board::Board(Graphics& _gfx):gfx(_gfx)
{
}

void Board::DrawCell(Location& loc, Color c)
{
	assert(loc.x >= 0);
	assert(loc.x < width);
	assert(loc.y >= 0);
	assert(loc.y < height);

	gfx.DrawRect(loc.x * dimension, loc.y * dimension, dimension, dimension, c);
}

int Board::getGridWidth() const
{
	return width;
}

int Board::getGridHeight() const
{
	return height;
}
