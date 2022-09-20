#ifndef MEMBERSENTITY_H
#define MEMBERSENTITY_H

#include <vector>
#include <iostream>
#include "MemberInfo.h"

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
    void printMemberInfo();

private:
    std::vector<MemberInfo> vecMembersList;
    MemberInfo memberInfo;
    FILE * fpDBData;

};

#endif