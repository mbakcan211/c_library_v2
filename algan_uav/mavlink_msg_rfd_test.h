#pragma once
// MESSAGE RFD_TEST PACKING

#define MAVLINK_MSG_ID_RFD_TEST 13000


typedef struct __mavlink_rfd_test_t {
 uint8_t RANDOM_DEGER; /*<  */
} mavlink_rfd_test_t;

#define MAVLINK_MSG_ID_RFD_TEST_LEN 1
#define MAVLINK_MSG_ID_RFD_TEST_MIN_LEN 1
#define MAVLINK_MSG_ID_13000_LEN 1
#define MAVLINK_MSG_ID_13000_MIN_LEN 1

#define MAVLINK_MSG_ID_RFD_TEST_CRC 142
#define MAVLINK_MSG_ID_13000_CRC 142



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RFD_TEST { \
    13000, \
    "RFD_TEST", \
    1, \
    {  { "RANDOM_DEGER", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_rfd_test_t, RANDOM_DEGER) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RFD_TEST { \
    "RFD_TEST", \
    1, \
    {  { "RANDOM_DEGER", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_rfd_test_t, RANDOM_DEGER) }, \
         } \
}
#endif

/**
 * @brief Pack a rfd_test message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param RANDOM_DEGER  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rfd_test_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t RANDOM_DEGER)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RFD_TEST_LEN];
    _mav_put_uint8_t(buf, 0, RANDOM_DEGER);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RFD_TEST_LEN);
#else
    mavlink_rfd_test_t packet;
    packet.RANDOM_DEGER = RANDOM_DEGER;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RFD_TEST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RFD_TEST;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RFD_TEST_MIN_LEN, MAVLINK_MSG_ID_RFD_TEST_LEN, MAVLINK_MSG_ID_RFD_TEST_CRC);
}

/**
 * @brief Pack a rfd_test message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param RANDOM_DEGER  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rfd_test_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t RANDOM_DEGER)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RFD_TEST_LEN];
    _mav_put_uint8_t(buf, 0, RANDOM_DEGER);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RFD_TEST_LEN);
#else
    mavlink_rfd_test_t packet;
    packet.RANDOM_DEGER = RANDOM_DEGER;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RFD_TEST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RFD_TEST;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RFD_TEST_MIN_LEN, MAVLINK_MSG_ID_RFD_TEST_LEN, MAVLINK_MSG_ID_RFD_TEST_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RFD_TEST_MIN_LEN, MAVLINK_MSG_ID_RFD_TEST_LEN);
#endif
}

/**
 * @brief Pack a rfd_test message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param RANDOM_DEGER  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rfd_test_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t RANDOM_DEGER)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RFD_TEST_LEN];
    _mav_put_uint8_t(buf, 0, RANDOM_DEGER);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RFD_TEST_LEN);
#else
    mavlink_rfd_test_t packet;
    packet.RANDOM_DEGER = RANDOM_DEGER;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RFD_TEST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RFD_TEST;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RFD_TEST_MIN_LEN, MAVLINK_MSG_ID_RFD_TEST_LEN, MAVLINK_MSG_ID_RFD_TEST_CRC);
}

/**
 * @brief Encode a rfd_test struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rfd_test C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rfd_test_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rfd_test_t* rfd_test)
{
    return mavlink_msg_rfd_test_pack(system_id, component_id, msg, rfd_test->RANDOM_DEGER);
}

/**
 * @brief Encode a rfd_test struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rfd_test C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rfd_test_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rfd_test_t* rfd_test)
{
    return mavlink_msg_rfd_test_pack_chan(system_id, component_id, chan, msg, rfd_test->RANDOM_DEGER);
}

/**
 * @brief Encode a rfd_test struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param rfd_test C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rfd_test_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_rfd_test_t* rfd_test)
{
    return mavlink_msg_rfd_test_pack_status(system_id, component_id, _status, msg,  rfd_test->RANDOM_DEGER);
}

/**
 * @brief Send a rfd_test message
 * @param chan MAVLink channel to send the message
 *
 * @param RANDOM_DEGER  
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rfd_test_send(mavlink_channel_t chan, uint8_t RANDOM_DEGER)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RFD_TEST_LEN];
    _mav_put_uint8_t(buf, 0, RANDOM_DEGER);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RFD_TEST, buf, MAVLINK_MSG_ID_RFD_TEST_MIN_LEN, MAVLINK_MSG_ID_RFD_TEST_LEN, MAVLINK_MSG_ID_RFD_TEST_CRC);
#else
    mavlink_rfd_test_t packet;
    packet.RANDOM_DEGER = RANDOM_DEGER;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RFD_TEST, (const char *)&packet, MAVLINK_MSG_ID_RFD_TEST_MIN_LEN, MAVLINK_MSG_ID_RFD_TEST_LEN, MAVLINK_MSG_ID_RFD_TEST_CRC);
#endif
}

/**
 * @brief Send a rfd_test message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_rfd_test_send_struct(mavlink_channel_t chan, const mavlink_rfd_test_t* rfd_test)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_rfd_test_send(chan, rfd_test->RANDOM_DEGER);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RFD_TEST, (const char *)rfd_test, MAVLINK_MSG_ID_RFD_TEST_MIN_LEN, MAVLINK_MSG_ID_RFD_TEST_LEN, MAVLINK_MSG_ID_RFD_TEST_CRC);
#endif
}

#if MAVLINK_MSG_ID_RFD_TEST_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rfd_test_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t RANDOM_DEGER)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, RANDOM_DEGER);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RFD_TEST, buf, MAVLINK_MSG_ID_RFD_TEST_MIN_LEN, MAVLINK_MSG_ID_RFD_TEST_LEN, MAVLINK_MSG_ID_RFD_TEST_CRC);
#else
    mavlink_rfd_test_t *packet = (mavlink_rfd_test_t *)msgbuf;
    packet->RANDOM_DEGER = RANDOM_DEGER;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RFD_TEST, (const char *)packet, MAVLINK_MSG_ID_RFD_TEST_MIN_LEN, MAVLINK_MSG_ID_RFD_TEST_LEN, MAVLINK_MSG_ID_RFD_TEST_CRC);
#endif
}
#endif

#endif

// MESSAGE RFD_TEST UNPACKING


/**
 * @brief Get field RANDOM_DEGER from rfd_test message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_rfd_test_get_RANDOM_DEGER(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a rfd_test message into a struct
 *
 * @param msg The message to decode
 * @param rfd_test C-struct to decode the message contents into
 */
static inline void mavlink_msg_rfd_test_decode(const mavlink_message_t* msg, mavlink_rfd_test_t* rfd_test)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    rfd_test->RANDOM_DEGER = mavlink_msg_rfd_test_get_RANDOM_DEGER(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RFD_TEST_LEN? msg->len : MAVLINK_MSG_ID_RFD_TEST_LEN;
        memset(rfd_test, 0, MAVLINK_MSG_ID_RFD_TEST_LEN);
    memcpy(rfd_test, _MAV_PAYLOAD(msg), len);
#endif
}
