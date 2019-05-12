#include <cstddef>
#include <memory>
#include <iostream>

class BST
{
public:
  BST(const int val, const int pos = 1) : value(val), position(pos)
  {
    left = nullptr;
    right = nullptr;
  };

  std::unique_ptr<BST> insertValue(const int val)
  {
    if (val > value)
    {
      if (right == nullptr)
      {
        right = new BST(val, position * 2 + 1);
        return right;
      }
      right->insertValue(val);
    }
    else if (val < value)
    {
      if (left == nullptr)
      {
        left = std::make_unique(val, position * 2);
        return left;
      }
      left->insertValue(val);
    }
    return this;
  }

  ~BST()
  {
    if (left != nullptr)
      freeBST(left);
    if (right != nullptr)
      freeBST(right);
  }

  void freeBST(std::unique_ptr<BST> node)
  {
    std::cout << "Pointer freed"<< std::endl;
  }

  const int getValue() { return value; }
  const int getPosition() { return position; }

private:
  std::unique_ptr<BST> left;
  std::unique_ptr<BST> right;
  int value;
  size_t position;
};