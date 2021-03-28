//
// Created by Parth Parakh on 28/03/21.
//

#ifndef TRAFFIC_SIMULATION_VEHICLE_H
#define TRAFFIC_SIMULATION_VEHICLE_H

#include"TrafficObject.h"

//forward declaration to avoid include cycle
class Street;
class Intersection;

//enable_shared_from_this: It enables you to get a valid shared_ptr instance to this, when all you have is this.
// Without it, you would have no way of getting a shared_ptr to this, unless you already had one as a member.
class Vehicle : public TrafficObject, public std::enable_shared_from_this<Vehicle>
{
public:
    Vehicle();
    void setCurrentStreet(std::shared_ptr<Street> Street){_currStreet = Street;}
    void setCurrentDestination(std::shared_ptr<Intersection> destination);
    void simulate();

    std::shared_ptr<Vehicle> get_shared_this( ) { return shared_from_this(); }

private:
    void drive();
    std::shared_ptr<Street> _currStreet;
    std::shared_ptr<Intersection> _currDestination;
    double _posStreet;
    double _speed;
};
#endif //TRAFFIC_SIMULATION_VEHICLE_H
