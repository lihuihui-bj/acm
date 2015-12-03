/*
 * =====================================================================================
 *
 *       Filename:  leetcode.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/26/2015 12:14:17 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  lijianhui (5105), lijianhui@sogou-inc.com
 *        Company:  Sogou
 *
 * =====================================================================================
 */

#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<map>
#include<math.h>
#include<stack>
#include<set>
//#include<unordered_set>
#include<algorithm>

using namespace std;

typedef struct ListNode {
    ListNode(int x) : val(x), next(NULL) {};
    int val;
    ListNode *next;
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct Node {
    int x;
    int y;
    Node(int _x, int _y) : x(_x), y(_y) {}
};

template<typename Iter>
int printItemSet(Iter begin, Iter end);
//void printTwoDimision(vector<vector<int> > vec);
int printList(ListNode *l);

template<typename T>
int transArrayToDoubleVector(T* arr, int n, vector< vector<T> >& vec, int col, int row);

template<typename Iter>
int printItemSet(Iter begin, Iter end)
{
    printf("-----------\n");
    while(begin != end) {
        cout<< *begin << " ";
        ++begin;
    }
    printf("\n");
}

int printList(ListNode *l)
{
    while (NULL != l) {
        printf("%d ", l->val);
        l = l->next;
    }
    printf("\n");
}

template<typename T>
int transArrayToDoubleVector(T* arr, int n, vector< vector<T> >& vec, int col, int row)
{
    if (col * row > n) {
        return -1;
    }
    vec.clear();
    int t = 0;
    for (int i = 0; i < row; ++i) {
        vector<T> tmp(col);
        for (int j = 0; j < col && t < n; ++j) {
            tmp[j] = arr[t++];
        }
        vec.push_back(tmp);
        printItemSet(tmp.begin(), tmp.end());
    }
    return 0;
}
