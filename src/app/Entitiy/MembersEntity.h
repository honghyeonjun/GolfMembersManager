#ifndef MEMBERSENTITY_H
#define MEMBERSENTITY_H

#include <vector>
#include <iostream>
#include "MemberInfo.h"
#include <string>
#pragma once


class MembersEntity
{
public:
    MembersEntity();
    virtual ~MembersEntity();
    void loadMembersInfo();
    // void addmemberInfo(MemberInfo member);
    // void addmemberInfo(MemberInfo member);
    // void makeDBMembersInfo();
    void printMemberInfo(int index);
    void printMemberInfo(std::string name);
    void printMemberInfo(int *cardNum);
    void addMemberInfo(MemberInfo member);
    void memoryToDB();
    bool delMemberInfo(int *cardNum);
    bool findMemberInfo(std::string name);
    bool findMemberInfo(int *cardNum);

private:
    std::vector<MemberInfo> vecMembersList;
    MemberInfo memberInfo;
    FILE * fpDBData;

};

#endif