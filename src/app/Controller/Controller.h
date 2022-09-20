#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Monitor.h"
#include "DeviceData.h"
#pragma once

class Controller
{
public:
    Controller();
    virtual ~Controller();
    void updateEvent(DeviceData data);

private:
    Monitor *monitor;

};

#endif