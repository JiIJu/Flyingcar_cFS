project(CFS_CF C)

include_directories(${CFS_IO_LIB_MISSION_DIR}/fsw/public_inc)

set(APP_SRC_FILES
  fsw/src/cf_app.c
  fsw/src/cf_cfdp.c
  fsw/src/cf_cfdp_r.c
  fsw/src/cf_cfdp_s.c
  fsw/src/cf_cfdp_sbintf.c
  fsw/src/cf_cfdp_dispatch.c
  fsw/src/cf_chunk.c
  fsw/src/cf_clist.c
  fsw/src/cf_codec.c
  fsw/src/cf_cmd.c
  fsw/src/cf_crc.c
  fsw/src/cf_timer.c
  fsw/src/cf_utils.c
)

if (CFE_EDS_ENABLED_BUILD)
  list(APPEND APP_SRC_FILES fsw/src/cf_eds_dispatch.c)
else()
  list(APPEND APP_SRC_FILES fsw/src/cf_dispatch.c)
endif()

# Create the app module
add_cfe_app(cf ${APP_SRC_FILES})

# This permits direct access to public headers in the fsw/inc directory
target_include_directories(cf PUBLIC fsw/inc)

# configuration table
add_cfe_tables(cf fsw/tables/cf_def_config.c)

if (ENABLE_UNIT_TESTS)
  add_subdirectory(unit-test)
endif (ENABLE_UNIT_TESTS)
