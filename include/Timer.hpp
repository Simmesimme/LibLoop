/*
 * Timer.hpp
 *
 *  Created on: 20.11.2012
 *      Author: simon
 */

#ifndef TIMER_HPP_
#define TIMER_HPP_

#include <ev++.h>
#include <memory>

namespace loop {

struct EventHandler;

class Timer {
public:
	Timer(std::function<double()> callback, double delay);
	~Timer();

private:
	void self_callback(ev::timer &timer, int revents);

	std::function<double()> callback_;

	ev::timer timer_;
};

}

#endif /* TIMER_HPP_ */