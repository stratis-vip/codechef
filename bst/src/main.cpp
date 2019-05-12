#include <iostream>
#include "bst.hpp"

int main(int argc, char *argv[])
{
  // BST *root = nullptr;
  // size_t cases;
  // char operate;
  // int value;
  // std::cin >> cases;
  // for (size_t i = 0; i != cases; i++)
  // {
  //   BST *cur = nullptr;
  //   std::cin >> operate >> value;
  //   switch (operate)
  //   {
  //   case 'i':
  //     if (root == nullptr)
  //     {
  //       root = new BST(value, 1, nullptr);
  //       cur = root;
  //     }
  //     else
  //     {
  //       cur = root->insertValue(value);
  //       std::cout << cur->getPosition() << std::endl;
  //     }
  //     break;
  //   default:
  //     cur = root->deleteValue(value);
  //     std::cout << cur->getPosition() << std::endl;
  //     delete cur;
  //   }
  // }
  // delete root;
  char *x = (char*)malloc(10 * sizeof(char*));
  free(x);
  return x[5];
}