add_executable(http_test http_test.cc)

target_link_libraries(http_test http gtest gtest_main)

add_test(NAME http_test COMMAND http_test)

