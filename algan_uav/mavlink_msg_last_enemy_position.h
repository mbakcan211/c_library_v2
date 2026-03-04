#pragma once
// MESSAGE LAST_ENEMY_POSITION PACKING

#define MAVLINK_MSG_ID_LAST_ENEMY_POSITION 13001


typedef struct __mavlink_last_enemy_position_t {
 int32_t lat; /*< [degE7] Latitude (WGS84)*/
 int32_t lon; /*< [degE7] Longitude (WGS84)*/
 uint8_t target_system; /*<  System ID of the vehicle.*/
 uint8_t target_component; /*<  Component ID of the vehicle.*/
} mavlink_last_enemy_position_t;

#define MAVLINK_MSG_ID_LAST_ENEMY_POSITION_LEN 10
#define MAVLINK_MSG_ID_LAST_ENEMY_POSITION_MIN_LEN 10
#define MAVLINK_MSG_ID_13001_LEN 10
#define MAVLINK_MSG_ID_13001_MIN_LEN 10

#define MAVLINK_MSG_ID_LAST_ENEMY_POSITION_CRC 226
#define MAVLINK_MSG_ID_13001_CRC 226



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LAST_ENEMY_POSITION { \
    13001, \
    "LAST_ENEMY_POSITION", \
    4, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_last_enemy_position_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_last_enemy_position_t, target_component) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_last_enemy_position_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_last_enemy_position_t, lon) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LAST_ENEMY_POSITION { \
    "LAST_ENEMY_POSITION", \
    4, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_last_enemy_position_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_last_enemy_position_t, target_component) }, \
         { "lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_last_enemy_position_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_last_enemy_position_t, lon) }, \
         } \
}
#endif

/**
 * @brief Pack a last_enemy_position message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System ID of the vehicle.
 * @param target_component  Component ID of the vehicle.
 * @param lat [degE7] Latitude (WGS84)
 * @param lon [degE7] Longitude (WGS84)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_last_enemy_position_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, int32_t lat, int32_t lon)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LAST_ENEMY_POSITION_LEN];
    _mav_put_int32_t(buf, 0, lat);
    _mav_put_int32_t(buf, 4, lon);
    _mav_put_uint8_t(buf, 8, target_system);
    _mav_put_uint8_t(buf, 9, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_LEN);
#else
    mavlink_last_enemy_position_t packet;
    packet.lat = lat;
    packet.lon = lon;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LAST_ENEMY_POSITION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_MIN_LEN, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_LEN, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_CRC);
}

/**
 * @brief Pack a last_enemy_position message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System ID of the vehicle.
 * @param target_component  Component ID of the vehicle.
 * @param lat [degE7] Latitude (WGS84)
 * @param lon [degE7] Longitude (WGS84)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_last_enemy_position_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, int32_t lat, int32_t lon)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LAST_ENEMY_POSITION_LEN];
    _mav_put_int32_t(buf, 0, lat);
    _mav_put_int32_t(buf, 4, lon);
    _mav_put_uint8_t(buf, 8, target_system);
    _mav_put_uint8_t(buf, 9, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_LEN);
#else
    mavlink_last_enemy_position_t packet;
    packet.lat = lat;
    packet.lon = lon;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LAST_ENEMY_POSITION;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_MIN_LEN, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_LEN, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_MIN_LEN, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_LEN);
#endif
}

/**
 * @brief Pack a last_enemy_position message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  System ID of the vehicle.
 * @param target_component  Component ID of the vehicle.
 * @param lat [degE7] Latitude (WGS84)
 * @param lon [degE7] Longitude (WGS84)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_last_enemy_position_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,int32_t lat,int32_t lon)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LAST_ENEMY_POSITION_LEN];
    _mav_put_int32_t(buf, 0, lat);
    _mav_put_int32_t(buf, 4, lon);
    _mav_put_uint8_t(buf, 8, target_system);
    _mav_put_uint8_t(buf, 9, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_LEN);
#else
    mavlink_last_enemy_position_t packet;
    packet.lat = lat;
    packet.lon = lon;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LAST_ENEMY_POSITION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_MIN_LEN, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_LEN, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_CRC);
}

/**
 * @brief Encode a last_enemy_position struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param last_enemy_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_last_enemy_position_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_last_enemy_position_t* last_enemy_position)
{
    return mavlink_msg_last_enemy_position_pack(system_id, component_id, msg, last_enemy_position->target_system, last_enemy_position->target_component, last_enemy_position->lat, last_enemy_position->lon);
}

/**
 * @brief Encode a last_enemy_position struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param last_enemy_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_last_enemy_position_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_last_enemy_position_t* last_enemy_position)
{
    return mavlink_msg_last_enemy_position_pack_chan(system_id, component_id, chan, msg, last_enemy_position->target_system, last_enemy_position->target_component, last_enemy_position->lat, last_enemy_position->lon);
}

/**
 * @brief Encode a last_enemy_position struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param last_enemy_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_last_enemy_position_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_last_enemy_position_t* last_enemy_position)
{
    return mavlink_msg_last_enemy_position_pack_status(system_id, component_id, _status, msg,  last_enemy_position->target_system, last_enemy_position->target_component, last_enemy_position->lat, last_enemy_position->lon);
}

/**
 * @brief Send a last_enemy_position message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  System ID of the vehicle.
 * @param target_component  Component ID of the vehicle.
 * @param lat [degE7] Latitude (WGS84)
 * @param lon [degE7] Longitude (WGS84)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_last_enemy_position_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, int32_t lat, int32_t lon)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LAST_ENEMY_POSITION_LEN];
    _mav_put_int32_t(buf, 0, lat);
    _mav_put_int32_t(buf, 4, lon);
    _mav_put_uint8_t(buf, 8, target_system);
    _mav_put_uint8_t(buf, 9, target_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LAST_ENEMY_POSITION, buf, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_MIN_LEN, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_LEN, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_CRC);
#else
    mavlink_last_enemy_position_t packet;
    packet.lat = lat;
    packet.lon = lon;
    packet.target_system = target_system;
    packet.target_component = target_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LAST_ENEMY_POSITION, (const char *)&packet, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_MIN_LEN, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_LEN, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_CRC);
#endif
}

/**
 * @brief Send a last_enemy_position message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_last_enemy_position_send_struct(mavlink_channel_t chan, const mavlink_last_enemy_position_t* last_enemy_position)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_last_enemy_position_send(chan, last_enemy_position->target_system, last_enemy_position->target_component, last_enemy_position->lat, last_enemy_position->lon);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LAST_ENEMY_POSITION, (const char *)last_enemy_position, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_MIN_LEN, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_LEN, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_CRC);
#endif
}

#if MAVLINK_MSG_ID_LAST_ENEMY_POSITION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_last_enemy_position_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, int32_t lat, int32_t lon)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, lat);
    _mav_put_int32_t(buf, 4, lon);
    _mav_put_uint8_t(buf, 8, target_system);
    _mav_put_uint8_t(buf, 9, target_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LAST_ENEMY_POSITION, buf, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_MIN_LEN, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_LEN, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_CRC);
#else
    mavlink_last_enemy_position_t *packet = (mavlink_last_enemy_position_t *)msgbuf;
    packet->lat = lat;
    packet->lon = lon;
    packet->target_system = target_system;
    packet->target_component = target_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LAST_ENEMY_POSITION, (const char *)packet, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_MIN_LEN, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_LEN, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_CRC);
#endif
}
#endif

#endif

// MESSAGE LAST_ENEMY_POSITION UNPACKING


/**
 * @brief Get field target_system from last_enemy_position message
 *
 * @return  System ID of the vehicle.
 */
static inline uint8_t mavlink_msg_last_enemy_position_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field target_component from last_enemy_position message
 *
 * @return  Component ID of the vehicle.
 */
static inline uint8_t mavlink_msg_last_enemy_position_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field lat from last_enemy_position message
 *
 * @return [degE7] Latitude (WGS84)
 */
static inline int32_t mavlink_msg_last_enemy_position_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field lon from last_enemy_position message
 *
 * @return [degE7] Longitude (WGS84)
 */
static inline int32_t mavlink_msg_last_enemy_position_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Decode a last_enemy_position message into a struct
 *
 * @param msg The message to decode
 * @param last_enemy_position C-struct to decode the message contents into
 */
static inline void mavlink_msg_last_enemy_position_decode(const mavlink_message_t* msg, mavlink_last_enemy_position_t* last_enemy_position)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    last_enemy_position->lat = mavlink_msg_last_enemy_position_get_lat(msg);
    last_enemy_position->lon = mavlink_msg_last_enemy_position_get_lon(msg);
    last_enemy_position->target_system = mavlink_msg_last_enemy_position_get_target_system(msg);
    last_enemy_position->target_component = mavlink_msg_last_enemy_position_get_target_component(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LAST_ENEMY_POSITION_LEN? msg->len : MAVLINK_MSG_ID_LAST_ENEMY_POSITION_LEN;
        memset(last_enemy_position, 0, MAVLINK_MSG_ID_LAST_ENEMY_POSITION_LEN);
    memcpy(last_enemy_position, _MAV_PAYLOAD(msg), len);
#endif
}
