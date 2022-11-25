//#include <iostream>
//#include <string>
//#include <map>
//#include <list>
//#include <random>
//#include "dijkstra.h"
//using namespace std;
//
//
//int main()
//{
//	Graph    djGarph(3);
//
//	djGarph.insert(1, ArcEdge(2, 6));
//	djGarph.insert(1, ArcEdge(6, 7));
//	djGarph.insert(1, ArcEdge(7, 4));
//	djGarph.insert(2, ArcEdge(3, 5));
//	djGarph.insert(2, ArcEdge(7, 6));
//	djGarph.insert(3, ArcEdge(4, 3));
//	djGarph.insert(4, ArcEdge(5, 6));
//	djGarph.insert(4, ArcEdge(7, 8));
//	djGarph.insert(5, ArcEdge(6, 9));
//	djGarph.insert(6, ArcEdge(7, 3));
//
//	cout << djGarph.dijkstra(6, 4);
//
//	return 0;
//}
//
//
////int dijkstra(const int srcNode, const int dstNode) const
////{
////	vector<int>   distance(_nodeSize, INT_MAX);
////	vector<bool>	exist(_nodeSize, false);
////	distance[srcNode] = 0;
////	exist[srcNode] = true;
////	int head = srcNode;
////	while (exist[dstNode] != true)
////	{
////		auto  fistArc = _GraphData[head];
////		for (auto ptr = fistArc.begin(); ptr != fistArc.end(); ptr++)
////		{
////			int ptrNodeNum = ptr->number;
////			if (exist[ptrNodeNum] != true && distance[ptrNodeNum] > (distance[head] + ptr->weight))
////			{
////				distance[ptrNodeNum] = (distance[head] + ptr->weight);
////			}
////		}
////		//find the minest number in distance
////		int minPostion = 1;
////		int compareNum = INT_MAX;
////		for (int index = 1; index < distance.size(); index++)
////		{
////			if (exist[index] != true && index != head && distance[index] < compareNum)
////			{
////				minPostion = index;
////				compareNum = distance[index];
////			}
////		}
////		exist[minPostion] = true;
////		head = minPostion;
////	}
////	return distance[dstNode];
////}