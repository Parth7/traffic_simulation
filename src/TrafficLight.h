//
// Created by Parth Parakh on 28/03/21.
//

#ifndef TRAFFIC_SIMULATION_TRAFFICLIGHT_H
#define TRAFFIC_SIMULATION_TRAFFICLIGHT_H

#include<mutex>
#include<deque>
#include<condition_variable>
#include"TrafficObject.h"

//forward declaration to avoid cycle
class vehicle;

template<class T>
class MessageQueue
{
public:
private:
};

class TrafficLight
{
public:
private:
    std::condition_variable _condition;
    std::mutex _mutex;
};
#endif //TRAFFIC_SIMULATION_TRAFFICLIGHT_H
