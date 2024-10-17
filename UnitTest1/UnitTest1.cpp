#include "pch.h"
#include "CppUnitTest.h"

extern "C" 
{
#include "../BCSRec/main.h"
}
extern "C"
{
    void setLength(int input, int* length);
    void setWidth(int input, int* width);
    int getPerimeter(int* length, int* width);
    int getArea(int* length, int* width);
    void printWelcomeMenu();
    void printOptions();
    int getIntInput(char message[]);
}



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitBCSRecTests

{
    TEST_CLASS(RectangleTests) // Defines a test class for rectangle-related tests 
    {
    public:
        // Test method to verify the perimeter calculation
        TEST_METHOD(TestGetPerimeter)
        {
            // Arrange: Set up the test inputs 
            int length = 10;
            int width = 5;

            // Act: Call the method under test 
            int perimeter = getPerimeter(&length, &width);

            // Assert: Verify the expected outcome 
            Assert::AreEqual(30, perimeter);  // 10 + 10 + 5 + 5 = 30
        }

        TEST_METHOD(TestGetArea)
        {
            // Arrange
            int length = 10;
            int width = 5;

            // Act
            int area = getArea(&length, &width);

            // Assert
            Assert::AreEqual(50, area);  // 10 * 5 = 50
        }
TEST_METHOD(TestSetLength_Normal)
                {
                    // Arrange
                    int length = 0;
                    int input = 50;

                    // Act
                    setLength(input, &length);

                    // Assert
                    Assert::AreEqual(50, length);
                }

                TEST_METHOD(TestSetLength_UpperEdge)
                {
                    // Arrange
                    int length = 0;
                    int input = 99;

                    // Act
                    setLength(input, &length);

                    // Assert
                    Assert::AreEqual(99, length);
                }

                TEST_METHOD(TestSetLength_InvalidLow)
                {
                    // Arrange
                    int length = 10;  // Initial value should remain unchanged
                    int input = 0;

                    // Act
                    setLength(input, &length);

                    // Assert
                    Assert::AreEqual(10, length);  // Length should remain unchanged because input is invalid
                }

                // Tests for setWidth()
                        // Tests for setWidth()
                TEST_METHOD(TestSetWidth_Normal)
                {
                    // Arrange
                    int width = 0;
                    int input = 20;

                    // Act
                    setWidth(input, &width);

                    // Assert
                    Assert::AreEqual(20, width);
                }

                TEST_METHOD(TestSetWidth_LowerEdge)
                {
                    // Arrange  ``
                    int width = 0;
                    int input = 1;

                    // Act
                    setWidth(input, &width);

                    // Assert
                    Assert::AreEqual(1, width);
                }

                TEST_METHOD(TestSetWidth_InvalidHigh)
                {
                    // Arrange
                    int width = 50;  // Initial value should remain unchanged
                    int input = 101;

                    // Act
                    setWidth(input, &width);

                    // Assert
                    Assert::AreEqual(50, width);  // Width should remain unchanged because input is invalid
        }
    };
}

   






