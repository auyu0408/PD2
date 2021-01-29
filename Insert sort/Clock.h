#ifndef CLOCK_H
#define CLOCK_H
#include<ctime>
using namespace std;

class Clock
{
	public:
		Clock();
		Clock(clock_t s);
		void start();
		void setStart(clock_t start_ts);
		double getTime();
		clock_t getStart();
	private:
		clock_t start_ts;
};
#endif
