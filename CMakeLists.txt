cmake_minimum_required(VERSION 3.11)
project(
    ftxui-project-template 
    LANGUAGES CXX 
    VERSION 1.0.0
)

# include(FetchContent)

# set(FETCHCONTENT_UPDATES_DISCONNECTED TRUE)

# FetchContent_Declare(
#     ftxui
#     GIT_REPOSITORY https://github.com/ArthurSonzogni/ftxui.git
#     GIT_TAG        v4.0.0  # specify the desired version of ftxui
# )

# FetchContent_GetProperties(ftxui)


# if(NOT ftxui_POPULATED)
#     FetchContent_Populate(ftxui)
#     add_subdirectory(${ftxui_SOURCE_DIR} ${ftxui_BINARY_DIR} EXCLUDE_FROM_ALL)
# endif()


set(
    SOURCE 
    main.cpp
)

include_directories(include)
add_subdirectory(include)


add_executable(
    main
    ${SOURCE}
)

target_link_libraries(
    main foo
)

# target_include_directories(${PROJECT_NAME} 
#     PRIVATE src
#     PRIVATE include
# )


