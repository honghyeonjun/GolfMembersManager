#ifndef LISTENER_H
#define LISTENER_H

//#include "mfrc522.h"
#include "Monitor.h"
#include "CardReader.h"
#include "Controller.h"
#include "Monitor.h"
#pragma once

class Listener
{
public:
    Listener();
    virtual ~Listener();
    void checkEvent();
    bool checkRfid();

private:
    CardReader *rfid;
    Controller *controller;
    uint8_t rfidData[16];
    

};

#endif