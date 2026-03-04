#pragma once
// MESSAGE ENEMY_PIXEL_PACKET PACKING

#define MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET 13005


typedef struct __mavlink_enemy_pixel_packet_t {
 uint16_t kamera_pixel_x; /*<  kamerada tespit edilen rakibin düşey pixel konumu */
 uint16_t kamera_pixel_y; /*<  kamerada tespit edilen rakibin yatay pixel konumu */
} mavlink_enemy_pixel_packet_t;

#define MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_LEN 4
#define MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_MIN_LEN 4
#define MAVLINK_MSG_ID_13005_LEN 4
#define MAVLINK_MSG_ID_13005_MIN_LEN 4

#define MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_CRC 186
#define MAVLINK_MSG_ID_13005_CRC 186



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ENEMY_PIXEL_PACKET { \
    13005, \
    "ENEMY_PIXEL_PACKET", \
    2, \
    {  { "kamera_pixel_x", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_enemy_pixel_packet_t, kamera_pixel_x) }, \
         { "kamera_pixel_y", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_enemy_pixel_packet_t, kamera_pixel_y) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ENEMY_PIXEL_PACKET { \
    "ENEMY_PIXEL_PACKET", \
    2, \
    {  { "kamera_pixel_x", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_enemy_pixel_packet_t, kamera_pixel_x) }, \
         { "kamera_pixel_y", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_enemy_pixel_packet_t, kamera_pixel_y) }, \
         } \
}
#endif

