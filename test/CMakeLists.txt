add_executable(test_g_x test_g_x.c)       #add test file to be able to run
target_link_libraries(test_g_x functions) #link to the libary "functions" to access functions to test
add_test(NAME test_g_x                    #add test and give it a name
        COMMAND test_g_x)

add_executable(test_h_x test_h_x.c)       #add test file to be able to run
target_link_libraries(test_h_x functions) #link to the libary "functions" to access functions to test
add_test(NAME test_h_x                    #add test and give it a name
        COMMAND test_h_x)