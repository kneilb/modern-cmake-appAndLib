project(modern-cmake-lib2)

set(lib2_SOURCES
	src/lib2-priv-impl.cpp
)

add_library(lib2 STATIC ${lib2_SOURCES})

target_include_directories(lib2
	PUBLIC include
	PRIVATE src
)
