#pragma once
// MESSAGE DETECTED_ENEMY PACKING

#define MAVLINK_MSG_ID_DETECTED_ENEMY 13002


typedef struct __mavlink_detected_enemy_t {
 float confidence; /*<  Detection confidence (0.0 to 1.0).*/
 uint16_t pixel_x; /*<  X coordinate in pixels (front camera).*/
 uint16_t pixel_y; /*<  Y coordinate in pixels (front camera).*/
} mavlink_detected_enemy_t;

#define MAVLINK_MSG_ID_DETECTED_ENEMY_LEN 8
#define MAVLINK_MSG_ID_DETECTED_ENEMY_MIN_LEN 8
#define MAVLINK_MSG_ID_13002_LEN 8
#define MAVLINK_MSG_ID_13002_MIN_LEN 8

#define MAVLINK_MSG_ID_DETECTED_ENEMY_CRC 169
#define MAVLINK_MSG_ID_13002_CRC 169



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_DETECTED_ENEMY { \
    13002, \
    "DETECTED_ENEMY", \
    3, \
    {  { "pixel_x", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_detected_enemy_t, pixel_x) }, \
         { "pixel_y", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_detected_enemy_t, pixel_y) }, \
         { "confidence", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_detected_enemy_t, confidence) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_DETECTED_ENEMY { \
    "DETECTED_ENEMY", \
    3, \
    {  { "pixel_x", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_detected_enemy_t, pixel_x) }, \
         { "pixel_y", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_detected_enemy_t, pixel_y) }, \
         { "confidence", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_detected_enemy_t, confidence) }, \
         } \
}
#endif

