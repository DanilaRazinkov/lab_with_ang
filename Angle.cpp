#include "Angle.h"

#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>
#include <iostream>

Angle::Angle()
{
	grad = 0;
	minute = 0;
}

Angle::Angle(int gradD, int minuteD)
{
	grad = gradD;
	minute = minuteD;
	if (minute < 0)
	{
		grad += minute / 60 - 1;
		minute ;
	}
}

void Angle::setGrad(int gradD)
{
	grad = gradD;
}

void Angle::setMinute(int minuteD)
{
	minute = minuteD;
}

int Angle::getGrad()
{
	return grad;
}

int Angle::getMinute()
{
	return minute;
}

std::string Angle::toString()
{
	return std::to_string(grad) + "\`" + std::to_string(minute) + "\'";
}

void Angle::show()
{
	std::cout << grad << "\"" << minute << std::endl;
}

double Angle::inRadian()
{
	return (grad + minute / 60.0) * M_PI / 180.0;
}
void Angle::in0_360()
{
	grad %= 360;
	if (grad < 0)
		grad = 360 + grad;
}
void Angle::add(int gradD, int minuteD)
{
	minute += minuteD;
	grad += gradD + minute / 60;
	minute %= 60;
}
void Angle::minus(int gradD, int minuteD)
{
	minute -= minuteD;
	if (minute < 0)
	{
		grad -= gradD + (minute / 60 - 1);
		minute = 60 + minute % 60;
	}
	else grad -= gradD;
}
double Angle::m_sin()
{
	return sin(inRadian());
}
int Angle::compareTo(Angle ang2)
{
	int res;
	if (grad == ang2.grad)
		if (minute == ang2.minute)
			res = 0;
		else if (minute > ang2.minute)
			res = 1;
		else res = -1;
	else if (grad > ang2.grad)
		res = 1;
	else res = -1;

	return res;
}