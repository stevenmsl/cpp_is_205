#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <queue>
#include <string>
#include <sstream>
using namespace sol205;
using namespace std;

/*takeaways
  - same as question 890
  - word = xxyyxxx pattern = aabbaaa
  - x's final position is 6
    and its position is changing from 0->1->4->5->6
  - we should expect a in pattern has the same
    behavior 0->1->4->5->6
  - y and b should have the same behavior in how
    the their position changes as well
*/

bool Solution::isIsomorphic(string &s, string &t)
{
  /*assume we only have lower case letters */
  auto wpos = vector<int>(26, -1);
  auto ppos = vector<int>(26, -1);
  for (auto pos = 0; pos < s.size(); pos++)
  {
    auto w = s[pos] - 'a', p = t[pos] - 'a';
    /* how the position changes should be the same
       for word[pos] and pattern[pos]
    */
    if (wpos[w] != ppos[p])
      return false;
    /* record new position */
    wpos[w] = ppos[p] = pos;
  }
  return true;
}
