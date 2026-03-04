#pragma once
// MESSAGE QR_LOCATION_PACKET PACKING

#define MAVLINK_MSG_ID_QR_LOCATION_PACKET 13008


typedef struct __mavlink_qr_location_packet_t {
 int32_t qr_latitude; /*< [degE7] QR kodun enlem koordinatı*/
 int32_t qr_longitude; /*< [degE7] QR kodun boylam koordinatı*/
} mavlink_qr_location_packet_t;

#define MAVLINK_MSG_ID_QR_LOCATION_PACKET_LEN 8
#define MAVLINK_MSG_ID_QR_LOCATION_PACKET_MIN_LEN 8
#define MAVLINK_MSG_ID_13008_LEN 8
#define MAVLINK_MSG_ID_13008_MIN_LEN 8

#define MAVLINK_MSG_ID_QR_LOCATION_PACKET_CRC 191
#define MAVLINK_MSG_ID_13008_CRC 191



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_QR_LOCATION_PACKET { \
    13008, \
    "QR_LOCATION_PACKET", \
    2, \
    {  { "qr_latitude", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_qr_location_packet_t, qr_latitude) }, \
         { "qr_longitude", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_qr_location_packet_t, qr_longitude) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_QR_LOCATION_PACKET { \
    "QR_LOCATION_PACKET", \
    2, \
    {  { "qr_latitude", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_qr_location_packet_t, qr_latitude) }, \
         { "qr_longitude", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_qr_location_packet_t, qr_longitude) }, \
         } \
}
#endif

