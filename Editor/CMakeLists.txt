cmake_minimum_required(VERSION 3.10)

include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_definitions(-DAGADOENGINE_EXPORTS=0)

add_executable(agadoEditor-${CMAKE_BUILD_TYPE} agadoEditor.cpp )

# Application require agadoEngien library
target_link_libraries(agadoEditor-${CMAKE_BUILD_TYPE}
    agadoEngine-${CMAKE_BUILD_TYPE}
)
target_precompile_headers(agadoEditor-${CMAKE_BUILD_TYPE} PRIVATE ../Engine/Common/EnginePCH.h)

#set_target_properties(agadoEditor-${CMAKE_BUILD_TYPE} PROPERTIES PRECOMPILE_HEADERS_REUSE_FROM agadoEngine-${CMAKE_BUILD_TYPE})


install(TARGETS agadoEditor-${CMAKE_BUILD_TYPE} DESTINATION Binaries)
