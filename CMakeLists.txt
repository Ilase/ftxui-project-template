cmake_minimum_required(VERSION 3.11)
project(
    ftxui-project-template 
    LANGUAGES CXX 
    VERSION 1.0.0
)

set(
    SOURCE 
    src/main.cpp
)


include_directories(include)
add_subdirectory(include/foo)


add_executable(
    main
    ${SOURCE}
)

target_link_libraries(
    main foo
)


