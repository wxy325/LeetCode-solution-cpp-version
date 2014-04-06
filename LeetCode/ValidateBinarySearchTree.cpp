//
//  ValidateBinarySearchTree.cpp
//  LeetCode
//
//  Created by wxy325 on 4/6/14.
//  Copyright (c) 2014 wxy. All rights reserved.
//

#include "ValidateBinarySearchTree.h"
/**
 * Definition for binary tree
 */
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
using namespace std;
bool isValidBST(TreeNode *root)
{
    if (!root)
    {
        return true;
    }
    
    if (root->left)
    {
        if (root->left->val < root->val)
        {
            TreeNode* tempRight = root->left;
            while (tempRight->right)
            {
                tempRight = tempRight->right;
            }
            if (tempRight->val < root->val)
            {
                if (!isValidBST(root->left))
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    
    if (root->right)
    {
        if (root->right->val > root->val)
        {
            TreeNode* tempLeft = root->right;
            while (tempLeft->left)
            {
                tempLeft = tempLeft->left;
            }
            if (tempLeft->val > root->val)
            {
                if (!isValidBST(root->right))
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    return true;
}