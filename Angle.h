#include <string>

class Angle
{
private:
	int grad, minute;
public:
	Angle();
	Angle(int grad, int minute);
	void setGrad(int);
	void setMinute(int);
	int getGrad();
	int getMinute();
	std::string toString();
	void show();
	double inRadian();
	void in0_360();
	void add(int grad, int minute);
	void minus(int grad, int minute);
	double m_sin();
	int compareTo(Angle ang2);
};