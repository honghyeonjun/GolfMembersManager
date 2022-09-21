#include <iostream>
#include "GolfMemberShipManager.h"
#include "MembersEntity.h"
#include <cstring>
int main(void)
{
    GolfMemberShipManager golfMemberShipManager;

    golfMemberShipManager.run();
    // MembersEntity membersEntity;
    // membersEntity.printMemberInfo(10);
    // membersEntity.printMemberInfo(150);
    // membersEntity.printMemberInfo(200);
    // membersEntity.printMemberInfo(2000);
    // membersEntity.printMemberInfo("ontttqpke");
    // membersEntity.printMemberInfo("lanwluabd");
    // if(membersEntity.findMemberInfo("lanwluabd"))
    // {
    //     printf("lanwluabd found the name!\n");
    // }
    // else
    // {
    //     printf("not found the name!\n");
    // }
    // if(membersEntity.findMemberInfo("gogildong"))
    // {
    //     printf("gogildong is found the name!\n");
    // }
    // else
    // {
    //     printf("gogildong is not found the name!\n");
    // }
    // return 0;

    // int cardNumber[5] = {0xb4,0x12,0xd8,0xfc,0xa6};

    // membersEntity.printMemberInfo(cardNumber);
    // if(membersEntity.findMemberInfo(cardNumber))
    // {
    //     printf("lanwluabd's cardNumber found!\n");
    // }
    // else
    // {
    //     printf("lanwluabd's cardNumber not found!\n");
    // }



    // if(membersEntity.findMemberInfo("gogildong"))
    // {
    //     printf("gogildong is found the name!\n");
    // }
    // else
    // {
    //     printf("gogildong is not found the name!\n");
    // }



    // int cardNumber2[5] = {0x01,0xc23,0x45,0x67,0x89};
    // if(membersEntity.findMemberInfo(cardNumber2))
    // {
    //     printf("cardNumber found!\n");
    // }
    // else
    // {
    //     printf("cardNumber not found!\n");
    // }

    
    // printf("\n");

    // //1. create member
    // MemberInfo member;
    // member.id = 100000;
    // strcpy(member.name,"HongGilDong");
    // strcpy(member.address, "100Dong-100Ho");
    // strcpy(member.phoneNumber, "010-1234-1234");
    // int num[5] = {0x01,0x23,0x45,0x67,0x89};
    // memcpy(member.cardNum, num, sizeof(num));
    // membersEntity.addMemberInfo(member);

    // //2. print, find
    // //id
    // membersEntity.printMemberInfo(100000);
    // //name
    // membersEntity.printMemberInfo("HongGilDong");
    // if(membersEntity.findMemberInfo("HongGilDong"))
    // {
    //     printf("HongGilDong : found the name!\n");
    // }
    // else
    // {
    //     printf("HongGilDong : not found the name!\n");
    // }

    // //cardNum
    // membersEntity.printMemberInfo(num);
    // if(membersEntity.findMemberInfo(num))
    // {
    //     printf("num : cardNumber found!\n");
    // }
    // else
    // {
    //     printf("num : cardNumber not found!\n");
    // }
    // if(membersEntity.delMemberInfo(cardNumber))
    // {
    //  printf("deleted!\n");   
    // } //찾아서 지워라
    // else 
    // {
    //     printf("deleted error\n");
    // }





    // if(membersEntity.findMemberInfo(cardNumber))
    // {
    //     printf("del -- found the cardNumber\n");
    // }
    // else
    // {
    //     printf("del -- not found the cardNumber\n");
    // }






    // return 0;
}
//     mfrc522 rfid(new SPI(10,3000000));
//     Listener *listener = new Listener(&rfid);
//     while (1)
//     {
//         listener -> checkEvent();
//         delay(1000);
//         printf("hihi\n");

//     }
// }
