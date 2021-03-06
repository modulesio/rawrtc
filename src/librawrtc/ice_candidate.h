#pragma once

// Note: Cannot be public until it uses fixed size types in signature (stdint)
uint32_t rawrtc_ice_candidate_calculate_priority(
    enum ice_cand_type const candidate_type,
    int const protocol,
    int const address_family,
    enum ice_tcptype const tcp_type
);

enum rawrtc_code rawrtc_ice_candidate_create_internal(
    struct rawrtc_ice_candidate** const candidatep, // de-referenced
    struct pl* const foundation, // copied
    uint32_t const priority,
    struct pl* const ip, // copied
    enum rawrtc_ice_protocol const protocol,
    uint16_t const port,
    enum rawrtc_ice_candidate_type const type,
    enum rawrtc_ice_tcp_candidate_type const tcp_type,
    struct pl* const related_address, // copied, nullable
    uint16_t const related_port
);

enum rawrtc_code rawrtc_ice_candidate_create_from_local_candidate(
    struct rawrtc_ice_candidate** const candidatep, // de-referenced
    struct ice_lcand* const local_candidate // referenced
);

enum rawrtc_code rawrtc_ice_candidate_create_from_remote_candidate(
    struct rawrtc_ice_candidate** const candidatep, // de-referenced
    struct ice_rcand* const remote_candidate // referenced
);

int rawrtc_ice_candidate_debug(
    struct re_printf* const pf,
    struct rawrtc_ice_candidate* const candidate
);
