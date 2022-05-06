#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include <vector>
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Checks Task A: ")
{
    std::vector<int> q = makeVector(5);
    CHECK(q[0] == 0);
    CHECK(q[1] == 1);
    CHECK(q[2] == 2);
    CHECK(q[3] == 3);
    CHECK(q[4] == 4);

    std::vector<int> w = makeVector(0);
    CHECK(w.empty() == true);
}

TEST_CASE("Checks Task B: ")
{
    std::vector<int> e{1,2,-1,3,4,-1,6};
    std::vector<int> r = goodVibes(e);
    CHECK(r[0] == 1);
    CHECK(r[1] == 2);
    CHECK(r[2] == 3);
    CHECK(r[3] == 4);
    CHECK(r[4] == 6);

    std::vector<int> y{1, -2, 3, -4, 5, -6, 0};
    std::vector<int> t = goodVibes(y);
    CHECK(t[0] == 1);
    CHECK(t[1] == 3);
    CHECK(t[2] == 5);
}

TEST_CASE("Checks Task C: ")
{
    std::vector<int> v5{1,2,3};
    std::vector<int> v6{4,5};
    gogeta(v5, v6);
    CHECK(v5[0] == 1);
    CHECK(v5[1] == 2);
    CHECK(v5[2] == 3);
    CHECK(v5[3] == 4);
    CHECK(v5[4] == 5);
    CHECK(v6.empty() == true);

    std::vector<int> v7{-1, 2, -3};
    std::vector<int> v8{4, -5};

    gogeta(v7, v8);
    CHECK(v7[0] == -1);
    CHECK(v7[1] == 2);
    CHECK(v7[2] == -3);
    CHECK(v7[3] == 4);
    CHECK(v7[4] == -5);
    CHECK(v8.empty() == true);
}

TEST_CASE("Checks Task D: ")
{
    std::vector<int> v1{1,2,3};
    std::vector<int> v2{4,5};
    std::vector<int> v = sumPairWise(v1, v2);

    CHECK(v[0] == 5);
    CHECK(v[1] == 7);
    CHECK(v[2] == 3);

    std::vector<int> v3{2,2}; 
    std::vector<int> v4{4,5,6};
    std::vector<int> a = sumPairWise(v3, v4);

    CHECK(a[0] == 6);
    CHECK(a[1] == 7);
    CHECK(a[2] == 6);
}