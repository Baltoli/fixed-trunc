add_executable(ftrunc
  src/main.cpp)

install(
  TARGETS ftrunc
  DESTINATION ${CMAKE_INSTALL_BINDIR})
