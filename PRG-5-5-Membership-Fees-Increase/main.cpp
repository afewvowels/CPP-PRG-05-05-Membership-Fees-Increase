//
//  main.cpp
//  PRG-5-5-Membership-Fees-Increase
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  A country club, which currently charges $2,500 per year for membershiop, has announced
//  it will incrase its membership fee by 4 percent each year for the next 6 years. Write a
//  program that uses a loop to display the projected rates for the next 6 years.

#include <iostream>

using namespace std;

int main()
{
    int intYear = 2017,
        intYearAdjusted = intYear + 6;
    
    float fltMembershipFee = 2500.00f,
          fltMemberShipFeeProjected;
    
    const float FLT_MEMBERSHIP_INCREASE = 1.04f;
    
    do
    {
        fltMemberShipFeeProjected = fltMembershipFee * FLT_MEMBERSHIP_INCREASE;
        cout << fltMemberShipFeeProjected << endl;
        intYear++;
    } while(intYear <= intYearAdjusted);
        
    return 0;
}


