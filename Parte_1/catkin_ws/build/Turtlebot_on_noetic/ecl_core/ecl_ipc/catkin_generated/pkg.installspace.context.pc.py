# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "ecl_config;ecl_errors;ecl_time_lite;ecl_exceptions;ecl_time".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lecl_ipc".split(';') if "-lecl_ipc" != "" else []
PROJECT_NAME = "ecl_ipc"
PROJECT_SPACE_DIR = "/workspace/catkin_ws/install"
PROJECT_VERSION = "0.62.3"
