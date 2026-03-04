#pragma once
// MESSAGE ENEMY_DETECTION_STATUS PACKING

#define MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS 13006


typedef struct __mavlink_enemy_detection_status_t {
 uint16_t gecen_takip_süresi_milisaniye; /*<   milisaniye cinsinden mevcut kilitlenme süresi*/
 uint16_t rakip_pixel_x; /*<  kamerada tespit edilen rakibin düşey pixel konumu */
 uint16_t rakip_pixel_y; /*<  kamerada tespit edilen rakibin yatay pixel konumu */
 uint8_t otonom_bool; /*<  otonom veya manuel kilitlenme göstergesi (1 yada 0) */
 uint8_t model_confidence; /*<  görüntü işleme modelinin doğruluk oranının 100 ile çarpılmış hali */
} mavlink_enemy_detection_status_t;

#define MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_LEN 8
#define MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_MIN_LEN 8
#define MAVLINK_MSG_ID_13006_LEN 8
#define MAVLINK_MSG_ID_13006_MIN_LEN 8

#define MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_CRC 107
#define MAVLINK_MSG_ID_13006_CRC 107



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ENEMY_DETECTION_STATUS { \
    13006, \
    "ENEMY_DETECTION_STATUS", \
    5, \
    {  { "gecen_takip_süresi_milisaniye", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_enemy_detection_status_t, gecen_takip_süresi_milisaniye) }, \
         { "otonom_bool", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_enemy_detection_status_t, otonom_bool) }, \
         { "rakip_pixel_x", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_enemy_detection_status_t, rakip_pixel_x) }, \
         { "rakip_pixel_y", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_enemy_detection_status_t, rakip_pixel_y) }, \
         { "model_confidence", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_enemy_detection_status_t, model_confidence) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ENEMY_DETECTION_STATUS { \
    "ENEMY_DETECTION_STATUS", \
    5, \
    {  { "gecen_takip_süresi_milisaniye", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_enemy_detection_status_t, gecen_takip_süresi_milisaniye) }, \
         { "otonom_bool", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_enemy_detection_status_t, otonom_bool) }, \
         { "rakip_pixel_x", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_enemy_detection_status_t, rakip_pixel_x) }, \
         { "rakip_pixel_y", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_enemy_detection_status_t, rakip_pixel_y) }, \
         { "model_confidence", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_enemy_detection_status_t, model_confidence) }, \
         } \
}
#endif

