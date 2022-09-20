#include "GolfMemberShipManager.h"

GolfMemberShipManager::GolfMemberShipManager()
    //mfrc522 *rfid = new mfrc522(new SPI(10, 3000000))
{
    //rfid = new mfrc522(new SPI(10, 3000000))
    listener = new Listener();
}

GolfMemberShipManager::~GolfMemberShipManager()
{

}

void GolfMemberShipManager::run()
{
    while(1)
    {
        listener->checkEvent();
        delay(10);
    }
}