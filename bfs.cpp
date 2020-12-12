#include <iostream>
#include <vector>
using namespace std;

typedef struct Node
{
  int value;
  vector<Node *> children;
} Node;

void createNodes(Node *node, vector<int> values)
{
  for (size_t i = 0; i < values.size(); i++)
  {
    Node *child = new Node();
    child->children = {};
    child->value = values[i];

    node->children.push_back(child);
  }
}

int main()
{
  Node *root = new Node();
  createNodes(root, {1, 2, 3, 4});
  return 0;
}d