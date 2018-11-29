#include "clock.h"

/*
Write code to return hours given seconds since 1970

*/
int Clock::get_hours() const
{
	int hour;
	hour = seconds / 3600 % 12;
	if (hour >= 0 && hour <= 5)
		hour += 6;
	else
		hour -= 6;
	return hour;
}

/*
Write code to return minutes given seconds since 1970

*/

int Clock::get_minutes() const
{
	return seconds / 60 % 60;
}

/*
Write code to return seconds given seconds since 1970

*/
int Clock::get_seconds() const
{
	return seconds % 60;
}

/*
Write code to return 12hour formatted time 
*/
std::string Clock::get_time() const
{
	std::string digital_time{""};
	if (get_hours() == 0)
		digital_time = "12";
	else
		digital_time = std::to_string(get_hours());
	digital_time += ":";
	if (get_minutes() < 10)
		digital_time += "0";
	digital_time += std::to_string(get_minutes());
	digital_time += ":";
	if (get_seconds() < 10)
		digital_time += "0";
	digital_time += std::to_string(get_seconds());
	return (digital_time);
}

void Clock::update_time()
{
	seconds += 1;
}
