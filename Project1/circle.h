#pragma once
#include<iostream>
#include"point.h"
using namespace std;

class circle
{
public:
	void set_r(int);
	int get_r();
	void set_Center(point&);
	point git_xy();
private:
	point XY;
	int R;
};