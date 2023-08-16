include(CMakeFindDependencyMacro)
get_filename_component(SELF_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_dependency(Threads)


get_filename_component(SELF_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
include(${SELF_DIR}/wpiutil.cmake)
