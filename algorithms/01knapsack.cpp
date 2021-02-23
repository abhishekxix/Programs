#include <iostream>
#include <vector>

using std::vector;

int optimal_weight(int W, const vector<int> &w) {
	std::vector<std::vector<int>> maxWeight (w.size() + 1, std::vector<int> (W + 1));
	int weight {};

	for(int i {1}; i <= w.size(); i++) {
		for(int j {1}; j <= W; j++) {
			maxWeight[i][j] = maxWeight[i - 1][j];
			if(w[i - 1] <= j) {
				weight = maxWeight[i - 1][j - w[i - 1]] + w[i - 1];

				if(weight > maxWeight[i][j])
					maxWeight[i][j] = weight;
			}
		}
	}

	return maxWeight[w.size()][W];
}

int main() {
	int n, W;
	std::cin >> W >> n;
	vector<int> w(n);
	for (int i = 0; i < n; i++) {
		std::cin >> w[i];
	}
	std::cout << optimal_weight(W, w) << '\n';
}
