#include"circle.h"

void circle::set_r(int r)
{
	R=r;
}
void circle::set_Center(point& xy)
{
	XY = xy;
}
int circle::get_r()
{
	return R;
}
point circle::git_xy()
{
	return XY;
}

