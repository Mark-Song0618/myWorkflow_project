add_executable(workflow app.cpp)

add_subdirectory(core)

add_subdirectory(gui)

target_link_libraries(
	workflow
    PUBLIC
    Message
    appGui
)

target_include_directories(
    workflow
    PUBLIC
    ./core/
    ./gui/
)