/**
 * @brief Pack a enemy_pixel_packet message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param kamera_pixel_x  kamerada tespit edilen rakibin düşey pixel konumu 
 * @param kamera_pixel_y  kamerada tespit edilen rakibin yatay pixel konumu 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_enemy_pixel_packet_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t kamera_pixel_x, uint16_t kamera_pixel_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_LEN];
    _mav_put_uint16_t(buf, 0, kamera_pixel_x);
    _mav_put_uint16_t(buf, 2, kamera_pixel_y);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_LEN);
#else
    mavlink_enemy_pixel_packet_t packet;
    packet.kamera_pixel_x = kamera_pixel_x;
    packet.kamera_pixel_y = kamera_pixel_y;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_MIN_LEN, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_LEN, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_CRC);
}

/**
 * @brief Pack a enemy_pixel_packet message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param kamera_pixel_x  kamerada tespit edilen rakibin düşey pixel konumu 
 * @param kamera_pixel_y  kamerada tespit edilen rakibin yatay pixel konumu 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_enemy_pixel_packet_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint16_t kamera_pixel_x, uint16_t kamera_pixel_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_LEN];
    _mav_put_uint16_t(buf, 0, kamera_pixel_x);
    _mav_put_uint16_t(buf, 2, kamera_pixel_y);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_LEN);
#else
    mavlink_enemy_pixel_packet_t packet;
    packet.kamera_pixel_x = kamera_pixel_x;
    packet.kamera_pixel_y = kamera_pixel_y;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_MIN_LEN, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_LEN, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_MIN_LEN, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_LEN);
#endif
}

/**
 * @brief Pack a enemy_pixel_packet message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param kamera_pixel_x  kamerada tespit edilen rakibin düşey pixel konumu 
 * @param kamera_pixel_y  kamerada tespit edilen rakibin yatay pixel konumu 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_enemy_pixel_packet_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t kamera_pixel_x,uint16_t kamera_pixel_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_LEN];
    _mav_put_uint16_t(buf, 0, kamera_pixel_x);
    _mav_put_uint16_t(buf, 2, kamera_pixel_y);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_LEN);
#else
    mavlink_enemy_pixel_packet_t packet;
    packet.kamera_pixel_x = kamera_pixel_x;
    packet.kamera_pixel_y = kamera_pixel_y;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_MIN_LEN, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_LEN, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_CRC);
}

/**
 * @brief Encode a enemy_pixel_packet struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param enemy_pixel_packet C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_enemy_pixel_packet_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_enemy_pixel_packet_t* enemy_pixel_packet)
{
    return mavlink_msg_enemy_pixel_packet_pack(system_id, component_id, msg, enemy_pixel_packet->kamera_pixel_x, enemy_pixel_packet->kamera_pixel_y);
}

/**
 * @brief Encode a enemy_pixel_packet struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param enemy_pixel_packet C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_enemy_pixel_packet_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_enemy_pixel_packet_t* enemy_pixel_packet)
{
    return mavlink_msg_enemy_pixel_packet_pack_chan(system_id, component_id, chan, msg, enemy_pixel_packet->kamera_pixel_x, enemy_pixel_packet->kamera_pixel_y);
}

/**
 * @brief Encode a enemy_pixel_packet struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param enemy_pixel_packet C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_enemy_pixel_packet_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_enemy_pixel_packet_t* enemy_pixel_packet)
{
    return mavlink_msg_enemy_pixel_packet_pack_status(system_id, component_id, _status, msg,  enemy_pixel_packet->kamera_pixel_x, enemy_pixel_packet->kamera_pixel_y);
}

/**
 * @brief Send a enemy_pixel_packet message
 * @param chan MAVLink channel to send the message
 *
 * @param kamera_pixel_x  kamerada tespit edilen rakibin düşey pixel konumu 
 * @param kamera_pixel_y  kamerada tespit edilen rakibin yatay pixel konumu 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_enemy_pixel_packet_send(mavlink_channel_t chan, uint16_t kamera_pixel_x, uint16_t kamera_pixel_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_LEN];
    _mav_put_uint16_t(buf, 0, kamera_pixel_x);
    _mav_put_uint16_t(buf, 2, kamera_pixel_y);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET, buf, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_MIN_LEN, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_LEN, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_CRC);
#else
    mavlink_enemy_pixel_packet_t packet;
    packet.kamera_pixel_x = kamera_pixel_x;
    packet.kamera_pixel_y = kamera_pixel_y;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET, (const char *)&packet, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_MIN_LEN, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_LEN, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_CRC);
#endif
}

/**
 * @brief Send a enemy_pixel_packet message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_enemy_pixel_packet_send_struct(mavlink_channel_t chan, const mavlink_enemy_pixel_packet_t* enemy_pixel_packet)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_enemy_pixel_packet_send(chan, enemy_pixel_packet->kamera_pixel_x, enemy_pixel_packet->kamera_pixel_y);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET, (const char *)enemy_pixel_packet, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_MIN_LEN, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_LEN, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_CRC);
#endif
}

#if MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_enemy_pixel_packet_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t kamera_pixel_x, uint16_t kamera_pixel_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, kamera_pixel_x);
    _mav_put_uint16_t(buf, 2, kamera_pixel_y);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET, buf, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_MIN_LEN, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_LEN, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_CRC);
#else
    mavlink_enemy_pixel_packet_t *packet = (mavlink_enemy_pixel_packet_t *)msgbuf;
    packet->kamera_pixel_x = kamera_pixel_x;
    packet->kamera_pixel_y = kamera_pixel_y;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET, (const char *)packet, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_MIN_LEN, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_LEN, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_CRC);
#endif
}
#endif

#endif

// MESSAGE ENEMY_PIXEL_PACKET UNPACKING


/**
 * @brief Get field kamera_pixel_x from enemy_pixel_packet message
 *
 * @return  kamerada tespit edilen rakibin düşey pixel konumu 
 */
static inline uint16_t mavlink_msg_enemy_pixel_packet_get_kamera_pixel_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field kamera_pixel_y from enemy_pixel_packet message
 *
 * @return  kamerada tespit edilen rakibin yatay pixel konumu 
 */
static inline uint16_t mavlink_msg_enemy_pixel_packet_get_kamera_pixel_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Decode a enemy_pixel_packet message into a struct
 *
 * @param msg The message to decode
 * @param enemy_pixel_packet C-struct to decode the message contents into
 */
static inline void mavlink_msg_enemy_pixel_packet_decode(const mavlink_message_t* msg, mavlink_enemy_pixel_packet_t* enemy_pixel_packet)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    enemy_pixel_packet->kamera_pixel_x = mavlink_msg_enemy_pixel_packet_get_kamera_pixel_x(msg);
    enemy_pixel_packet->kamera_pixel_y = mavlink_msg_enemy_pixel_packet_get_kamera_pixel_y(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_LEN? msg->len : MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_LEN;
        memset(enemy_pixel_packet, 0, MAVLINK_MSG_ID_ENEMY_PIXEL_PACKET_LEN);
    memcpy(enemy_pixel_packet, _MAV_PAYLOAD(msg), len);
#endif
}
