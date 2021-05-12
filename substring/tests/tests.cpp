#include <gtest/gtest.h>
#include "substring_library.hpp"


TEST(test_substring, for_empty_entrance)
{
    std::string str;

    try
    {
        my_sub::substring(str);
    }
    catch(const std::exception& ex)
    {
        ASSERT_EQ(std::string(ex.what()), "Empty entrance");
    }
}

TEST(test_substring, example_from_task)
{
    std::string str = "ababcbacadefegdehijhklij";

    std::vector<size_t> obv_correct = {9, 7, 8};

    auto result_sub = my_sub::substring(str);
    size_t size = result_sub.size();

    for(size_t i = 0; i != size; ++i)
    {
        ASSERT_EQ(obv_correct[i], result_sub[i]);
    }
}

TEST(test_substring, for_one_sub)
{
    std::string str = "atsghkaopmvjdbfdodadskamd";;

    auto result_sub = my_sub::substring(str);
    
    ASSERT_EQ(25, result_sub[0]);
    
}

TEST(test_substring, test_for_one_element_in)
{
    std::string str = "a";

    auto result_sub = my_sub::substring(str);

    ASSERT_EQ(1, result_sub[0]);
}

TEST(test_substring, test_single_letters)
{
    std::string str = "qwertyuiopasdfghjklzxcvbnm";

    std::vector<size_t> obv_correct(26,1);

    auto result_sub = my_sub::substring(str);
    size_t size = result_sub.size();

    for(size_t i = 0; i != size; ++i)
    {
        ASSERT_EQ(obv_correct[i], result_sub[i]);
    }
}

TEST(test_substring, some_test)
{
    std::string str = "adfghjklaiuytrewqyizxzcvvvcbnn";

    std::vector<size_t> obv_correct = {9, 10, 3, 5, 1, 2};

    auto result_sub = my_sub::substring(str);
    size_t size = result_sub.size();

    for(size_t i = 0; i != size; ++i)
    {
        ASSERT_EQ(obv_correct[i], result_sub[i]);
    }
}

TEST(test_substring, some_other_test)
{
    std::string str = "posaueypmnchxblalaljd";

    std::vector<size_t> obv_correct = {19, 1, 1};

    auto result_sub = my_sub::substring(str);
    size_t size = result_sub.size();

    for(size_t i = 0; i != size; ++i)
    {
        ASSERT_EQ(obv_correct[i], result_sub[i]);
    }
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}