#ifndef MONITOR_H
#define MONITOR_H
#include <iostream>
#pragma once

class Monitor
{
public:
    Monitor();
    virtual ~Monitor();
    void print(uint8_t *data, int size);
private:


};

#endif