# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.22.1)

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(fonts-populate NONE)



include(ExternalProject)
ExternalProject_Add(fonts-populate
                     "UPDATE_DISCONNECTED" "False" "URL" "https://github.com/wpilibsuite/thirdparty-fonts/releases/download/v0.2/fonts.zip" "URL_HASH" "SHA256=cedf365657fab0770e11f72d49e4f0f889f564d2e635a4d214029d0ab6bcd324"
                    SOURCE_DIR          "/home/moenet/moenet2023-Anand/build/allwpilib/_deps/fonts-src"
                    BINARY_DIR          "/home/moenet/moenet2023-Anand/build/allwpilib/_deps/fonts-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
)


