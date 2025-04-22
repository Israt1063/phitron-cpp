/*Problem Statement

You are given an  sized 2D matrix that represents a map of a building. Each cell represents a wall or a room. The connected rooms are called apartments. Your task is to count the number rooms in each of the apartments in that building. You can walk left, right, up, and down through the room cells. You can't pass through walls.

You need to print the count of the rooms in ascending order. If there are no apartments available in that building, then you should print .

Input Format

The first input line has two integers  and : the height and width of the map.
Then there are  lines of  characters describing the map. Each character is either .(room) or #(wall).
Constraints


Output Format

Output the number of rooms in each of the apartments in ascending order.
Sample Input 0

5 8
########
#..#...#
####.#.#
#..#...#
########
Sample Output 0

2 2 8
Sample Input 1

6 8
.#.#####
.#.###..
#..#...#
#.##....
..##.###
#.#.##.#
Sample Output 1

1 1 2 8 10*/

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

int dfs(int i, int j) {
    int roomCount = 1;
    vis[i][j] = true;
    for (int k = 0; k < 4; k++) {
        int ci = i + d[k].first;
        int cj = j + d[k].second;
        if (valid(ci, cj) && !vis[ci][cj]) {
            roomCount += dfs(ci, cj);
        }
    }
    return roomCount;
}

int main() {
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    memset(vis, false, sizeof(vis));

    vector<int> apartmentRooms;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == '.' && !vis[i][j]) {
                apartmentRooms.push_back(dfs(i, j));
            }
        }
    }

    if (apartmentRooms.empty()) {
        cout << 0 << endl;
    } else {
        sort(apartmentRooms.begin(), apartmentRooms.end());
        for (int i = 0; i < apartmentRooms.size(); i++) {
            cout << apartmentRooms[i] << " ";
        }
        cout << endl;
    }

    return 0;
}