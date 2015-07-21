add_library(http HTTP.cc)
add_library(gen Gen.cc)

add_executable(yahttp-gen main.cc)

target_link_libraries(yahttp-gen
  http
  gen
)

