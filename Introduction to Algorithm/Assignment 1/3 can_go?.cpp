/*Problem Statement

You are given an  sized 2D matrix that represents a map of a building. Each cell represents a wall, a floor or a room. You will be given two rooms  and . You need to tell if you can go from room  to  by passing through the floors. You can walk left, right, up, and down through the floor cells. You can't pass through walls.

Input Format

The first input line has two integers  and : the height and width of the map.
Then there are  lines of  characters describing the map. Each character is .(floor), #(wall), A or B (rooms).
Constraints


Output Format

Output YES if you can go from room  to , NO otherwise.
Sample Input 0

5 8
########
#.A#...#
#.##.#B#
#......#
########
*/

//Solution:
#include <iostream>
#include<vector>
using namespace std;

int n, m;
vector<string> a;
vector<vector<bool>> vis;
vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m && a[i][j] != '#';
}

bool bfs(int si, int sj, int ei, int ej) {
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;

    while (!q.empty()) {
        pair<int, int> par = q.front();
        int x = par.first, y = par.second;
        q.pop();

        if (x == ei && y == ej) {
            return true;
        }

        for (int i = 0; i < 4; i++) {
            int ci = x + directions[i].first;
            int cj = y + directions[i].second;

            if (valid(ci, cj) && !vis[ci][cj] && (a[ci][cj] == '.' || a[ci][cj] == 'B')) {
                q.push({ci, cj});
                vis[ci][cj] = true;
            }
        }
    }

    return false;
}

int main() {
    cin >> n >> m;
    a.resize(n);
    vis.resize(n, vector<bool>(m, false));

    pair<int, int> start, end;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 'A') start = {i, j};
            if (a[i][j] == 'B') end = {i, j};
        }
    }

    if (bfs(start.first, start.second, end.first, end.second)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
