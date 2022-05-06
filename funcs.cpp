#include <iostream>
#include <vector>

#include "funcs.h"

std::vector<int> makeVector(int n)
{
    std::vector<int> v; //initialize vector

    for (int i = 0; i < n; i++) //index btwn 0 to n-1
    {
        v.push_back(i);
    }

    return v;
}

std::vector<int> goodVibes(const std::vector<int> v)
{
    std::vector<int> a; //create new array

    for (int i = 0; i < v.size(); i++) //loops through given vector, add if greater than 0
    {
        if (v[i] > 0)
        {
            a.push_back(v[i]);
        }
    }
    
    return a;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta)
{
    for (int i = 0; i < vegeta.size(); i++)
    {
        int n = vegeta[i];
        goku.push_back(n);
    }
    
    vegeta.clear();
}

std::vector<int> sumPairWise(std::vector<int> &v1, std::vector<int> &v2)
{
    std::vector<int> a;
    int bigger = 1; 
    if (v2.size() >= v1.size())
    {
        for (int i = 0; i < v1.size(); i++)
        {
            int sum = v1[i] + v2[i];
            a.push_back(sum);
        }
        bigger = 2; 
    }
    else if (v1.size() > v2.size())
    {
        for (int i = 0; i < v2.size(); i++)
        {
            int sum = v1[i] + v2[i];
            a.push_back(sum);
        }
        bigger = 1;
    }
    if (bigger == 1)
    {
        for (int i = v2.size(); i < v1.size(); i++)
        {
            a.push_back(v1[i]);
        }
    }
    else
    {
        for (int i = v1.size(); i < v2.size(); i++)
        {
            a.push_back(v2[i]);
        }
    }

    return a;
}