//
//  lengthOfLongestSubstring.cpp
//  LeetCode
//
//  Created by wxy325 on 4/6/14.
//  Copyright (c) 2014 wxy. All rights reserved.
//

#include "lengthOfLongestSubstring.h"
using namespace std;
int lengthOfLongestSubstring(std::string s)
{
    if (!s.length())
    {
        return 0;
    }
    string::size_type maxLength = 1;
    string::size_type length = 1;
    string subStr = string(&s[0],&s[0]+1);
    for (int i = 1; i < s.length(); i++)
    {
        //        string::size_type index = subStr.find(s[i]);
        string::size_type index = subStr.find(s[i]);
        
        if (index  == s.npos)
        {
            //没找到
            subStr += s[i];
            length += 1;
        }
        else
        {
            //找到
            maxLength = maxLength > length? maxLength : length;
            subStr = string(&subStr[index+1],&subStr[0] + subStr.length()) + s[i];
            length = length - index;
        }
    }
    maxLength = maxLength > length? maxLength : length;
//    cout << maxLength << endl;
    return maxLength;
}