#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Monitor.h"
#include "DeviceData.h"
#include "MembersManageService.h"
#pragma once

class Controller
{
public:
    Controller();
    virtual ~Controller();
    void updateEvent(DeviceData data);

private:
    Monitor *monitor;
    MembersManageService *membersManageService;

};

#endif