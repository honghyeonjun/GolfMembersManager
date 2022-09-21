#ifndef MANAGEBUTTON_H
#define MANAGEBUTTON_H

#include "Button.h"
#include "DeviceData.h"
#include <string>
#pragma once

//상속 부모클래스 이름
class ManageButton : public Button
{
public:
    ManageButton(int pin, std::string name);
    virtual ~ManageButton();
    bool checkButton();
    DeviceData getButtonData();

private:
    DeviceData buttonData;

};

#endif