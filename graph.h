#ifndef GRAPH_H
#define GRAPH_H
#include <QStringList>
#include <iostream>
#include <queue>
#include <list>
#include <stack>
#include <limits>
#include <unordered_map>
//Инициализирует ребро значением val, устанавливая указатели next и prev как nullptr.
struct edge {
    int val;
    edge* next;
    edge* prev;
    edge(int val);
};

struct vertex {
    int index;
    edge* first;
    edge* last;
    vertex* next;
    vertex* prev;
    int cnt;
    vertex(int numb); //указатели на первое и последнее ребро как nullptr, и счётчик рёбер cnt как 0.
    bool push(int val);// становится первым и последним. В противном случае добавляется в конец списка рёбер.
    bool pop(int index);
    void print();
};

class list_graph {
    vertex* first;
    vertex* last;
    int cnt;
    vertex* find_vertex(int index);
public:
    list_graph();
    QString BFS(int start_index, int end_index);
    bool push(int index, int val);
    bool pop(int index);//Удаляет ребро по индексу в вершине.
Логика: Если индекс находится за пределами списка рёбер или если нет рёбер, возвращается false
    bool pop(int index_vertex, int index_edge);
    void print();
//Печатает все рёбра вершины, выводя их значения и индексы в консоль
};


#endif // GRAPH_H
