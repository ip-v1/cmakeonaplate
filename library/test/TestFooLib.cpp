#include "TestFooLib.h"
#include "FooLib\foolib.h"

namespace test
{
  //--------------------------------------------------------------------------------------------------
  void TestFoo::SetUp()
  {
  }
  //--------------------------------------------------------------------------------------------------
  void TestFoo::TearDown()
  {
  }
  //--------------------------------------------------------------------------------------------------
  TEST(TestFoo, TestSayHello)
  {
    sayHello();
  }
  //--------------------------------------------------------------------------------------------------
} // End namespace test