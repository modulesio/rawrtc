#pragma once
#include <rawrtc.h>

enum rawrtc_code rawrtc_peer_connection_configuration_add_ice_server_internal(
    struct rawrtc_peer_connection_configuration* const configuration,
    struct rawrtc_ice_server* const server
);
