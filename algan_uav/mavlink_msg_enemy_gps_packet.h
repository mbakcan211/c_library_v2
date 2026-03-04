#pragma once
// MESSAGE ENEMY_GPS_PACKET PACKING

#define MAVLINK_MSG_ID_ENEMY_GPS_PACKET 13004


typedef struct __mavlink_enemy_gps_packet_t {
 int32_t enemy_latitude; /*< [degE7] rakip enlem koordinat verisi*/
 int32_t enemy_longitude; /*< [degE7] rakip boylam koordinat verisi*/
 uint8_t enemy_altitude; /*< [m] rakip irtifa verisi*/
} mavlink_enemy_gps_packet_t;

#define MAVLINK_MSG_ID_ENEMY_GPS_PACKET_LEN 9
#define MAVLINK_MSG_ID_ENEMY_GPS_PACKET_MIN_LEN 9
#define MAVLINK_MSG_ID_13004_LEN 9
#define MAVLINK_MSG_ID_13004_MIN_LEN 9

#define MAVLINK_MSG_ID_ENEMY_GPS_PACKET_CRC 204
#define MAVLINK_MSG_ID_13004_CRC 204



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ENEMY_GPS_PACKET { \
    13004, \
    "ENEMY_GPS_PACKET", \
    3, \
    {  { "enemy_latitude", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_enemy_gps_packet_t, enemy_latitude) }, \
         { "enemy_longitude", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_enemy_gps_packet_t, enemy_longitude) }, \
         { "enemy_altitude", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_enemy_gps_packet_t, enemy_altitude) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ENEMY_GPS_PACKET { \
    "ENEMY_GPS_PACKET", \
    3, \
    {  { "enemy_latitude", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_enemy_gps_packet_t, enemy_latitude) }, \
         { "enemy_longitude", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_enemy_gps_packet_t, enemy_longitude) }, \
         { "enemy_altitude", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_enemy_gps_packet_t, enemy_altitude) }, \
         } \
}
#endif

