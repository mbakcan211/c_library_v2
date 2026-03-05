/** @file
 *    @brief MAVLink comm protocol testsuite generated from algan_uav.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef ALGAN_UAV_TESTSUITE_H
#define ALGAN_UAV_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_algan_uav(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_common(system_id, component_id, last_msg);
    mavlink_test_algan_uav(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"


static void mavlink_test_rfd_test(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RFD_TEST >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_rfd_test_t packet_in = {
        5
    };
    mavlink_rfd_test_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.RANDOM_DEGER = packet_in.RANDOM_DEGER;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RFD_TEST_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RFD_TEST_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rfd_test_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_rfd_test_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rfd_test_pack(system_id, component_id, &msg , packet1.RANDOM_DEGER );
    mavlink_msg_rfd_test_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rfd_test_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.RANDOM_DEGER );
    mavlink_msg_rfd_test_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_rfd_test_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rfd_test_send(MAVLINK_COMM_1 , packet1.RANDOM_DEGER );
    mavlink_msg_rfd_test_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RFD_TEST") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RFD_TEST) != NULL);
#endif
}

static void mavlink_test_last_enemy_position(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LAST_ENEMY_POSITION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_last_enemy_position_t packet_in = {
        963497464,963497672,29,96
    };
    mavlink_last_enemy_position_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.lat = packet_in.lat;
        packet1.lon = packet_in.lon;
        packet1.target_system = packet_in.target_system;
        packet1.target_component = packet_in.target_component;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LAST_ENEMY_POSITION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LAST_ENEMY_POSITION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_last_enemy_position_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_last_enemy_position_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_last_enemy_position_pack(system_id, component_id, &msg , packet1.target_system , packet1.target_component , packet1.lat , packet1.lon );
    mavlink_msg_last_enemy_position_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_last_enemy_position_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.target_component , packet1.lat , packet1.lon );
    mavlink_msg_last_enemy_position_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_last_enemy_position_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_last_enemy_position_send(MAVLINK_COMM_1 , packet1.target_system , packet1.target_component , packet1.lat , packet1.lon );
    mavlink_msg_last_enemy_position_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LAST_ENEMY_POSITION") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LAST_ENEMY_POSITION) != NULL);
#endif
}

static void mavlink_test_detected_enemy(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_DETECTED_ENEMY >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_detected_enemy_t packet_in = {
        17.0,17443,17547
    };
    mavlink_detected_enemy_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.confidence = packet_in.confidence;
        packet1.pixel_x = packet_in.pixel_x;
        packet1.pixel_y = packet_in.pixel_y;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_DETECTED_ENEMY_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_DETECTED_ENEMY_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_detected_enemy_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_detected_enemy_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_detected_enemy_pack(system_id, component_id, &msg , packet1.pixel_x , packet1.pixel_y , packet1.confidence );
    mavlink_msg_detected_enemy_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_detected_enemy_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.pixel_x , packet1.pixel_y , packet1.confidence );
    mavlink_msg_detected_enemy_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_detected_enemy_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_detected_enemy_send(MAVLINK_COMM_1 , packet1.pixel_x , packet1.pixel_y , packet1.confidence );
    mavlink_msg_detected_enemy_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("DETECTED_ENEMY") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_DETECTED_ENEMY) != NULL);
#endif
}

static void mavlink_test_locking_done(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LOCKING_DONE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_locking_done_t packet_in = {
        5,72
    };
    mavlink_locking_done_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.status = packet_in.status;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LOCKING_DONE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LOCKING_DONE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_locking_done_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_locking_done_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_locking_done_pack(system_id, component_id, &msg , packet1.target_system , packet1.status );
    mavlink_msg_locking_done_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_locking_done_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.status );
    mavlink_msg_locking_done_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_locking_done_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_locking_done_send(MAVLINK_COMM_1 , packet1.target_system , packet1.status );
    mavlink_msg_locking_done_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LOCKING_DONE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LOCKING_DONE) != NULL);
#endif
}

static void mavlink_test_enemy_gps_packet(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ENEMY_GPS_PACKET >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_enemy_gps_packet_t packet_in = {
        17.0,45.0,73.0
    };
    mavlink_enemy_gps_packet_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.enemy_latitude = packet_in.enemy_latitude;
        packet1.enemy_longitude = packet_in.enemy_longitude;
        packet1.enemy_altitude = packet_in.enemy_altitude;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ENEMY_GPS_PACKET_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ENEMY_GPS_PACKET_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_enemy_gps_packet_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_enemy_gps_packet_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_enemy_gps_packet_pack(system_id, component_id, &msg , packet1.enemy_latitude , packet1.enemy_longitude , packet1.enemy_altitude );
    mavlink_msg_enemy_gps_packet_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_enemy_gps_packet_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.enemy_latitude , packet1.enemy_longitude , packet1.enemy_altitude );
    mavlink_msg_enemy_gps_packet_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_enemy_gps_packet_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_enemy_gps_packet_send(MAVLINK_COMM_1 , packet1.enemy_latitude , packet1.enemy_longitude , packet1.enemy_altitude );
    mavlink_msg_enemy_gps_packet_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ENEMY_GPS_PACKET") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ENEMY_GPS_PACKET) != NULL);
#endif
}

static void mavlink_test_enemy_pixel_packet(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_enemy_pixel_packet_t packet_in = {
        17235,17339
    };
    mavlink_enemy_pixel_packet_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.kamera_pixel_x = packet_in.kamera_pixel_x;
        packet1.kamera_pixel_y = packet_in.kamera_pixel_y;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_enemy_pixel_packet_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_enemy_pixel_packet_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_enemy_pixel_packet_pack(system_id, component_id, &msg , packet1.kamera_pixel_x , packet1.kamera_pixel_y );
    mavlink_msg_enemy_pixel_packet_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_enemy_pixel_packet_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.kamera_pixel_x , packet1.kamera_pixel_y );
    mavlink_msg_enemy_pixel_packet_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_enemy_pixel_packet_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_enemy_pixel_packet_send(MAVLINK_COMM_1 , packet1.kamera_pixel_x , packet1.kamera_pixel_y );
    mavlink_msg_enemy_pixel_packet_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ENEMY_PIXEL_PACKET") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET) != NULL);
#endif
}

static void mavlink_test_enemy_detection_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_enemy_detection_status_t packet_in = {
        17235,17339,17443,151,218
    };
    mavlink_enemy_detection_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.gecen_takip_süresi_milisaniye = packet_in.gecen_takip_süresi_milisaniye;
        packet1.rakip_pixel_x = packet_in.rakip_pixel_x;
        packet1.rakip_pixel_y = packet_in.rakip_pixel_y;
        packet1.otonom_bool = packet_in.otonom_bool;
        packet1.model_confidence = packet_in.model_confidence;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_enemy_detection_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_enemy_detection_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_enemy_detection_status_pack(system_id, component_id, &msg , packet1.gecen_takip_süresi_milisaniye , packet1.otonom_bool , packet1.rakip_pixel_x , packet1.rakip_pixel_y , packet1.model_confidence );
    mavlink_msg_enemy_detection_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_enemy_detection_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.gecen_takip_süresi_milisaniye , packet1.otonom_bool , packet1.rakip_pixel_x , packet1.rakip_pixel_y , packet1.model_confidence );
    mavlink_msg_enemy_detection_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_enemy_detection_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_enemy_detection_status_send(MAVLINK_COMM_1 , packet1.gecen_takip_süresi_milisaniye , packet1.otonom_bool , packet1.rakip_pixel_x , packet1.rakip_pixel_y , packet1.model_confidence );
    mavlink_msg_enemy_detection_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ENEMY_DETECTION_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS) != NULL);
#endif
}

static void mavlink_test_enemy_detected_clock(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_enemy_detected_clock_t packet_in = {
        17235,139,206,17,84
    };
    mavlink_enemy_detected_clock_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.kilitlenme_milisaniye = packet_in.kilitlenme_milisaniye;
        packet1.kilitlenme_saat = packet_in.kilitlenme_saat;
        packet1.kilitlenme_dakika = packet_in.kilitlenme_dakika;
        packet1.kilitlenme_saniye = packet_in.kilitlenme_saniye;
        packet1.otonom_kilitlenme = packet_in.otonom_kilitlenme;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_enemy_detected_clock_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_enemy_detected_clock_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_enemy_detected_clock_pack(system_id, component_id, &msg , packet1.kilitlenme_saat , packet1.kilitlenme_dakika , packet1.kilitlenme_saniye , packet1.kilitlenme_milisaniye , packet1.otonom_kilitlenme );
    mavlink_msg_enemy_detected_clock_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_enemy_detected_clock_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.kilitlenme_saat , packet1.kilitlenme_dakika , packet1.kilitlenme_saniye , packet1.kilitlenme_milisaniye , packet1.otonom_kilitlenme );
    mavlink_msg_enemy_detected_clock_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_enemy_detected_clock_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_enemy_detected_clock_send(MAVLINK_COMM_1 , packet1.kilitlenme_saat , packet1.kilitlenme_dakika , packet1.kilitlenme_saniye , packet1.kilitlenme_milisaniye , packet1.otonom_kilitlenme );
    mavlink_msg_enemy_detected_clock_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("ENEMY_DETECTED_CLOCK") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK) != NULL);
#endif
}

static void mavlink_test_qr_location_packet(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_QR_LOCATION_PACKET >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_qr_location_packet_t packet_in = {
        17.0,45.0
    };
    mavlink_qr_location_packet_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.qr_latitude = packet_in.qr_latitude;
        packet1.qr_longitude = packet_in.qr_longitude;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_QR_LOCATION_PACKET_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_QR_LOCATION_PACKET_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_qr_location_packet_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_qr_location_packet_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_qr_location_packet_pack(system_id, component_id, &msg , packet1.qr_latitude , packet1.qr_longitude );
    mavlink_msg_qr_location_packet_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_qr_location_packet_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.qr_latitude , packet1.qr_longitude );
    mavlink_msg_qr_location_packet_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_qr_location_packet_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_qr_location_packet_send(MAVLINK_COMM_1 , packet1.qr_latitude , packet1.qr_longitude );
    mavlink_msg_qr_location_packet_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("QR_LOCATION_PACKET") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_QR_LOCATION_PACKET) != NULL);
#endif
}

static void mavlink_test_rpi_control_packet(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RPI_CONTROL_PACKET >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_rpi_control_packet_t packet_in = {
        5,72,139,206
    };
    mavlink_rpi_control_packet_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.command_code = packet_in.command_code;
        packet1.parametre_1 = packet_in.parametre_1;
        packet1.parametre_2 = packet_in.parametre_2;
        packet1.parametre_3 = packet_in.parametre_3;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RPI_CONTROL_PACKET_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RPI_CONTROL_PACKET_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rpi_control_packet_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_rpi_control_packet_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rpi_control_packet_pack(system_id, component_id, &msg , packet1.command_code , packet1.parametre_1 , packet1.parametre_2 , packet1.parametre_3 );
    mavlink_msg_rpi_control_packet_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rpi_control_packet_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.command_code , packet1.parametre_1 , packet1.parametre_2 , packet1.parametre_3 );
    mavlink_msg_rpi_control_packet_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_rpi_control_packet_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rpi_control_packet_send(MAVLINK_COMM_1 , packet1.command_code , packet1.parametre_1 , packet1.parametre_2 , packet1.parametre_3 );
    mavlink_msg_rpi_control_packet_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RPI_CONTROL_PACKET") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RPI_CONTROL_PACKET) != NULL);
#endif
}

static void mavlink_test_kamikaze_status_packet(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_kamikaze_status_packet_t packet_in = {
        17235,17339,17,84,151,218,29,96,"KLMNOPQRSTUVWXYZABC"
    };
    mavlink_kamikaze_status_packet_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.kamikaze_baslangic_milisaniye = packet_in.kamikaze_baslangic_milisaniye;
        packet1.kamikaze_bitis_milisaniye = packet_in.kamikaze_bitis_milisaniye;
        packet1.kamikaze_baslangic_saat = packet_in.kamikaze_baslangic_saat;
        packet1.kamikaze_baslangic_dakika = packet_in.kamikaze_baslangic_dakika;
        packet1.kamikaze_baslangic_saniye = packet_in.kamikaze_baslangic_saniye;
        packet1.kamikaze_bitis_saat = packet_in.kamikaze_bitis_saat;
        packet1.kamikaze_bitis_dakika = packet_in.kamikaze_bitis_dakika;
        packet1.kamikaze_bitis_saniye = packet_in.kamikaze_bitis_saniye;
        
        mav_array_memcpy(packet1.qr_metni, packet_in.qr_metni, sizeof(char)*20);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_kamikaze_status_packet_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_kamikaze_status_packet_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_kamikaze_status_packet_pack(system_id, component_id, &msg , packet1.kamikaze_baslangic_saat , packet1.kamikaze_baslangic_dakika , packet1.kamikaze_baslangic_saniye , packet1.kamikaze_baslangic_milisaniye , packet1.kamikaze_bitis_saat , packet1.kamikaze_bitis_dakika , packet1.kamikaze_bitis_saniye , packet1.kamikaze_bitis_milisaniye , packet1.qr_metni );
    mavlink_msg_kamikaze_status_packet_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_kamikaze_status_packet_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.kamikaze_baslangic_saat , packet1.kamikaze_baslangic_dakika , packet1.kamikaze_baslangic_saniye , packet1.kamikaze_baslangic_milisaniye , packet1.kamikaze_bitis_saat , packet1.kamikaze_bitis_dakika , packet1.kamikaze_bitis_saniye , packet1.kamikaze_bitis_milisaniye , packet1.qr_metni );
    mavlink_msg_kamikaze_status_packet_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_kamikaze_status_packet_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_kamikaze_status_packet_send(MAVLINK_COMM_1 , packet1.kamikaze_baslangic_saat , packet1.kamikaze_baslangic_dakika , packet1.kamikaze_baslangic_saniye , packet1.kamikaze_baslangic_milisaniye , packet1.kamikaze_bitis_saat , packet1.kamikaze_bitis_dakika , packet1.kamikaze_bitis_saniye , packet1.kamikaze_bitis_milisaniye , packet1.qr_metni );
    mavlink_msg_kamikaze_status_packet_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("KAMIKAZE_STATUS_PACKET") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET) != NULL);
#endif
}

static void mavlink_test_algan_uav(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_rfd_test(system_id, component_id, last_msg);
    mavlink_test_last_enemy_position(system_id, component_id, last_msg);
    mavlink_test_detected_enemy(system_id, component_id, last_msg);
    mavlink_test_locking_done(system_id, component_id, last_msg);
    mavlink_test_enemy_gps_packet(system_id, component_id, last_msg);
    mavlink_test_enemy_pixel_packet(system_id, component_id, last_msg);
    mavlink_test_enemy_detection_status(system_id, component_id, last_msg);
    mavlink_test_enemy_detected_clock(system_id, component_id, last_msg);
    mavlink_test_qr_location_packet(system_id, component_id, last_msg);
    mavlink_test_rpi_control_packet(system_id, component_id, last_msg);
    mavlink_test_kamikaze_status_packet(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // ALGAN_UAV_TESTSUITE_H
