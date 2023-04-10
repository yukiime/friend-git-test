#ifndef GRAPH_H
#define GRAPH_H

#include <string>
#include <sstream>
#include <fstream>
#include<iostream>
#include<vector>
using  namespace  std;
const  int  MAX_SCALE = 20;
class Graph
{
private:
	vector<string>  vertex;//点的集合v[0]='a',v['1']='s'....
	int  v_size = 0;//点的数量
	vector<vector<int>> matrix;//邻接矩阵
	vector<bool>   v_isVisited;//某点是否已经被访问
	vector<int>    d_shortest;//源点s到达其他顶点的最短距离
	vector<int>    pre;//源点s访问某个点的直接前驱
	string  v;//起点
	string  w;//终点

public:
	Graph();
	~Graph();
	void addVertex(std::string v);
	void addEdge(std::string v, std::string w, int weight);
	void  initialize();//读取完数据后进行的初始化操作
	int  vToIndex(string  v);//将某个由字母表示的点输出为其索引
	int  findPre(int index);//输入某个点，根据pre表找到它在最短路径上的前驱
	int shortestPath(std::string v, std::string w);
	std::string getShortestPath();
	void readGraphFromFile(std::string pathToFile);
	void showGraph();//显示整个邻接矩阵
	void showInfo();//显示各张工具表的数据
	bool ifHaveV(string  v);//用来检验用户输入的点是否在图中
};

#endif
#pragma once
