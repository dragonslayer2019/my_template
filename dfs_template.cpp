#include <bits/stdc++.h>
using namespace std;

// 纯暴力搜索
set<int> visited;
void DFS(int cur_node) {
    visited.insert(cur_node);

    /*do some thing*/ 

    for (int& neighbor_node : neighbor_nodes) {
        if (!visited.count(neighbor_node)) {
            DFS(neighbor_node);
        }
    }
}