//
//  main.cpp
//  LeetCode
//
//  Created by wxy325 on 4/5/14.
//  Copyright (c) 2014 wxy. All rights reserved.
//

#include <iostream>
#include "longestConsecutive.h"
#include "lengthOfLongestSubstring.h"
#include "evalRPN.h"
#include <vector>
#include <string>
#include <algorithm>
#include <map>
int main(int argc, const char * argv[])
{
    using namespace std;
    /*
    int a[12] = {9,1,-3,2,4,8,3,-1,6,-2,-4,7};
    vector<int> num(a,a+12);
    cout << longestConsecutive::longestConsecutive1(num) << endl;
     */
    

    /*
    string s("wlrbbmqbhcdarzowkkyhiddqscdxrjmowfrxsjybldbefsarcbynecdyggxxpklorellnmpapqfwkhopkmco");
    cout << lengthOfLongestSubstring(s) << endl;
    */
    
    string sArray[5] =  {"4", "13", "5", "/", "+"};
    vector<string> v = vector<string>(sArray, sArray+5);
    cout << evalRPN(v) << endl;
    
    return 0;
}

