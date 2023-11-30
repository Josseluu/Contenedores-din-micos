find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})

target_link_libraries(TU_PROYECTO ${Boost_LIBRARIES})
