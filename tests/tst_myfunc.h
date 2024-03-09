#ifndef TST_MYFUNC_H
#define TST_MYFUNC_H
#include <gtest/gtest.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "myfunc.h"
}
double array [2];
TEST(myfunctest, 2roots) {
    myfunc(array,1,-3,2);
    ASSERT_EQ(array[0],2);
    ASSERT_EQ(array[1],1);

}
TEST(myfunctest, floatroots) {
    myfunc(array,1,-4,3.75);
    ASSERT_EQ(array[0],2.5);
    ASSERT_EQ(array[1],1.5);

}
TEST(myfunctest, ADINROOT) {
    myfunc(array,16,-40,25);
    ASSERT_EQ(array[0],1.25);
    ASSERT_EQ(array[1],1.25);

}
TEST(myfunctest, MINUSDIST) {
    myfunc(array,1,-1,1000);
    ASSERT_EQ(array[0],00);
    ASSERT_EQ(array[1],00);

}
TEST(myfunctest, ZEROA) {
    myfunc(array,0,1,1);
    ASSERT_EQ(array[0],00);
    ASSERT_EQ(array[1],00);

}
#endif // TST_MYFUNC_H
