//
//  SymmetricTree.cpp
//  LeetCode
//
//  Created by wxy325 on 4/20/14.
//  Copyright (c) 2014 wxy. All rights reserved.
//

#include "SymmetricTree.h"

Definition for binary tree
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool visit(TreeNode* left, TreeNode* right)
{
    if (left == NULL && right == NULL)
    {
        return true;
    }
    else if (left == NULL || right == NULL)
    {
        return false;
    }
    else
    {
        if (left->val != right->val)
        {
            return false;
        }
        else
        {
            if (!visit(left->left,right->right) || !visit(left->right, right->left))
            {
                return false;
            }
        }
    }
    return true;
}


bool isSymmetric(TreeNode *root)
{
    if (root == NULL)
    {
        return true;
    }
    else
    {
        return visit(root->left, root->right);
    }
}
