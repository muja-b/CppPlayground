#include "shortcuts.h"
#include <iostream>
    void search(int k, vi subset,int n)
    {
        if (k == n)
        {
            //process subset
        REP(i,0,subset.size()-1)
            {
            std::cout << subset[i] << " | ";
        }
        std::cout <<"fuck" << endl;
        return;
        }
        else 
        {
            //include subset
            subset.push_back(k);
            search(k+1,subset,n);
            subset.pop_back();
            search(k+1,subset,n);
        }
    }

int main()
{
    vi subset = {};
    search(1,subset,4);
}