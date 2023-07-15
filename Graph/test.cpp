#include "Graph.h"
#include <iostream>
using namespace std;
int main()
{
	Graph g1;
	g1.readGraphFromFile("F://大二下//面向对象数据结构//testdata//graph2.txt");
	g1.initialize();
	cout << "显示整张图所构成的邻阶矩阵" << endl;
	g1.showGraph();
	/*cout << "初始信息：" << endl;
	g1.showInfo();*/
	cout << "The shortest distance  is  " << g1.shortestPath("e", "a") << endl;
	cout << "The shortest path : ";

	// git test04  add  an empty line in test01 branch

	// git_test05  add an empty in main branch

	cout << g1.getShortestPath();
}