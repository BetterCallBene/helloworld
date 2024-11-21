add_executable(tests tests.cpp helloworld_t.cpp)
target_link_libraries(tests PRIVATE helloworld Catch2::Catch2WithMain)

# allow user to run tests with `make test` or `ctest`
catch_discover_tests(tests)
