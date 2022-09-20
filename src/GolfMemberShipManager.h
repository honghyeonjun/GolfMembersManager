#ifndef GOLFMEMBERSHIPMANAGER_H
#define GOLFMEMBERSHIPMANAGER_H

#include "Listener.h"
#include <iostream>

#pragma once

class GolfMemberShipManager
{
public:
    GolfMemberShipManager();
    virtual ~GolfMemberShipManager();
    void run();

private:
    Listener *listener;

};

#endif