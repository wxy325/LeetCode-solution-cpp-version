//
//  longestConsecutive.cpp
//  LeetCode
//
//  Created by wxy325 on 4/5/14.
//  Copyright (c) 2014 wxy. All rights reserved.
//

#include "longestConsecutive.h"

using namespace std;
int longestConsecutive::longestConsecutive1(vector<int> &num)
{
    sort(num.begin(), num.end());
    
    int maxCount = 1;
    int count = 1;
    for (int i = 0; i < num.size(); i++)
    {
        if (i != 0)
        {
            if (num[i - 1] + 1 == num[i])
            {
                count++;
            }
            else if (num[i - 1] == num[i])
            {
                continue;
            }
            else
            {
                maxCount = maxCount < count? count:maxCount;
                count = 1;
            }

        }
    }
    maxCount = maxCount < count? count:maxCount;
    return maxCount;
}