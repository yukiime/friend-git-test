#include "Graph.h"
#include <iostream>
using namespace std;
int main()
{

	Graph g1;
	// git test 02
	g1.readGraphFromFile("F://�����//����������ݽṹ//testdata//graph2.txt");
	g1.initialize();
	cout << "��ʾ����ͼ�����ɵ��ڽ׾���" << endl;
	g1.showGraph();
	/*cout << "��ʼ��Ϣ��" << endl;
	g1.showInfo();*/
	cout << "The shortest distance  is  " << g1.shortestPath("e", "a") << endl;
	cout << "The shortest path : ";
	cout << g1.getShortestPath();
}