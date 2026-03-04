#pragma once
// MESSAGE RPI_CONTROL_PACKET PACKING

#define MAVLINK_MSG_ID_RPI_CONTROL_PACKET 13009


typedef struct __mavlink_rpi_control_packet_t {
 int8_t command_code; /*<  Raspberry'ye verilecek önceden hazırlanmış komut kodları*/
 int8_t parametre_1; /*<  İhtiyaç halinde girilecek komut parametreleri-1*/
 int8_t parametre_2; /*<  İhtiyaç halinde girilecek komut parametreleri-2*/
 int8_t parametre_3; /*<  İhtiyaç halinde girilecek komut parametreleri-3*/
} mavlink_rpi_control_packet_t;

#define MAVLINK_MSG_ID_RPI_CONTROL_PACKET_LEN 4
#define MAVLINK_MSG_ID_RPI_CONTROL_PACKET_MIN_LEN 4
#define MAVLINK_MSG_ID_13009_LEN 4
#define MAVLINK_MSG_ID_13009_MIN_LEN 4

#define MAVLINK_MSG_ID_RPI_CONTROL_PACKET_CRC 77
#define MAVLINK_MSG_ID_13009_CRC 77



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RPI_CONTROL_PACKET { \
    13009, \
    "RPI_CONTROL_PACKET", \
    4, \
    {  { "command_code", NULL, MAVLINK_TYPE_INT8_T, 0, 0, offsetof(mavlink_rpi_control_packet_t, command_code) }, \
         { "parametre_1", NULL, MAVLINK_TYPE_INT8_T, 0, 1, offsetof(mavlink_rpi_control_packet_t, parametre_1) }, \
         { "parametre_2", NULL, MAVLINK_TYPE_INT8_T, 0, 2, offsetof(mavlink_rpi_control_packet_t, parametre_2) }, \
         { "parametre_3", NULL, MAVLINK_TYPE_INT8_T, 0, 3, offsetof(mavlink_rpi_control_packet_t, parametre_3) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RPI_CONTROL_PACKET { \
    "RPI_CONTROL_PACKET", \
    4, \
    {  { "command_code", NULL, MAVLINK_TYPE_INT8_T, 0, 0, offsetof(mavlink_rpi_control_packet_t, command_code) }, \
         { "parametre_1", NULL, MAVLINK_TYPE_INT8_T, 0, 1, offsetof(mavlink_rpi_control_packet_t, parametre_1) }, \
         { "parametre_2", NULL, MAVLINK_TYPE_INT8_T, 0, 2, offsetof(mavlink_rpi_control_packet_t, parametre_2) }, \
         { "parametre_3", NULL, MAVLINK_TYPE_INT8_T, 0, 3, offsetof(mavlink_rpi_control_packet_t, parametre_3) }, \
         } \
}
#endif

/**
 * @brief Pack a rpi_control_packet message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param command_code  Raspberry'ye verilecek önceden hazırlanmış komut kodları
 * @param parametre_1  İhtiyaç halinde girilecek komut parametreleri-1
 * @param parametre_2  İhtiyaç halinde girilecek komut parametreleri-2
 * @param parametre_3  İhtiyaç halinde girilecek komut parametreleri-3
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rpi_control_packet_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int8_t command_code, int8_t parametre_1, int8_t parametre_2, int8_t parametre_3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RPI_CONTROL_PACKET_LEN];
    _mav_put_int8_t(buf, 0, command_code);
    _mav_put_int8_t(buf, 1, parametre_1);
    _mav_put_int8_t(buf, 2, parametre_2);
    _mav_put_int8_t(buf, 3, parametre_3);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_LEN);
#else
    mavlink_rpi_control_packet_t packet;
    packet.command_code = command_code;
    packet.parametre_1 = parametre_1;
    packet.parametre_2 = parametre_2;
    packet.parametre_3 = parametre_3;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RPI_CONTROL_PACKET;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_MIN_LEN, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_LEN, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_CRC);
}

/**
 * @brief Pack a rpi_control_packet message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param command_code  Raspberry'ye verilecek önceden hazırlanmış komut kodları
 * @param parametre_1  İhtiyaç halinde girilecek komut parametreleri-1
 * @param parametre_2  İhtiyaç halinde girilecek komut parametreleri-2
 * @param parametre_3  İhtiyaç halinde girilecek komut parametreleri-3
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rpi_control_packet_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int8_t command_code, int8_t parametre_1, int8_t parametre_2, int8_t parametre_3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RPI_CONTROL_PACKET_LEN];
    _mav_put_int8_t(buf, 0, command_code);
    _mav_put_int8_t(buf, 1, parametre_1);
    _mav_put_int8_t(buf, 2, parametre_2);
    _mav_put_int8_t(buf, 3, parametre_3);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_LEN);
#else
    mavlink_rpi_control_packet_t packet;
    packet.command_code = command_code;
    packet.parametre_1 = parametre_1;
    packet.parametre_2 = parametre_2;
    packet.parametre_3 = parametre_3;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RPI_CONTROL_PACKET;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_MIN_LEN, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_LEN, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_MIN_LEN, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_LEN);
#endif
}

/**
 * @brief Pack a rpi_control_packet message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param command_code  Raspberry'ye verilecek önceden hazırlanmış komut kodları
 * @param parametre_1  İhtiyaç halinde girilecek komut parametreleri-1
 * @param parametre_2  İhtiyaç halinde girilecek komut parametreleri-2
 * @param parametre_3  İhtiyaç halinde girilecek komut parametreleri-3
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rpi_control_packet_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int8_t command_code,int8_t parametre_1,int8_t parametre_2,int8_t parametre_3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RPI_CONTROL_PACKET_LEN];
    _mav_put_int8_t(buf, 0, command_code);
    _mav_put_int8_t(buf, 1, parametre_1);
    _mav_put_int8_t(buf, 2, parametre_2);
    _mav_put_int8_t(buf, 3, parametre_3);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_LEN);
#else
    mavlink_rpi_control_packet_t packet;
    packet.command_code = command_code;
    packet.parametre_1 = parametre_1;
    packet.parametre_2 = parametre_2;
    packet.parametre_3 = parametre_3;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RPI_CONTROL_PACKET;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_MIN_LEN, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_LEN, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_CRC);
}

/**
 * @brief Encode a rpi_control_packet struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rpi_control_packet C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rpi_control_packet_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rpi_control_packet_t* rpi_control_packet)
{
    return mavlink_msg_rpi_control_packet_pack(system_id, component_id, msg, rpi_control_packet->command_code, rpi_control_packet->parametre_1, rpi_control_packet->parametre_2, rpi_control_packet->parametre_3);
}

/**
 * @brief Encode a rpi_control_packet struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rpi_control_packet C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rpi_control_packet_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rpi_control_packet_t* rpi_control_packet)
{
    return mavlink_msg_rpi_control_packet_pack_chan(system_id, component_id, chan, msg, rpi_control_packet->command_code, rpi_control_packet->parametre_1, rpi_control_packet->parametre_2, rpi_control_packet->parametre_3);
}

/**
 * @brief Encode a rpi_control_packet struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param rpi_control_packet C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rpi_control_packet_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_rpi_control_packet_t* rpi_control_packet)
{
    return mavlink_msg_rpi_control_packet_pack_status(system_id, component_id, _status, msg,  rpi_control_packet->command_code, rpi_control_packet->parametre_1, rpi_control_packet->parametre_2, rpi_control_packet->parametre_3);
}

/**
 * @brief Send a rpi_control_packet message
 * @param chan MAVLink channel to send the message
 *
 * @param command_code  Raspberry'ye verilecek önceden hazırlanmış komut kodları
 * @param parametre_1  İhtiyaç halinde girilecek komut parametreleri-1
 * @param parametre_2  İhtiyaç halinde girilecek komut parametreleri-2
 * @param parametre_3  İhtiyaç halinde girilecek komut parametreleri-3
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rpi_control_packet_send(mavlink_channel_t chan, int8_t command_code, int8_t parametre_1, int8_t parametre_2, int8_t parametre_3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RPI_CONTROL_PACKET_LEN];
    _mav_put_int8_t(buf, 0, command_code);
    _mav_put_int8_t(buf, 1, parametre_1);
    _mav_put_int8_t(buf, 2, parametre_2);
    _mav_put_int8_t(buf, 3, parametre_3);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RPI_CONTROL_PACKET, buf, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_MIN_LEN, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_LEN, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_CRC);
#else
    mavlink_rpi_control_packet_t packet;
    packet.command_code = command_code;
    packet.parametre_1 = parametre_1;
    packet.parametre_2 = parametre_2;
    packet.parametre_3 = parametre_3;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RPI_CONTROL_PACKET, (const char *)&packet, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_MIN_LEN, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_LEN, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_CRC);
#endif
}

/**
 * @brief Send a rpi_control_packet message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_rpi_control_packet_send_struct(mavlink_channel_t chan, const mavlink_rpi_control_packet_t* rpi_control_packet)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_rpi_control_packet_send(chan, rpi_control_packet->command_code, rpi_control_packet->parametre_1, rpi_control_packet->parametre_2, rpi_control_packet->parametre_3);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RPI_CONTROL_PACKET, (const char *)rpi_control_packet, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_MIN_LEN, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_LEN, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_CRC);
#endif
}

#if MAVLINK_MSG_ID_RPI_CONTROL_PACKET_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rpi_control_packet_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int8_t command_code, int8_t parametre_1, int8_t parametre_2, int8_t parametre_3)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int8_t(buf, 0, command_code);
    _mav_put_int8_t(buf, 1, parametre_1);
    _mav_put_int8_t(buf, 2, parametre_2);
    _mav_put_int8_t(buf, 3, parametre_3);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RPI_CONTROL_PACKET, buf, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_MIN_LEN, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_LEN, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_CRC);
#else
    mavlink_rpi_control_packet_t *packet = (mavlink_rpi_control_packet_t *)msgbuf;
    packet->command_code = command_code;
    packet->parametre_1 = parametre_1;
    packet->parametre_2 = parametre_2;
    packet->parametre_3 = parametre_3;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RPI_CONTROL_PACKET, (const char *)packet, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_MIN_LEN, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_LEN, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_CRC);
#endif
}
#endif

#endif

// MESSAGE RPI_CONTROL_PACKET UNPACKING


/**
 * @brief Get field command_code from rpi_control_packet message
 *
 * @return  Raspberry'ye verilecek önceden hazırlanmış komut kodları
 */
static inline int8_t mavlink_msg_rpi_control_packet_get_command_code(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  0);
}

/**
 * @brief Get field parametre_1 from rpi_control_packet message
 *
 * @return  İhtiyaç halinde girilecek komut parametreleri-1
 */
static inline int8_t mavlink_msg_rpi_control_packet_get_parametre_1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  1);
}

