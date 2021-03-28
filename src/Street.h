//
// Created by Parth Parakh on 28/03/21.
//

#ifndef TRAFFIC_SIMULATION_STREET_H
#define TRAFFIC_SIMULATION_STREET_H

#include"TrafficObject.h"

//forward declaration
class Intersection;

class Street : public TrafficObject, public std::enable_shared_from_this<Street>
{
public:
    Street();
    double getLength() { return _length; }
    void setInIntersection(std::shared_ptr<Intersection> in);
    void setOutIntersection(std::shared_ptr<Intersection> out);
    std::shared_ptr<Intersection> getInIntersection () { return _InterIn; }
    std::shared_ptr<Intersection> getOutIntersection () { return _InterOut; }

    std::shared_ptr<Street> get_shared_this() { return shared_from_this(); }
private:
    double _length;
    std::shared_ptr<Intersection> _InterIn, _InterOut;
};
#endif //TRAFFIC_SIMULATION_STREET_H
