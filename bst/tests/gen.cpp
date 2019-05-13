#include "gmock/gmock.h"
#include "bst.hpp"

using namespace testing;

class TestingBSTEmptyObject : public Test
{
public:
  BST tclass{10,1};
};

TEST_F(TestingBSTEmptyObject, getValue)
{
  //BST * temp = &tclass;
  ASSERT_THAT(tclass.getValue(), Eq(10));
}

TEST_F(TestingBSTEmptyObject, getPosition)
{
  //BST * temp = &tclass;
  ASSERT_THAT(tclass.getPosition(), Eq(1));
}

TEST_F(TestingBSTEmptyObject, Insert20)
{
  std::shared_ptr<BST> temp = tclass.insertValue(20);
  ASSERT_THAT(temp->getValue(), Eq(20));
}



int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
