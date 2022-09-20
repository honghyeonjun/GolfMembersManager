#include "CardReader.h"

CardReader::CardReader(SPI *spi) :mfrc522(spi)
{

}

CardReader::~CardReader()
{

}

bool CardReader::isCard()
{
    uint8_t byte = mfrc522_request(PICC_REQALL, rfidData);
    if(byte  == CARD_FOUND) 
    {
        return true; //맞으면
    }
    else
    {
        return false; //틀리면
    }
    return false; //틀리면
}
DeviceData CardReader::getCardNumber()
{

    mfrc522_get_card_serial(rfidData);
    cardData.devName = "cardReader";
    cardData.devData.clear (); //std::vector<int>
    for(const auto data : rfidData)
    {
        cardData.devData.push_back((int)data);
       // cardData.devData.emplace_back((int)data);
    }
    return cardData;
}


