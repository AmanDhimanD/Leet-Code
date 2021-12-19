class Solution {
public:
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
		dfs(grid, row, col, grid[row][col]);
		for (auto addr : res) *addr = color;
		return grid;
    }
private:
	bool dfs(vector<vector<int>>& grid, int row, int col, int color) {
		if (row < 0 || row >= grid.size() ||
		    col < 0 || col >= grid[0].size() ||
		    grid[row][col] != color) return true;

		int* cur = &grid[row][col];
		if (vis.count(cur)) return false;
		vis.insert(cur);

		bool is_bound = false;
		for (auto [x, y] : direct) if (dfs(grid, row + x, col + y, color)) is_bound = true;

		if (is_bound) res.insert(cur);
        	return false;
	}

	array<int[2], 4> direct { { { -1, 0 }, { 1, 0 }, { 0, 1 }, { 0, -1 } } };
	unordered_set<int*> res, vis;
};
