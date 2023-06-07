class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int n = prices.size();
		vector<int> lp(n, 0), rp(n, 0);
		int sbseSastaStock = prices[0];
		int ans = 0;
		for (int i = 1; i < n; ++i)
		{
			int currentStockKaPrice = prices[i];
			lp[i] = max(lp[i - 1],
			            currentStockKaPrice - sbseSastaStock);
			sbseSastaStock = min(sbseSastaStock, currentStockKaPrice);
		}

		int sbseMehngaStock = prices[n - 1];
		for (int i = n - 2; i >= 0; --i)
		{
			int currentStockKaPrice = prices[i];
			rp[i] = max(rp[i + 1],
			            sbseMehngaStock - currentStockKaPrice);
			sbseMehngaStock = max(sbseMehngaStock, currentStockKaPrice);
		}

		for (int i = 0; i < n; ++i)
		{
			cout << lp[i] << " ";
		}
		cout << endl;
		for (int i = 0; i < n; ++i)
		{
			cout << rp[i] << " ";
		}
		cout << endl;

		return -1;
	}
};