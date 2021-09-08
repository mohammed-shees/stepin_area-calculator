#include "unity.h"
#include "unity_internals.h"
#include "areacalculator.h"


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}
/**
 * @brief testcase for Factorial of numbers
 * 
 */
void test_areaofrectangle(void)
{
  TEST_ASSERT_EQUAL(120, Areaofrectangle(60, 2));
  TEST_ASSERT_EQUAL(50, Areaofrectangle(25, 2));
}

/**
 * @brief testcase for testing Addition function
 * 
 */
void test_AreaofParalleogram(void)
{
  TEST_ASSERT_EQUAL(10, AreaofParalleogram(5,2));
  TEST_ASSERT_EQUAL(300, AreaofParalleogram(10,30));
}
/**
 * @brief testcase for testing Subtraction function
 * 
 */
void test_Areaoftriangle(void)
{
  TEST_ASSERT_EQUAL(10, Areaoftriangle(5,4));
  TEST_ASSERT_EQUAL(1000, Areaoftriangle(50,40));
}
/**
 * @brief testcase for testing Multiplication function
 * 
 */
void test_circle(void)
{
	TEST_ASSERT_EQUAL(12, Areaofcircle(2));
	TEST_ASSERT_EQUAL(50, Areaofcircle(4));
}

void test_areaofsquare(void)
{
  TEST_ASSERT_EQUAL(25, Areaofsquare(5));
  TEST_ASSERT_EQUAL(100, Areaofsquare(10));

  void test_areaoftrapezium(void)
  {
	  TEST_ASSERT_EQUAL(9, Areaofsquare(3,3,3));
	  TEST_ASSERT_EQUAL(100, Areaofsquare(10,10,10));
  }
/**
 * @brief testcase for testing Multiplication function with 0
 * 
 */

int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_areaofrectangle);
  RUN_TEST(test_AreaofParalleogram);
  RUN_TEST(test_Areaoftriangle);
  RUN_TEST(test_circle);
  RUN_TEST(test_areaofsquare);
  RUN_TEST(test_areaoftrapezium);
 
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}
