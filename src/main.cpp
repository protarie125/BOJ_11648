#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto s = string{};
	cin >> s;

	auto n = s.length();
	auto ans = int{ 0 };
	while (1 < n) {
		auto d = int{ 1 };
		for (auto i = 0; i < n; ++i) {
			d *= (s[i] - '0');
		}

		auto oss = ostringstream{};
		oss << d;

		s = oss.str();
		n = s.length();

		++ans;
	}

	cout << ans;

	return 0;
}