#include"Graph.h"

void main()
{
	Graph g;
	int data,ch;
	while(ch!=4)
	{
		cout<<"\n\n1.insert";
		cout<<"\n2.DFS";
		cout<<"\n3.BFS";
		cout<<"\n4.exit";
		cout<<"\nEnter the choice:";
		cin>>ch;
		switch(ch)
		{
		case 1:
			cout<<"\nEnter the data:";
			cin>>data;
			g.insert(data);
			break;
		case 2:
			g.dfs();
			break;
		case 3:
			g.bfs();
			break;
		}
	}



}