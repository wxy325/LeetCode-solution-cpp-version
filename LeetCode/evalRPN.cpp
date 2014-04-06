//
//  evalRPN.cpp
//  LeetCode
//
//  Created by wxy325 on 4/6/14.
//  Copyright (c) 2014 wxy. All rights reserved.
//

#include "evalRPN.h"
#include <algorithm>
#include <map>
#include <sstream>
using namespace std;
int evalRPN(vector<string> &tokens)
{
    if (tokens.size() == 0)
    {
        return 0;
    }
    vector<int> temp = vector<int>();
    stringstream s;
    for (vector<string>::iterator iter = tokens.begin(); iter != tokens.end(); iter++)
    {
        if (*iter == "+")
        {
            int right =  temp[temp.size() - 1];
            temp.pop_back();
            int left = temp[temp.size() - 1];
            temp.pop_back();
            temp.push_back(left + right);
        }
        else if (*iter == "-")
        {
            int right =  temp[temp.size() - 1];
            temp.pop_back();
            int left = temp[temp.size() - 1];
            temp.pop_back();
            temp.push_back(left - right);
        }
        else if (*iter == "*")
        {
            int right =  temp[temp.size() - 1];
            temp.pop_back();
            int left = temp[temp.size() - 1];
            temp.pop_back();
            temp.push_back(left * right);
        }
        else if (*iter == "/")
        {
            int right =  temp[temp.size() - 1];
            temp.pop_back();
            int left = temp[temp.size() - 1];
            temp.pop_back();
            temp.push_back(left / right);
        }
        else
        {

            s << *iter;
            int t = 0;
            s >> t;
            s.clear();
            temp.push_back(t);
        }
    }
    return temp[0];
    
    /*
    //plus, minus, multiplies, divides
    map<string, binary_function<int, int, int>> opDict = map<string, binary_function<int, int, int>>();
    opDict.insert(pair<string, binary_function<int, int, int>>("+",plus<int>()));
    opDict.insert(pair<string, binary_function<int, int, int>>("-",minus<int>()));
    opDict.insert(pair<string, binary_function<int, int, int>>("*",multiplies<int>()));
    opDict.insert(pair<string, binary_function<int, int, int>>("/",divides<int>()));
    
    map<string, binary_function<int, int, int>>::iterator opIter = opDict.find(string("+"));
    if (opIter == opDict.end())
    {
        
    }
    else
    {
//        (*opIter)(1,2);
    }
    */
    

}