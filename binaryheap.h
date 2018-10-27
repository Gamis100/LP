#ifndef BINARYHEAP_H
#define BINARYHEAP_H
#include <iostream>
#include <vector>
#include <iterator  >
using namespace std;
class binaryHeap
{
  private:
    int n = 100;
    vector<int> bh;
    int left(int parent)
    {
        int l = 2 * parent + 1;
        return l;
    }
    int right(int parent)
    {
        int r = 2 * parent + 2;
        return r;
    }
     int parent(int child)
    {
        int p = (child - 1) / 2;
        return p;
    }
    void up(int n)
    {
        if (n && bh[parent(n)] < bh[n])
        {
            swap(bh[n], bh[parent(n)]);
            up(parent(n));
        }
    }
    void down(int n)
    {
        int _child = left(n);
        int _child1 = right(n);
        int f = n;
        if (_child < size() && bh[_child] > bh[n])
        {
            f = _child;
        }
        if (_child1 < size() && bh[_child1] > bh[n])
        {
            f = _child1;
        }
        if (f != n)
        {
            swap(bh[n], bh[f]);
            down(f);
        }
    }
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
   public:
    binaryHeap()
    {
    }
    void push(int x)
    {
        bh.push_back(x);
        up(n++);
    }
    void delete_max()
    {
        swap(bh[0], bh[--n]);
        down(0);
    }
     void build(int a, int n)
    {
    }
     void print()
    {
        vector<int>::iterator i = bh.begin();
        cout << "-->  ";
        while (i != bh.end())
        {
            cout << *i << " ";
            i++;
        }
        cout << endl;
    }
    int size()
    {
        return bh.size();
    }
};
 #endif //BINARYHEAP_H
