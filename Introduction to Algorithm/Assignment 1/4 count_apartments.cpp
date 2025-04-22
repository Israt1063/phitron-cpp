/*Problem Statement

You are given an  sized 2D matrix that represents a map of a building. Each cell represents a wall or a room. The connected rooms are called apartments. Your task is to count the number of apartments in that building. You can walk left, right, up, and down through the room cells. You can't pass through walls.

Input Format

The first input line has two integers  and : the height and width of the map.
Then there are  lines of  characters describing the map. Each character is either .(room) or #(wall).
Constraints


Output Format

Output the number of apartments
Sample Input 0

5 8
########
#..#...#
####.#.#
#..#...#
########
Sample Output 0

3
Sample Input 1

6 8
.#.#####
.#.###..
#..#...#
#.##....
..##.###
#.#.##.#
Sample Output 1

5
*/

//Solution:
#include <iostream>
#include<vector>
using namespace std;

const int MAX_N = 1000;
char a[MAX_N][MAX_N];
bool vis[MAX_N][MAX_N];
int n, m;

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool valid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m && a[i][j] == '.';
}

void dfs(int i, int j) {
    vis[i][j] = true;
    for (int k = 0; k < 4; k++) {
        int ci = i + d[k].first;
        int cj = j + d[k].second;
        if (valid(ci, cj) && !vis[ci][cj]) {
            dfs(ci, cj);
        }
    }
}

int main() {
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    memset(vis, false, sizeof(vis));

    int apartmentCount = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == '.' && !vis[i][j]) {
                dfs(i, j);
                apartmentCount++;
            }
        }
    }

    cout << apartmentCount << endl;

    return 0;
}