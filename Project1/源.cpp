#include <iostream>
#include <string>
#include"point.h"
#include"circle.h"
using namespace std;
int main()
{
	circle c1;
	point k1;
	point k2;
	point k3;

	k1.set_XY(10, 0);
	k2.set_XY(10, 9);
	k3.set_XY(10, 11);

	c1.set_r(10);//ÉèÖÃ°ë¾¶
	c1.set_Center(k1);//ÉèÖÃÔ²ĞÄ
	return 0;
}