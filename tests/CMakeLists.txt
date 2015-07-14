add_executable(dummy_test dummy_test.cc)

target_link_libraries(dummy_test gtest gtest_main)

add_test(NAME dummy COMMAND dummy_test)

