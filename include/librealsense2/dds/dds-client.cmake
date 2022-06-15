# License: Apache 2.0. See LICENSE file in root directory.
# Copyright(c) 2022 Intel Corporation. All Rights Reserved.

set(DDS_CLIENT_FILES 
    "${CMAKE_CURRENT_LIST_DIR}/dds-participant.h"
    "${CMAKE_CURRENT_LIST_DIR}/dds-participant.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/dds-utilities.h"
)

source_group( "DDS" FILES ${DDS_CLIENT_FILES} )

# NOTE: this requires that your "project(...)" statement match the executable
target_link_libraries( ${PROJECT_NAME} PRIVATE dds )
target_sources( ${PROJECT_NAME} PRIVATE ${DDS_CLIENT_FILES} )
