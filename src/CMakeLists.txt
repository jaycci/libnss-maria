cmake_minimum_required (VERSION 2.8)
#set (PROJECT_SOURCE_DIR src)
#set (PROJECT_BINARY_DIR src)

add_library(nss-maria SHARED
  "configuration/maria_config.c"
  "configuration/maria_config_helpers.c"
  "logger/maria_logger.c"
  "libnss-maria.c"
)

# The version number.
# soname (MAJOR) version must be 2
set (nss-maria_VERSION_MAJOR 2)
set (nss-maria_VERSION_MINOR 1)
set (nss-maria_VERSION_PATCH 0)

set(nss-maria_VERSION ${nss-maria_VERSION_MAJOR}.${nss-maria_VERSION_MINOR}.${nss-maria_VERSION_PATCH})

set_target_properties(nss-maria PROPERTIES
  VERSION ${nss-maria_VERSION}
  SOVERSION ${nss-maria_VERSION_MAJOR}
)
