add_subdirectory(Utils)

add_subdirectory(SVS)

if (NOT BUILD_PLUGINS_ONLY)

    add_subdirectory(Framework)

    add_subdirectory(Media)

endif()
