#include "Listener.h"
#include <string.h>

Listener::Listener()
// : rfid(new CardReader (new SPI(10 , 3000000))), 
// controller(new Controller()) //mfrc522 * rfid = rfid;
{
    rfid= new CardReader (new SPI(10 , 3000000));
    modeButton = new ManageButton(27 , "ModeButton");
    controller = new Controller();
}

Listener::~Listener()
{

}
void Listener::checkEvent()
{
    if (checkRfid())
    {   
      controller -> updateEvent(rfid ->getCardNumber());
    }
    if(modeButton -> checkButton())
    {
      controller ->updateEvent(modeButton->getButtonData());
    }

}
bool Listener::checkRfid()
{
      static unsigned int prevCheckTime = 0 ;

      if(millis() - prevCheckTime < 1000)
      {
        return false;
      }
      prevCheckTime = millis();

      if (rfid -> isCard() ) return true;

      // uint8_t byte;
      // if((byte = rfid -> mfrc522_request(PICC_REQALL, rfidData)) == CARD_FOUND) 
      // {
      //   memset(rfidData , 0 , sizeof(rfidData));
      //   rfid -> mfrc522_get_card_serial(rfidData); 
      //   return true; //맞으면
      // }
      return false; //틀리면
}