/**
 * @brief Get field parametre_2 from rpi_control_packet message
 *
 * @return  İhtiyaç halinde girilecek komut parametreleri-2
 */
static inline int8_t mavlink_msg_rpi_control_packet_get_parametre_2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  2);
}

/**
 * @brief Get field parametre_3 from rpi_control_packet message
 *
 * @return  İhtiyaç halinde girilecek komut parametreleri-3
 */
static inline int8_t mavlink_msg_rpi_control_packet_get_parametre_3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  3);
}

/**
 * @brief Decode a rpi_control_packet message into a struct
 *
 * @param msg The message to decode
 * @param rpi_control_packet C-struct to decode the message contents into
 */
static inline void mavlink_msg_rpi_control_packet_decode(const mavlink_message_t* msg, mavlink_rpi_control_packet_t* rpi_control_packet)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    rpi_control_packet->command_code = mavlink_msg_rpi_control_packet_get_command_code(msg);
    rpi_control_packet->parametre_1 = mavlink_msg_rpi_control_packet_get_parametre_1(msg);
    rpi_control_packet->parametre_2 = mavlink_msg_rpi_control_packet_get_parametre_2(msg);
    rpi_control_packet->parametre_3 = mavlink_msg_rpi_control_packet_get_parametre_3(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RPI_CONTROL_PACKET_LEN? msg->len : MAVLINK_MSG_ID_RPI_CONTROL_PACKET_LEN;
        memset(rpi_control_packet, 0, MAVLINK_MSG_ID_RPI_CONTROL_PACKET_LEN);
    memcpy(rpi_control_packet, _MAV_PAYLOAD(msg), len);
#endif
}
