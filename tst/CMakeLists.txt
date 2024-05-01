set(TST_BINARY ${CMAKE_PROJECT_NAME}_tst)

file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp)

add_executable(${TST_BINARY} ${TEST_SOURCES})

add_test(NAME ${TST_BINARY} COMMAND ${TST_BINARY})

target_link_libraries(${TST_BINARY} PUBLIC ${CMAKE_PROJECT_NAME}_lib gtest gtest_main)
