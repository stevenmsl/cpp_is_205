#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol205;

/*
Input: s = "egg", t = "add"
Output: true
*/
tuple<string, string, bool>
testFixture1()
{
  return make_tuple("egg", "add", true);
}

/*
Input: s = "foo", t = "bar"
Output: false
*/

tuple<string, string, bool>
testFixture2()
{
  return make_tuple("foo", "bar", false);
}

/*
Input: s = "paper", t = "title"
Output: true
*/

tuple<string, string, bool>
testFixture3()
{
  return make_tuple("paper", "title", true);
}

void test1()
{
  auto f = testFixture1();
  Solution sol;
  cout << "Expect to see " << to_string(get<2>(f)) << ": " << to_string(sol.isIsomorphic(get<0>(f), get<1>(f))) << endl;
}
void test2()
{
  auto f = testFixture2();
  Solution sol;
  cout << "Expect to see " << to_string(get<2>(f)) << ": " << to_string(sol.isIsomorphic(get<0>(f), get<1>(f))) << endl;
}
void test3()
{
  auto f = testFixture3();
  Solution sol;
  cout << "Expect to see " << to_string(get<2>(f)) << ": " << to_string(sol.isIsomorphic(get<0>(f), get<1>(f))) << endl;
}

main()
{
  test1();
  test2();
  test3();
  return 0;
}