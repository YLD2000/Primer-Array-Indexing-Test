#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl; using std::string; using std::vector; using std::begin; using std::end;
int main()
{
	constexpr size_t rowCnt = 3, colCnt = 4;
	int ia[rowCnt][colCnt];
	int cnt = 0;
	for (auto& r : ia)
		for (auto& c : r) {
			c = cnt;
			++cnt;
		}
	for (int(&row)[4] : ia) {
		for (int col : row)
			cout << col << ' ';
		cout << endl;
	}

	for (int r = 0; r != rowCnt;++r) {
		for (int c = 0;c != colCnt;++c)
			cout << ia[r][c] << ' ';
		cout << endl;
	}
	for (int(*r)[colCnt] = begin(ia);r != end(ia);++r) {
		for (int* c = *r;c != *r + colCnt;++c)
			cout << *c << ' ';
		cout << endl;
	}
	return 0;
}