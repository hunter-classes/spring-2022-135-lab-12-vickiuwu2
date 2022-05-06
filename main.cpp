#include <iostream>
#include <vector>

#include "funcs.h"

void printVector(std::vector<int> v)
{
    std::cout << "[";
    for (int x = 0; x < v.size(); x++)
    {
        std::cout << v[x];
        if (x != v.size() - 1)
        {
            std::cout << ",";
        }
    }
    std::cout << "]\n\n";
}
int main()
{
    std::cout << "---------------Task A---------------\n";
    std::vector<int> q = makeVector(5);
    std::vector<int> w = makeVector(0);
    std::cout << "makeVector(5) returns: ";
    printVector(q);

    std::cout << "makeVector(0) returns: ";
    printVector(w);

    std::cout << "---------------Task B---------------\n";
    std::vector<int> e{1,2,-1,3,4,-1,6};
    std::vector<int> r = goodVibes(e); 
    std::cout << "goodVibes(e), where e{1,2,-1,3,4,-1,6} returns: ";
    printVector(r);
    
    std::vector<int> y{1, -2, 3, -4, 5, -6, 0};
    std::vector<int> t = goodVibes(y);
    std::cout << "goodVibes(y), where y{1,2,-1,3,4,-1,6} returns: ";
    printVector(t);

    std::cout << "---------------Task C---------------\n";
    std::vector<int> v5{1,2,3};
    std::vector<int> v6{4,5};

    gogeta(v5, v6); 
    std::cout << "gogeta(v5, v6), where v5 = {1, 2, 3} and v6 = {4, 5} returns: \n";
    std::cout << "v5 = ";
    printVector(v5);
    std::cout << "v6 = ";
    printVector(v6);

    std::vector<int> v7{-1, 2, -3};
    std::vector<int> v8{4, -5};

    gogeta(v7, v8); 
    std::cout << "gogeta(v7, v8), where v7 = {-1, 2, -3} and v8 = {4, -5} returns: \n";
    std::cout << "v7 = ";
    printVector(v7);
    std::cout << "v8 = ";
    printVector(v8);

    std::cout << "---------------Task D---------------\n";
    std::vector<int> v1{1,2,3};
    std::vector<int> v2{4,5};
    std::vector<int> v = sumPairWise(v1, v2);
    std::cout << "sumPairWise(v1, v2), where v1 = {1, 2, 3} and v2 = {4, 5}, returns: ";
    printVector(v);

    std::vector<int> v3{2,2}; 
    std::vector<int> v4{4,5,6};
    std::vector<int> a = sumPairWise(v3, v4);
    std::cout << "sumPairWise(v3, v4), where v3 = {2, 2} and v4 = {4, 5, 6}, returns: ";
    printVector(a);
    
    return 0;
}