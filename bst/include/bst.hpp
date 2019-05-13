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

  std::shared_ptr<BST> insertValue(const int val)
  {
    std::shared_ptr<BST> retval;
    if (val > value)
    {
      if (right == nullptr)
      {
        right = std::make_unique<BST>(val, position * 2 + 1);
        return std::make_shared<BST>(val, position * 2 + 1);
      }
      retval = right->insertValue(val);
    }
    else if (val < value)
    {
      if (left == nullptr)
      {
        left = std::make_unique<BST>(val, position * 2);
        return std::make_shared<BST>(val, position * 2);
      }
      left->insertValue(val);
    }
    return nullptr;
  }

  ~BST()
  {

  }

  const int getValue() { return value; }
  const int getPosition() { return position; }

private:
  std::unique_ptr<BST> left;
  std::unique_ptr<BST> right;
  int value;
  size_t position;
};