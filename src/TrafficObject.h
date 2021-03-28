//
// Created by Parth Parakh on 27/03/21.
//

#ifndef TRAFFIC_SIMULATION_TRAFFICOBJECT_H
#define TRAFFIC_SIMULATION_TRAFFICOBJECT_H

#include<vector>
#include<mutex>
#include<thread>

enum ObjectType
{
    noObject,
    objectVehicle,
    objectIntersection,
    objectStreet
};

class TrafficObject
{
public:
    TrafficObject();
    ~TrafficObject();

    int getID() { return _id; }
    void setPosition(double x, double y);
    void getPosition(double &x, double &y);
    ObjectType getType() {return _type;}

    virtual void simulate(){};
protected:
    ObjectType _type;
    int _id;
    double _posX, _posY;
    std::vector<std::thread> threads;
    static std::mutex _mtx;
private:
    static int _idCnt;
};
#endif //TRAFFIC_SIMULATION_TRAFFICOBJECT_H