/**
 * @brief Pack a enemy_detection_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param gecen_takip_süresi_milisaniye   milisaniye cinsinden mevcut kilitlenme süresi
 * @param otonom_bool  otonom veya manuel kilitlenme göstergesi (1 yada 0) 
 * @param rakip_pixel_x  kamerada tespit edilen rakibin düşey pixel konumu 
 * @param rakip_pixel_y  kamerada tespit edilen rakibin yatay pixel konumu 
 * @param model_confidence  görüntü işleme modelinin doğruluk oranının 100 ile çarpılmış hali 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_enemy_detection_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t gecen_takip_süresi_milisaniye, uint8_t otonom_bool, uint16_t rakip_pixel_x, uint16_t rakip_pixel_y, uint8_t model_confidence)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, gecen_takip_süresi_milisaniye);
    _mav_put_uint16_t(buf, 2, rakip_pixel_x);
    _mav_put_uint16_t(buf, 4, rakip_pixel_y);
    _mav_put_uint8_t(buf, 6, otonom_bool);
    _mav_put_uint8_t(buf, 7, model_confidence);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_LEN);
#else
    mavlink_enemy_detection_status_t packet;
    packet.gecen_takip_süresi_milisaniye = gecen_takip_süresi_milisaniye;
    packet.rakip_pixel_x = rakip_pixel_x;
    packet.rakip_pixel_y = rakip_pixel_y;
    packet.otonom_bool = otonom_bool;
    packet.model_confidence = model_confidence;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_MIN_LEN, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_LEN, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_CRC);
}

/**
 * @brief Pack a enemy_detection_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param gecen_takip_süresi_milisaniye   milisaniye cinsinden mevcut kilitlenme süresi
 * @param otonom_bool  otonom veya manuel kilitlenme göstergesi (1 yada 0) 
 * @param rakip_pixel_x  kamerada tespit edilen rakibin düşey pixel konumu 
 * @param rakip_pixel_y  kamerada tespit edilen rakibin yatay pixel konumu 
 * @param model_confidence  görüntü işleme modelinin doğruluk oranının 100 ile çarpılmış hali 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_enemy_detection_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint16_t gecen_takip_süresi_milisaniye, uint8_t otonom_bool, uint16_t rakip_pixel_x, uint16_t rakip_pixel_y, uint8_t model_confidence)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, gecen_takip_süresi_milisaniye);
    _mav_put_uint16_t(buf, 2, rakip_pixel_x);
    _mav_put_uint16_t(buf, 4, rakip_pixel_y);
    _mav_put_uint8_t(buf, 6, otonom_bool);
    _mav_put_uint8_t(buf, 7, model_confidence);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_LEN);
#else
    mavlink_enemy_detection_status_t packet;
    packet.gecen_takip_süresi_milisaniye = gecen_takip_süresi_milisaniye;
    packet.rakip_pixel_x = rakip_pixel_x;
    packet.rakip_pixel_y = rakip_pixel_y;
    packet.otonom_bool = otonom_bool;
    packet.model_confidence = model_confidence;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_MIN_LEN, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_LEN, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_MIN_LEN, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_LEN);
#endif
}

/**
 * @brief Pack a enemy_detection_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gecen_takip_süresi_milisaniye   milisaniye cinsinden mevcut kilitlenme süresi
 * @param otonom_bool  otonom veya manuel kilitlenme göstergesi (1 yada 0) 
 * @param rakip_pixel_x  kamerada tespit edilen rakibin düşey pixel konumu 
 * @param rakip_pixel_y  kamerada tespit edilen rakibin yatay pixel konumu 
 * @param model_confidence  görüntü işleme modelinin doğruluk oranının 100 ile çarpılmış hali 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_enemy_detection_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t gecen_takip_süresi_milisaniye,uint8_t otonom_bool,uint16_t rakip_pixel_x,uint16_t rakip_pixel_y,uint8_t model_confidence)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, gecen_takip_süresi_milisaniye);
    _mav_put_uint16_t(buf, 2, rakip_pixel_x);
    _mav_put_uint16_t(buf, 4, rakip_pixel_y);
    _mav_put_uint8_t(buf, 6, otonom_bool);
    _mav_put_uint8_t(buf, 7, model_confidence);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_LEN);
#else
    mavlink_enemy_detection_status_t packet;
    packet.gecen_takip_süresi_milisaniye = gecen_takip_süresi_milisaniye;
    packet.rakip_pixel_x = rakip_pixel_x;
    packet.rakip_pixel_y = rakip_pixel_y;
    packet.otonom_bool = otonom_bool;
    packet.model_confidence = model_confidence;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_MIN_LEN, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_LEN, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_CRC);
}

/**
 * @brief Encode a enemy_detection_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param enemy_detection_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_enemy_detection_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_enemy_detection_status_t* enemy_detection_status)
{
    return mavlink_msg_enemy_detection_status_pack(system_id, component_id, msg, enemy_detection_status->gecen_takip_süresi_milisaniye, enemy_detection_status->otonom_bool, enemy_detection_status->rakip_pixel_x, enemy_detection_status->rakip_pixel_y, enemy_detection_status->model_confidence);
}

/**
 * @brief Encode a enemy_detection_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param enemy_detection_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_enemy_detection_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_enemy_detection_status_t* enemy_detection_status)
{
    return mavlink_msg_enemy_detection_status_pack_chan(system_id, component_id, chan, msg, enemy_detection_status->gecen_takip_süresi_milisaniye, enemy_detection_status->otonom_bool, enemy_detection_status->rakip_pixel_x, enemy_detection_status->rakip_pixel_y, enemy_detection_status->model_confidence);
}

/**
 * @brief Encode a enemy_detection_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param enemy_detection_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_enemy_detection_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_enemy_detection_status_t* enemy_detection_status)
{
    return mavlink_msg_enemy_detection_status_pack_status(system_id, component_id, _status, msg,  enemy_detection_status->gecen_takip_süresi_milisaniye, enemy_detection_status->otonom_bool, enemy_detection_status->rakip_pixel_x, enemy_detection_status->rakip_pixel_y, enemy_detection_status->model_confidence);
}

/**
 * @brief Send a enemy_detection_status message
 * @param chan MAVLink channel to send the message
 *
 * @param gecen_takip_süresi_milisaniye   milisaniye cinsinden mevcut kilitlenme süresi
 * @param otonom_bool  otonom veya manuel kilitlenme göstergesi (1 yada 0) 
 * @param rakip_pixel_x  kamerada tespit edilen rakibin düşey pixel konumu 
 * @param rakip_pixel_y  kamerada tespit edilen rakibin yatay pixel konumu 
 * @param model_confidence  görüntü işleme modelinin doğruluk oranının 100 ile çarpılmış hali 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_enemy_detection_status_send(mavlink_channel_t chan, uint16_t gecen_takip_süresi_milisaniye, uint8_t otonom_bool, uint16_t rakip_pixel_x, uint16_t rakip_pixel_y, uint8_t model_confidence)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, gecen_takip_süresi_milisaniye);
    _mav_put_uint16_t(buf, 2, rakip_pixel_x);
    _mav_put_uint16_t(buf, 4, rakip_pixel_y);
    _mav_put_uint8_t(buf, 6, otonom_bool);
    _mav_put_uint8_t(buf, 7, model_confidence);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS, buf, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_MIN_LEN, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_LEN, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_CRC);
#else
    mavlink_enemy_detection_status_t packet;
    packet.gecen_takip_süresi_milisaniye = gecen_takip_süresi_milisaniye;
    packet.rakip_pixel_x = rakip_pixel_x;
    packet.rakip_pixel_y = rakip_pixel_y;
    packet.otonom_bool = otonom_bool;
    packet.model_confidence = model_confidence;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS, (const char *)&packet, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_MIN_LEN, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_LEN, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_CRC);
#endif
}

/**
 * @brief Send a enemy_detection_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_enemy_detection_status_send_struct(mavlink_channel_t chan, const mavlink_enemy_detection_status_t* enemy_detection_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_enemy_detection_status_send(chan, enemy_detection_status->gecen_takip_süresi_milisaniye, enemy_detection_status->otonom_bool, enemy_detection_status->rakip_pixel_x, enemy_detection_status->rakip_pixel_y, enemy_detection_status->model_confidence);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS, (const char *)enemy_detection_status, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_MIN_LEN, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_LEN, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_enemy_detection_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t gecen_takip_süresi_milisaniye, uint8_t otonom_bool, uint16_t rakip_pixel_x, uint16_t rakip_pixel_y, uint8_t model_confidence)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, gecen_takip_süresi_milisaniye);
    _mav_put_uint16_t(buf, 2, rakip_pixel_x);
    _mav_put_uint16_t(buf, 4, rakip_pixel_y);
    _mav_put_uint8_t(buf, 6, otonom_bool);
    _mav_put_uint8_t(buf, 7, model_confidence);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS, buf, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_MIN_LEN, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_LEN, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_CRC);
#else
    mavlink_enemy_detection_status_t *packet = (mavlink_enemy_detection_status_t *)msgbuf;
    packet->gecen_takip_süresi_milisaniye = gecen_takip_süresi_milisaniye;
    packet->rakip_pixel_x = rakip_pixel_x;
    packet->rakip_pixel_y = rakip_pixel_y;
    packet->otonom_bool = otonom_bool;
    packet->model_confidence = model_confidence;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS, (const char *)packet, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_MIN_LEN, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_LEN, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE ENEMY_DETECTION_STATUS UNPACKING


/**
 * @brief Get field gecen_takip_süresi_milisaniye from enemy_detection_status message
 *
 * @return   milisaniye cinsinden mevcut kilitlenme süresi
 */