/**
 * @brief Pack a enemy_gps_packet message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param enemy_latitude [degE7] rakip enlem koordinat verisi
 * @param enemy_longitude [degE7] rakip boylam koordinat verisi
 * @param enemy_altitude [m] rakip irtifa verisi
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_enemy_gps_packet_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int32_t enemy_latitude, int32_t enemy_longitude, uint8_t enemy_altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ENEMY_GPS_PACKET_LEN];
    _mav_put_int32_t(buf, 0, enemy_latitude);
    _mav_put_int32_t(buf, 4, enemy_longitude);
    _mav_put_uint8_t(buf, 8, enemy_altitude);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_LEN);
#else
    mavlink_enemy_gps_packet_t packet;
    packet.enemy_latitude = enemy_latitude;
    packet.enemy_longitude = enemy_longitude;
    packet.enemy_altitude = enemy_altitude;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ENEMY_GPS_PACKET;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_MIN_LEN, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_LEN, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_CRC);
}

/**
 * @brief Pack a enemy_gps_packet message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param enemy_latitude [degE7] rakip enlem koordinat verisi
 * @param enemy_longitude [degE7] rakip boylam koordinat verisi
 * @param enemy_altitude [m] rakip irtifa verisi
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_enemy_gps_packet_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int32_t enemy_latitude, int32_t enemy_longitude, uint8_t enemy_altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ENEMY_GPS_PACKET_LEN];
    _mav_put_int32_t(buf, 0, enemy_latitude);
    _mav_put_int32_t(buf, 4, enemy_longitude);
    _mav_put_uint8_t(buf, 8, enemy_altitude);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_LEN);
#else
    mavlink_enemy_gps_packet_t packet;
    packet.enemy_latitude = enemy_latitude;
    packet.enemy_longitude = enemy_longitude;
    packet.enemy_altitude = enemy_altitude;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ENEMY_GPS_PACKET;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_MIN_LEN, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_LEN, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_MIN_LEN, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_LEN);
#endif
}

/**
 * @brief Pack a enemy_gps_packet message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param enemy_latitude [degE7] rakip enlem koordinat verisi
 * @param enemy_longitude [degE7] rakip boylam koordinat verisi
 * @param enemy_altitude [m] rakip irtifa verisi
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_enemy_gps_packet_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int32_t enemy_latitude,int32_t enemy_longitude,uint8_t enemy_altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ENEMY_GPS_PACKET_LEN];
    _mav_put_int32_t(buf, 0, enemy_latitude);
    _mav_put_int32_t(buf, 4, enemy_longitude);
    _mav_put_uint8_t(buf, 8, enemy_altitude);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_LEN);
#else
    mavlink_enemy_gps_packet_t packet;
    packet.enemy_latitude = enemy_latitude;
    packet.enemy_longitude = enemy_longitude;
    packet.enemy_altitude = enemy_altitude;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ENEMY_GPS_PACKET;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_MIN_LEN, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_LEN, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_CRC);
}

/**
 * @brief Encode a enemy_gps_packet struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param enemy_gps_packet C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_enemy_gps_packet_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_enemy_gps_packet_t* enemy_gps_packet)
{
    return mavlink_msg_enemy_gps_packet_pack(system_id, component_id, msg, enemy_gps_packet->enemy_latitude, enemy_gps_packet->enemy_longitude, enemy_gps_packet->enemy_altitude);
}

/**
 * @brief Encode a enemy_gps_packet struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param enemy_gps_packet C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_enemy_gps_packet_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_enemy_gps_packet_t* enemy_gps_packet)
{
    return mavlink_msg_enemy_gps_packet_pack_chan(system_id, component_id, chan, msg, enemy_gps_packet->enemy_latitude, enemy_gps_packet->enemy_longitude, enemy_gps_packet->enemy_altitude);
}

/**
 * @brief Encode a enemy_gps_packet struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param enemy_gps_packet C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_enemy_gps_packet_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_enemy_gps_packet_t* enemy_gps_packet)
{
    return mavlink_msg_enemy_gps_packet_pack_status(system_id, component_id, _status, msg,  enemy_gps_packet->enemy_latitude, enemy_gps_packet->enemy_longitude, enemy_gps_packet->enemy_altitude);
}

/**
 * @brief Send a enemy_gps_packet message
 * @param chan MAVLink channel to send the message
 *
 * @param enemy_latitude [degE7] rakip enlem koordinat verisi
 * @param enemy_longitude [degE7] rakip boylam koordinat verisi
 * @param enemy_altitude [m] rakip irtifa verisi
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_enemy_gps_packet_send(mavlink_channel_t chan, int32_t enemy_latitude, int32_t enemy_longitude, uint8_t enemy_altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ENEMY_GPS_PACKET_LEN];
    _mav_put_int32_t(buf, 0, enemy_latitude);
    _mav_put_int32_t(buf, 4, enemy_longitude);
    _mav_put_uint8_t(buf, 8, enemy_altitude);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ENEMY_GPS_PACKET, buf, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_MIN_LEN, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_LEN, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_CRC);
#else
    mavlink_enemy_gps_packet_t packet;
    packet.enemy_latitude = enemy_latitude;
    packet.enemy_longitude = enemy_longitude;
    packet.enemy_altitude = enemy_altitude;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ENEMY_GPS_PACKET, (const char *)&packet, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_MIN_LEN, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_LEN, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_CRC);
#endif
}

/**
 * @brief Send a enemy_gps_packet message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_enemy_gps_packet_send_struct(mavlink_channel_t chan, const mavlink_enemy_gps_packet_t* enemy_gps_packet)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_enemy_gps_packet_send(chan, enemy_gps_packet->enemy_latitude, enemy_gps_packet->enemy_longitude, enemy_gps_packet->enemy_altitude);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ENEMY_GPS_PACKET, (const char *)enemy_gps_packet, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_MIN_LEN, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_LEN, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_CRC);
#endif
}

#if MAVLINK_MSG_ID_ENEMY_GPS_PACKET_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_enemy_gps_packet_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int32_t enemy_latitude, int32_t enemy_longitude, uint8_t enemy_altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, enemy_latitude);
    _mav_put_int32_t(buf, 4, enemy_longitude);
    _mav_put_uint8_t(buf, 8, enemy_altitude);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ENEMY_GPS_PACKET, buf, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_MIN_LEN, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_LEN, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_CRC);
#else
    mavlink_enemy_gps_packet_t *packet = (mavlink_enemy_gps_packet_t *)msgbuf;
    packet->enemy_latitude = enemy_latitude;
    packet->enemy_longitude = enemy_longitude;
    packet->enemy_altitude = enemy_altitude;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ENEMY_GPS_PACKET, (const char *)packet, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_MIN_LEN, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_LEN, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_CRC);
#endif
}
#endif

#endif

// MESSAGE ENEMY_GPS_PACKET UNPACKING


/**
 * @brief Get field enemy_latitude from enemy_gps_packet message
 *
 * @return [degE7] rakip enlem koordinat verisi
 */
static inline int32_t mavlink_msg_enemy_gps_packet_get_enemy_latitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field enemy_longitude from enemy_gps_packet message
 *
 * @return [degE7] rakip boylam koordinat verisi
 */
static inline int32_t mavlink_msg_enemy_gps_packet_get_enemy_longitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field enemy_altitude from enemy_gps_packet message
 *
 * @return [m] rakip irtifa verisi
 */
static inline uint8_t mavlink_msg_enemy_gps_packet_get_enemy_altitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Decode a enemy_gps_packet message into a struct
 *
 * @param msg The message to decode
 * @param enemy_gps_packet C-struct to decode the message contents into
 */
static inline void mavlink_msg_enemy_gps_packet_decode(const mavlink_message_t* msg, mavlink_enemy_gps_packet_t* enemy_gps_packet)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    enemy_gps_packet->enemy_latitude = mavlink_msg_enemy_gps_packet_get_enemy_latitude(msg);
    enemy_gps_packet->enemy_longitude = mavlink_msg_enemy_gps_packet_get_enemy_longitude(msg);
    enemy_gps_packet->enemy_altitude = mavlink_msg_enemy_gps_packet_get_enemy_altitude(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ENEMY_GPS_PACKET_LEN? msg->len : MAVLINK_MSG_ID_ENEMY_GPS_PACKET_LEN;
        memset(enemy_gps_packet, 0, MAVLINK_MSG_ID_ENEMY_GPS_PACKET_LEN);
    memcpy(enemy_gps_packet, _MAV_PAYLOAD(msg), len);
#endif
}
