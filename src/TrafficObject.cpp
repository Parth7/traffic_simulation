//
// Created by Parth Parakh on 27/03/21.
//

#include "TrafficObject.h"
#include<algorithm>
#include<iostream>
#include<chrono>

int TrafficObject::_idCnt = 0;

std::mutex TrafficObject::_mtx;

void TrafficObject::setPosition(double x, double y)
{
    _posX = x;
    _posY = y;
}

void TrafficObject::getPosition(double &x, double &y)
{
    x = _posX;
    y = _posY;
}

TrafficObject::TrafficObject()
{
    _type = ObjectType::noObject;
    _id = _idCnt++;
}

TrafficObject::~TrafficObject()
{
    std::for_each(threads.begin(),threads.end(), [](std::thread &t)
    {
        t.join();
    });
}