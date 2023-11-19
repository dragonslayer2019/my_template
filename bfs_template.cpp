#include <bits/stdc++.h>
using namespace std;

// 计算从起点 start 到终点 target 的最近距离
int BFSNeedStep(Node start)
{
    deque<Node> q; // 核心数据结构
    set<Node> vistied; // 避免走回头路

    q.push_back(start);
    visited.insert(start);
    while(!q.empty())
    {
        int sz = q.size(); // 当前层的节点个数

        // 当前队列中所有节点向四周扩散
        for(int i = 0; i < sz; ++ i)
        {
            Node cur = q.front();
            q.pop_front();
            
            // 划重点：这里判断是否到达 target
            if(cur is target)
                return step;
            
            // 将 cur 的相邻节点加入队列
            for(Node x: cur.adj())
                if(x not in visited)
                {
                    q.push_back(x);
                    visited.insert(x);
                }
        }
    }
    // 划重点：在这里更新步数
    ++ step;
}

// 纯暴力搜索
int BFSNoNeedStep(Node start)
{
    deque<Node> q; // 核心数据结构
    set<Node> visited; // 避免走回头路

    q.push_back(start);
    visited.insert(start);
    while(!q.empty())
    {
        Node cur = q.front();
        q.pop_front();
        
        /*do some thing*/
        
        // 将 cur 的相邻节点加入队列
        for(Node x: cur.adj())
            if(x not in visited) {
                q.push_back(x);
                visited.insert(x);
            }
    }
}