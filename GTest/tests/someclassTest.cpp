#include "gtest/gtest.h"
#include "../header/someclass.h"

namespace {
	class SomeTest : public ::testing::Test {
	protected:
		some_class obj;
	};

	TEST_F(SomeTest, testReturnThreeExpectedTrue) {
		ASSERT_EQ(3, obj.return_three());
	}
}


