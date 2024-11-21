cmake_minimum_required(VERSION 3.11)

# Set a name and a version number for your project:
project(helloworld VERSION 0.0.1 LANGUAGES CXX)

# Initialize some default paths
include(GNUInstallDirs)

# Define the minimum C++ standard that is required
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)





# Compilation options

# compile the library
add_subdirectory(src)


# compile the application
add_subdirectory(app)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.4.0 # or a later release
)

FetchContent_MakeAvailable(Catch2)

# compile the tests
include(CTest)
if(BUILD_TESTING)
  include(Catch)
  add_subdirectory(tests)
endif()



# Add an alias target for use if this project is included as a subproject in another project
add_library(helloworld::helloworld ALIAS helloworld)

# Install targets and configuration
install(
  TARGETS helloworld
  EXPORT helloworld-config
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

install(
  EXPORT helloworld-config
  NAMESPACE helloworld::
  DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/helloworld
)

install(
  DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/include/
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

# This prints a summary of found dependencies
include(FeatureSummary)
feature_summary(WHAT ALL)
