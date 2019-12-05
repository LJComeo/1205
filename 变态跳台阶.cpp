#include <iostream>
using namespace std;

class Solution {
public:
	int jumpFloorII(int number) {
		return (1 << (number - 1));
	}
};
int main1()
{
	Solution s;
	int tmp = s.jumpFloorII(4);
	cout << tmp << endl;
	return 0;
}