/**
 * @brief Pack a detected_enemy message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param pixel_x  X coordinate in pixels (front camera).
 * @param pixel_y  Y coordinate in pixels (front camera).
 * @param confidence  Detection confidence (0.0 to 1.0).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_detected_enemy_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t pixel_x, uint16_t pixel_y, float confidence)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DETECTED_ENEMY_LEN];
    _mav_put_float(buf, 0, confidence);
    _mav_put_uint16_t(buf, 4, pixel_x);
    _mav_put_uint16_t(buf, 6, pixel_y);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DETECTED_ENEMY_LEN);
#else
    mavlink_detected_enemy_t packet;
    packet.confidence = confidence;
    packet.pixel_x = pixel_x;
    packet.pixel_y = pixel_y;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DETECTED_ENEMY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DETECTED_ENEMY;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DETECTED_ENEMY_MIN_LEN, MAVLINK_MSG_ID_DETECTED_ENEMY_LEN, MAVLINK_MSG_ID_DETECTED_ENEMY_CRC);
}

/**
 * @brief Pack a detected_enemy message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param pixel_x  X coordinate in pixels (front camera).
 * @param pixel_y  Y coordinate in pixels (front camera).
 * @param confidence  Detection confidence (0.0 to 1.0).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_detected_enemy_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint16_t pixel_x, uint16_t pixel_y, float confidence)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DETECTED_ENEMY_LEN];
    _mav_put_float(buf, 0, confidence);
    _mav_put_uint16_t(buf, 4, pixel_x);
    _mav_put_uint16_t(buf, 6, pixel_y);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DETECTED_ENEMY_LEN);
#else
    mavlink_detected_enemy_t packet;
    packet.confidence = confidence;
    packet.pixel_x = pixel_x;
    packet.pixel_y = pixel_y;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DETECTED_ENEMY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DETECTED_ENEMY;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_DETECTED_ENEMY_MIN_LEN, MAVLINK_MSG_ID_DETECTED_ENEMY_LEN, MAVLINK_MSG_ID_DETECTED_ENEMY_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_DETECTED_ENEMY_MIN_LEN, MAVLINK_MSG_ID_DETECTED_ENEMY_LEN);
#endif
}

/**
 * @brief Pack a detected_enemy message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pixel_x  X coordinate in pixels (front camera).
 * @param pixel_y  Y coordinate in pixels (front camera).
 * @param confidence  Detection confidence (0.0 to 1.0).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_detected_enemy_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t pixel_x,uint16_t pixel_y,float confidence)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DETECTED_ENEMY_LEN];
    _mav_put_float(buf, 0, confidence);
    _mav_put_uint16_t(buf, 4, pixel_x);
    _mav_put_uint16_t(buf, 6, pixel_y);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DETECTED_ENEMY_LEN);
#else
    mavlink_detected_enemy_t packet;
    packet.confidence = confidence;
    packet.pixel_x = pixel_x;
    packet.pixel_y = pixel_y;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DETECTED_ENEMY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DETECTED_ENEMY;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DETECTED_ENEMY_MIN_LEN, MAVLINK_MSG_ID_DETECTED_ENEMY_LEN, MAVLINK_MSG_ID_DETECTED_ENEMY_CRC);
}

/**
 * @brief Encode a detected_enemy struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param detected_enemy C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_detected_enemy_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_detected_enemy_t* detected_enemy)
{
    return mavlink_msg_detected_enemy_pack(system_id, component_id, msg, detected_enemy->pixel_x, detected_enemy->pixel_y, detected_enemy->confidence);
}

/**
 * @brief Encode a detected_enemy struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param detected_enemy C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_detected_enemy_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_detected_enemy_t* detected_enemy)
{
    return mavlink_msg_detected_enemy_pack_chan(system_id, component_id, chan, msg, detected_enemy->pixel_x, detected_enemy->pixel_y, detected_enemy->confidence);
}

/**
 * @brief Encode a detected_enemy struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param detected_enemy C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_detected_enemy_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_detected_enemy_t* detected_enemy)
{
    return mavlink_msg_detected_enemy_pack_status(system_id, component_id, _status, msg,  detected_enemy->pixel_x, detected_enemy->pixel_y, detected_enemy->confidence);
}

/**
 * @brief Send a detected_enemy message
 * @param chan MAVLink channel to send the message
 *
 * @param pixel_x  X coordinate in pixels (front camera).
 * @param pixel_y  Y coordinate in pixels (front camera).
 * @param confidence  Detection confidence (0.0 to 1.0).
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_detected_enemy_send(mavlink_channel_t chan, uint16_t pixel_x, uint16_t pixel_y, float confidence)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DETECTED_ENEMY_LEN];
    _mav_put_float(buf, 0, confidence);
    _mav_put_uint16_t(buf, 4, pixel_x);
    _mav_put_uint16_t(buf, 6, pixel_y);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DETECTED_ENEMY, buf, MAVLINK_MSG_ID_DETECTED_ENEMY_MIN_LEN, MAVLINK_MSG_ID_DETECTED_ENEMY_LEN, MAVLINK_MSG_ID_DETECTED_ENEMY_CRC);
#else
    mavlink_detected_enemy_t packet;
    packet.confidence = confidence;
    packet.pixel_x = pixel_x;
    packet.pixel_y = pixel_y;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DETECTED_ENEMY, (const char *)&packet, MAVLINK_MSG_ID_DETECTED_ENEMY_MIN_LEN, MAVLINK_MSG_ID_DETECTED_ENEMY_LEN, MAVLINK_MSG_ID_DETECTED_ENEMY_CRC);
#endif
}

/**
 * @brief Send a detected_enemy message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_detected_enemy_send_struct(mavlink_channel_t chan, const mavlink_detected_enemy_t* detected_enemy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_detected_enemy_send(chan, detected_enemy->pixel_x, detected_enemy->pixel_y, detected_enemy->confidence);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DETECTED_ENEMY, (const char *)detected_enemy, MAVLINK_MSG_ID_DETECTED_ENEMY_MIN_LEN, MAVLINK_MSG_ID_DETECTED_ENEMY_LEN, MAVLINK_MSG_ID_DETECTED_ENEMY_CRC);
#endif
}

#if MAVLINK_MSG_ID_DETECTED_ENEMY_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_detected_enemy_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t pixel_x, uint16_t pixel_y, float confidence)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, confidence);
    _mav_put_uint16_t(buf, 4, pixel_x);
    _mav_put_uint16_t(buf, 6, pixel_y);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DETECTED_ENEMY, buf, MAVLINK_MSG_ID_DETECTED_ENEMY_MIN_LEN, MAVLINK_MSG_ID_DETECTED_ENEMY_LEN, MAVLINK_MSG_ID_DETECTED_ENEMY_CRC);
#else
    mavlink_detected_enemy_t *packet = (mavlink_detected_enemy_t *)msgbuf;
    packet->confidence = confidence;
    packet->pixel_x = pixel_x;
    packet->pixel_y = pixel_y;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DETECTED_ENEMY, (const char *)packet, MAVLINK_MSG_ID_DETECTED_ENEMY_MIN_LEN, MAVLINK_MSG_ID_DETECTED_ENEMY_LEN, MAVLINK_MSG_ID_DETECTED_ENEMY_CRC);
#endif
}
#endif

#endif

// MESSAGE DETECTED_ENEMY UNPACKING


/**
 * @brief Get field pixel_x from detected_enemy message
 *
 * @return  X coordinate in pixels (front camera).
 */
static inline uint16_t mavlink_msg_detected_enemy_get_pixel_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field pixel_y from detected_enemy message
 *
 * @return  Y coordinate in pixels (front camera).
 */
static inline uint16_t mavlink_msg_detected_enemy_get_pixel_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field confidence from detected_enemy message
 *
 * @return  Detection confidence (0.0 to 1.0).
 */
static inline float mavlink_msg_detected_enemy_get_confidence(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Decode a detected_enemy message into a struct
 *
 * @param msg The message to decode
 * @param detected_enemy C-struct to decode the message contents into
 */
static inline void mavlink_msg_detected_enemy_decode(const mavlink_message_t* msg, mavlink_detected_enemy_t* detected_enemy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    detected_enemy->confidence = mavlink_msg_detected_enemy_get_confidence(msg);
    detected_enemy->pixel_x = mavlink_msg_detected_enemy_get_pixel_x(msg);
    detected_enemy->pixel_y = mavlink_msg_detected_enemy_get_pixel_y(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_DETECTED_ENEMY_LEN? msg->len : MAVLINK_MSG_ID_DETECTED_ENEMY_LEN;
        memset(detected_enemy, 0, MAVLINK_MSG_ID_DETECTED_ENEMY_LEN);
    memcpy(detected_enemy, _MAV_PAYLOAD(msg), len);
#endif
}
