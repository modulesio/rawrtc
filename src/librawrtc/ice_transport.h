#pragma once
#include <rawrtc.h>

enum ice_role rawrtc_ice_role_to_re_ice_role(
    enum rawrtc_ice_role const role
);

enum rawrtc_code rawrtc_re_ice_role_to_ice_role(
    enum rawrtc_ice_role* const rolep, // de-referenced
    enum ice_role const re_role
);