/**
 * @brief Pack a qr_location_packet message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param qr_latitude [degE7] QR kodun enlem koordinatı
 * @param qr_longitude [degE7] QR kodun boylam koordinatı
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_qr_location_packet_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int32_t qr_latitude, int32_t qr_longitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_QR_LOCATION_PACKET_LEN];
    _mav_put_int32_t(buf, 0, qr_latitude);
    _mav_put_int32_t(buf, 4, qr_longitude);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_QR_LOCATION_PACKET_LEN);
#else
    mavlink_qr_location_packet_t packet;
    packet.qr_latitude = qr_latitude;
    packet.qr_longitude = qr_longitude;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_QR_LOCATION_PACKET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_QR_LOCATION_PACKET;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_QR_LOCATION_PACKET_MIN_LEN, MAVLINK_MSG_ID_QR_LOCATION_PACKET_LEN, MAVLINK_MSG_ID_QR_LOCATION_PACKET_CRC);
}

/**
 * @brief Pack a qr_location_packet message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param qr_latitude [degE7] QR kodun enlem koordinatı
 * @param qr_longitude [degE7] QR kodun boylam koordinatı
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_qr_location_packet_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int32_t qr_latitude, int32_t qr_longitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_QR_LOCATION_PACKET_LEN];
    _mav_put_int32_t(buf, 0, qr_latitude);
    _mav_put_int32_t(buf, 4, qr_longitude);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_QR_LOCATION_PACKET_LEN);
#else
    mavlink_qr_location_packet_t packet;
    packet.qr_latitude = qr_latitude;
    packet.qr_longitude = qr_longitude;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_QR_LOCATION_PACKET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_QR_LOCATION_PACKET;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_QR_LOCATION_PACKET_MIN_LEN, MAVLINK_MSG_ID_QR_LOCATION_PACKET_LEN, MAVLINK_MSG_ID_QR_LOCATION_PACKET_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_QR_LOCATION_PACKET_MIN_LEN, MAVLINK_MSG_ID_QR_LOCATION_PACKET_LEN);
#endif
}

/**
 * @brief Pack a qr_location_packet message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param qr_latitude [degE7] QR kodun enlem koordinatı
 * @param qr_longitude [degE7] QR kodun boylam koordinatı
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_qr_location_packet_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int32_t qr_latitude,int32_t qr_longitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_QR_LOCATION_PACKET_LEN];
    _mav_put_int32_t(buf, 0, qr_latitude);
    _mav_put_int32_t(buf, 4, qr_longitude);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_QR_LOCATION_PACKET_LEN);
#else
    mavlink_qr_location_packet_t packet;
    packet.qr_latitude = qr_latitude;
    packet.qr_longitude = qr_longitude;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_QR_LOCATION_PACKET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_QR_LOCATION_PACKET;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_QR_LOCATION_PACKET_MIN_LEN, MAVLINK_MSG_ID_QR_LOCATION_PACKET_LEN, MAVLINK_MSG_ID_QR_LOCATION_PACKET_CRC);
}

/**
 * @brief Encode a qr_location_packet struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param qr_location_packet C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_qr_location_packet_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_qr_location_packet_t* qr_location_packet)
{
    return mavlink_msg_qr_location_packet_pack(system_id, component_id, msg, qr_location_packet->qr_latitude, qr_location_packet->qr_longitude);
}

/**
 * @brief Encode a qr_location_packet struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param qr_location_packet C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_qr_location_packet_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_qr_location_packet_t* qr_location_packet)
{
    return mavlink_msg_qr_location_packet_pack_chan(system_id, component_id, chan, msg, qr_location_packet->qr_latitude, qr_location_packet->qr_longitude);
}

/**
 * @brief Encode a qr_location_packet struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param qr_location_packet C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_qr_location_packet_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_qr_location_packet_t* qr_location_packet)
{
    return mavlink_msg_qr_location_packet_pack_status(system_id, component_id, _status, msg,  qr_location_packet->qr_latitude, qr_location_packet->qr_longitude);
}

/**
 * @brief Send a qr_location_packet message
 * @param chan MAVLink channel to send the message
 *
 * @param qr_latitude [degE7] QR kodun enlem koordinatı
 * @param qr_longitude [degE7] QR kodun boylam koordinatı
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_qr_location_packet_send(mavlink_channel_t chan, int32_t qr_latitude, int32_t qr_longitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_QR_LOCATION_PACKET_LEN];
    _mav_put_int32_t(buf, 0, qr_latitude);
    _mav_put_int32_t(buf, 4, qr_longitude);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_QR_LOCATION_PACKET, buf, MAVLINK_MSG_ID_QR_LOCATION_PACKET_MIN_LEN, MAVLINK_MSG_ID_QR_LOCATION_PACKET_LEN, MAVLINK_MSG_ID_QR_LOCATION_PACKET_CRC);
#else
    mavlink_qr_location_packet_t packet;
    packet.qr_latitude = qr_latitude;
    packet.qr_longitude = qr_longitude;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_QR_LOCATION_PACKET, (const char *)&packet, MAVLINK_MSG_ID_QR_LOCATION_PACKET_MIN_LEN, MAVLINK_MSG_ID_QR_LOCATION_PACKET_LEN, MAVLINK_MSG_ID_QR_LOCATION_PACKET_CRC);
#endif
}

/**
 * @brief Send a qr_location_packet message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_qr_location_packet_send_struct(mavlink_channel_t chan, const mavlink_qr_location_packet_t* qr_location_packet)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_qr_location_packet_send(chan, qr_location_packet->qr_latitude, qr_location_packet->qr_longitude);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_QR_LOCATION_PACKET, (const char *)qr_location_packet, MAVLINK_MSG_ID_QR_LOCATION_PACKET_MIN_LEN, MAVLINK_MSG_ID_QR_LOCATION_PACKET_LEN, MAVLINK_MSG_ID_QR_LOCATION_PACKET_CRC);
#endif
}

#if MAVLINK_MSG_ID_QR_LOCATION_PACKET_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_qr_location_packet_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int32_t qr_latitude, int32_t qr_longitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, qr_latitude);
    _mav_put_int32_t(buf, 4, qr_longitude);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_QR_LOCATION_PACKET, buf, MAVLINK_MSG_ID_QR_LOCATION_PACKET_MIN_LEN, MAVLINK_MSG_ID_QR_LOCATION_PACKET_LEN, MAVLINK_MSG_ID_QR_LOCATION_PACKET_CRC);
#else
    mavlink_qr_location_packet_t *packet = (mavlink_qr_location_packet_t *)msgbuf;
    packet->qr_latitude = qr_latitude;
    packet->qr_longitude = qr_longitude;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_QR_LOCATION_PACKET, (const char *)packet, MAVLINK_MSG_ID_QR_LOCATION_PACKET_MIN_LEN, MAVLINK_MSG_ID_QR_LOCATION_PACKET_LEN, MAVLINK_MSG_ID_QR_LOCATION_PACKET_CRC);
#endif
}
#endif

#endif

// MESSAGE QR_LOCATION_PACKET UNPACKING


/**
 * @brief Get field qr_latitude from qr_location_packet message
 *
 * @return [degE7] QR kodun enlem koordinatı
 */
static inline int32_t mavlink_msg_qr_location_packet_get_qr_latitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field qr_longitude from qr_location_packet message
 *
 * @return [degE7] QR kodun boylam koordinatı
 */
static inline int32_t mavlink_msg_qr_location_packet_get_qr_longitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Decode a qr_location_packet message into a struct
 *
 * @param msg The message to decode
 * @param qr_location_packet C-struct to decode the message contents into
 */
static inline void mavlink_msg_qr_location_packet_decode(const mavlink_message_t* msg, mavlink_qr_location_packet_t* qr_location_packet)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    qr_location_packet->qr_latitude = mavlink_msg_qr_location_packet_get_qr_latitude(msg);
    qr_location_packet->qr_longitude = mavlink_msg_qr_location_packet_get_qr_longitude(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_QR_LOCATION_PACKET_LEN? msg->len : MAVLINK_MSG_ID_QR_LOCATION_PACKET_LEN;
        memset(qr_location_packet, 0, MAVLINK_MSG_ID_QR_LOCATION_PACKET_LEN);
    memcpy(qr_location_packet, _MAV_PAYLOAD(msg), len);
#endif
}
