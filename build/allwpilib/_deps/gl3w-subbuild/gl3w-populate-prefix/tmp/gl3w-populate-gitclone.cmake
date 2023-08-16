
if(NOT "/home/moenet/moenet2023-Anand/build/allwpilib/_deps/gl3w-subbuild/gl3w-populate-prefix/src/gl3w-populate-stamp/gl3w-populate-gitinfo.txt" IS_NEWER_THAN "/home/moenet/moenet2023-Anand/build/allwpilib/_deps/gl3w-subbuild/gl3w-populate-prefix/src/gl3w-populate-stamp/gl3w-populate-gitclone-lastrun.txt")
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: '/home/moenet/moenet2023-Anand/build/allwpilib/_deps/gl3w-subbuild/gl3w-populate-prefix/src/gl3w-populate-stamp/gl3w-populate-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E rm -rf "/home/moenet/moenet2023-Anand/build/allwpilib/_deps/gl3w-src"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/home/moenet/moenet2023-Anand/build/allwpilib/_deps/gl3w-src'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git"  clone --no-checkout --config "advice.detachedHead=false" "https://github.com/skaslev/gl3w" "gl3w-src"
    WORKING_DIRECTORY "/home/moenet/moenet2023-Anand/build/allwpilib/_deps"
    RESULT_VARIABLE error_code
    )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once:
          ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/skaslev/gl3w'")
endif()

execute_process(
  COMMAND "/usr/bin/git"  checkout 5f8d7fd191ba22ff2b60c1106d7135bb9a335533 --
  WORKING_DIRECTORY "/home/moenet/moenet2023-Anand/build/allwpilib/_deps/gl3w-src"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: '5f8d7fd191ba22ff2b60c1106d7135bb9a335533'")
endif()

set(init_submodules TRUE)
if(init_submodules)
  execute_process(
    COMMAND "/usr/bin/git"  submodule update --recursive --init 
    WORKING_DIRECTORY "/home/moenet/moenet2023-Anand/build/allwpilib/_deps/gl3w-src"
    RESULT_VARIABLE error_code
    )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/home/moenet/moenet2023-Anand/build/allwpilib/_deps/gl3w-src'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "/home/moenet/moenet2023-Anand/build/allwpilib/_deps/gl3w-subbuild/gl3w-populate-prefix/src/gl3w-populate-stamp/gl3w-populate-gitinfo.txt"
    "/home/moenet/moenet2023-Anand/build/allwpilib/_deps/gl3w-subbuild/gl3w-populate-prefix/src/gl3w-populate-stamp/gl3w-populate-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/home/moenet/moenet2023-Anand/build/allwpilib/_deps/gl3w-subbuild/gl3w-populate-prefix/src/gl3w-populate-stamp/gl3w-populate-gitclone-lastrun.txt'")
endif()