static inline uint16_t mavlink_msg_enemy_detection_status_get_gecen_takip_süresi_milisaniye(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field otonom_bool from enemy_detection_status message
 *
 * @return  otonom veya manuel kilitlenme göstergesi (1 yada 0) 
 */
static inline uint8_t mavlink_msg_enemy_detection_status_get_otonom_bool(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field rakip_pixel_x from enemy_detection_status message
 *
 * @return  kamerada tespit edilen rakibin düşey pixel konumu 
 */
static inline uint16_t mavlink_msg_enemy_detection_status_get_rakip_pixel_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field rakip_pixel_y from enemy_detection_status message
 *
 * @return  kamerada tespit edilen rakibin yatay pixel konumu 
 */
static inline uint16_t mavlink_msg_enemy_detection_status_get_rakip_pixel_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field model_confidence from enemy_detection_status message
 *
 * @return  görüntü işleme modelinin doğruluk oranının 100 ile çarpılmış hali 
 */
static inline uint8_t mavlink_msg_enemy_detection_status_get_model_confidence(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Decode a enemy_detection_status message into a struct
 *
 * @param msg The message to decode
 * @param enemy_detection_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_enemy_detection_status_decode(const mavlink_message_t* msg, mavlink_enemy_detection_status_t* enemy_detection_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    enemy_detection_status->gecen_takip_süresi_milisaniye = mavlink_msg_enemy_detection_status_get_gecen_takip_süresi_milisaniye(msg);
    enemy_detection_status->rakip_pixel_x = mavlink_msg_enemy_detection_status_get_rakip_pixel_x(msg);
    enemy_detection_status->rakip_pixel_y = mavlink_msg_enemy_detection_status_get_rakip_pixel_y(msg);
    enemy_detection_status->otonom_bool = mavlink_msg_enemy_detection_status_get_otonom_bool(msg);
    enemy_detection_status->model_confidence = mavlink_msg_enemy_detection_status_get_model_confidence(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_LEN? msg->len : MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_LEN;
        memset(enemy_detection_status, 0, MAVLINK_MSG_ID_ENEMY_DETECTION_STATUS_LEN);
    memcpy(enemy_detection_status, _MAV_PAYLOAD(msg), len);
#endif
}
