//
// Created by Parth Parakh on 28/03/21.
//

#include <iostream>
#include "Vehicle.h"
#include "Intersection.h"
#include "Street.h"

Street::Street()
{
    _type  = ObjectType::objectStreet;
    _length = 1000.0;
}

void Street::setInIntersection(std::shared_ptr<Intersection> in)
{
    _InterIn = in;
    in->addStreet(get_shared_this());
}

void Street::setOutIntersection(std::shared_ptr<Intersection> out)
{
    _InterOut = out;
    out->addStreet(get_shared_this());
}
