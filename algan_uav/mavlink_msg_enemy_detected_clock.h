#pragma once
// MESSAGE ENEMY_DETECTED_CLOCK PACKING

#define MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK 13007


typedef struct __mavlink_enemy_detected_clock_t {
 uint16_t kilitlenme_milisaniye; /*<  kilitlenme bitiş süresinin milisaniyesi*/
 uint8_t kilitlenme_saat; /*<   kilitlenme bitiş süresinin saati*/
 uint8_t kilitlenme_dakika; /*<  kilitlenme bitiş süresinin dakikası */
 uint8_t kilitlenme_saniye; /*<  kilitlenme bitiş süresinin saniyesi*/
 uint8_t otonom_kilitlenme; /*<  kilitlenme otonom olma durumu*/
} mavlink_enemy_detected_clock_t;

#define MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_LEN 6
#define MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_MIN_LEN 6
#define MAVLINK_MSG_ID_13007_LEN 6
#define MAVLINK_MSG_ID_13007_MIN_LEN 6

#define MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_CRC 65
#define MAVLINK_MSG_ID_13007_CRC 65



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ENEMY_DETECTED_CLOCK { \
    13007, \
    "ENEMY_DETECTED_CLOCK", \
    5, \
    {  { "kilitlenme_saat", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_enemy_detected_clock_t, kilitlenme_saat) }, \
         { "kilitlenme_dakika", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_enemy_detected_clock_t, kilitlenme_dakika) }, \
         { "kilitlenme_saniye", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_enemy_detected_clock_t, kilitlenme_saniye) }, \
         { "kilitlenme_milisaniye", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_enemy_detected_clock_t, kilitlenme_milisaniye) }, \
         { "otonom_kilitlenme", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_enemy_detected_clock_t, otonom_kilitlenme) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ENEMY_DETECTED_CLOCK { \
    "ENEMY_DETECTED_CLOCK", \
    5, \
    {  { "kilitlenme_saat", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_enemy_detected_clock_t, kilitlenme_saat) }, \
         { "kilitlenme_dakika", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_enemy_detected_clock_t, kilitlenme_dakika) }, \
         { "kilitlenme_saniye", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_enemy_detected_clock_t, kilitlenme_saniye) }, \
         { "kilitlenme_milisaniye", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_enemy_detected_clock_t, kilitlenme_milisaniye) }, \
         { "otonom_kilitlenme", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_enemy_detected_clock_t, otonom_kilitlenme) }, \
         } \
}
#endif

/**
 * @brief Pack a enemy_detected_clock message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param kilitlenme_saat   kilitlenme bitiş süresinin saati
 * @param kilitlenme_dakika  kilitlenme bitiş süresinin dakikası 
 * @param kilitlenme_saniye  kilitlenme bitiş süresinin saniyesi
 * @param kilitlenme_milisaniye  kilitlenme bitiş süresinin milisaniyesi
 * @param otonom_kilitlenme  kilitlenme otonom olma durumu
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_enemy_detected_clock_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t kilitlenme_saat, uint8_t kilitlenme_dakika, uint8_t kilitlenme_saniye, uint16_t kilitlenme_milisaniye, uint8_t otonom_kilitlenme)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_LEN];
    _mav_put_uint16_t(buf, 0, kilitlenme_milisaniye);
    _mav_put_uint8_t(buf, 2, kilitlenme_saat);
    _mav_put_uint8_t(buf, 3, kilitlenme_dakika);
    _mav_put_uint8_t(buf, 4, kilitlenme_saniye);
    _mav_put_uint8_t(buf, 5, otonom_kilitlenme);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_LEN);
#else
    mavlink_enemy_detected_clock_t packet;
    packet.kilitlenme_milisaniye = kilitlenme_milisaniye;
    packet.kilitlenme_saat = kilitlenme_saat;
    packet.kilitlenme_dakika = kilitlenme_dakika;
    packet.kilitlenme_saniye = kilitlenme_saniye;
    packet.otonom_kilitlenme = otonom_kilitlenme;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_MIN_LEN, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_LEN, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_CRC);
}

/**
 * @brief Pack a enemy_detected_clock message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param kilitlenme_saat   kilitlenme bitiş süresinin saati
 * @param kilitlenme_dakika  kilitlenme bitiş süresinin dakikası 
 * @param kilitlenme_saniye  kilitlenme bitiş süresinin saniyesi
 * @param kilitlenme_milisaniye  kilitlenme bitiş süresinin milisaniyesi
 * @param otonom_kilitlenme  kilitlenme otonom olma durumu
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_enemy_detected_clock_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t kilitlenme_saat, uint8_t kilitlenme_dakika, uint8_t kilitlenme_saniye, uint16_t kilitlenme_milisaniye, uint8_t otonom_kilitlenme)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_LEN];
    _mav_put_uint16_t(buf, 0, kilitlenme_milisaniye);
    _mav_put_uint8_t(buf, 2, kilitlenme_saat);
    _mav_put_uint8_t(buf, 3, kilitlenme_dakika);
    _mav_put_uint8_t(buf, 4, kilitlenme_saniye);
    _mav_put_uint8_t(buf, 5, otonom_kilitlenme);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_LEN);
#else
    mavlink_enemy_detected_clock_t packet;
    packet.kilitlenme_milisaniye = kilitlenme_milisaniye;
    packet.kilitlenme_saat = kilitlenme_saat;
    packet.kilitlenme_dakika = kilitlenme_dakika;
    packet.kilitlenme_saniye = kilitlenme_saniye;
    packet.otonom_kilitlenme = otonom_kilitlenme;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_MIN_LEN, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_LEN, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_MIN_LEN, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_LEN);
#endif
}

/**
 * @brief Pack a enemy_detected_clock message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param kilitlenme_saat   kilitlenme bitiş süresinin saati
 * @param kilitlenme_dakika  kilitlenme bitiş süresinin dakikası 
 * @param kilitlenme_saniye  kilitlenme bitiş süresinin saniyesi
 * @param kilitlenme_milisaniye  kilitlenme bitiş süresinin milisaniyesi
 * @param otonom_kilitlenme  kilitlenme otonom olma durumu
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_enemy_detected_clock_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t kilitlenme_saat,uint8_t kilitlenme_dakika,uint8_t kilitlenme_saniye,uint16_t kilitlenme_milisaniye,uint8_t otonom_kilitlenme)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_LEN];
    _mav_put_uint16_t(buf, 0, kilitlenme_milisaniye);
    _mav_put_uint8_t(buf, 2, kilitlenme_saat);
    _mav_put_uint8_t(buf, 3, kilitlenme_dakika);
    _mav_put_uint8_t(buf, 4, kilitlenme_saniye);
    _mav_put_uint8_t(buf, 5, otonom_kilitlenme);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_LEN);
#else
    mavlink_enemy_detected_clock_t packet;
    packet.kilitlenme_milisaniye = kilitlenme_milisaniye;
    packet.kilitlenme_saat = kilitlenme_saat;
    packet.kilitlenme_dakika = kilitlenme_dakika;
    packet.kilitlenme_saniye = kilitlenme_saniye;
    packet.otonom_kilitlenme = otonom_kilitlenme;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_MIN_LEN, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_LEN, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_CRC);
}

/**
 * @brief Encode a enemy_detected_clock struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param enemy_detected_clock C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_enemy_detected_clock_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_enemy_detected_clock_t* enemy_detected_clock)
{
    return mavlink_msg_enemy_detected_clock_pack(system_id, component_id, msg, enemy_detected_clock->kilitlenme_saat, enemy_detected_clock->kilitlenme_dakika, enemy_detected_clock->kilitlenme_saniye, enemy_detected_clock->kilitlenme_milisaniye, enemy_detected_clock->otonom_kilitlenme);
}

/**
 * @brief Encode a enemy_detected_clock struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param enemy_detected_clock C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_enemy_detected_clock_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_enemy_detected_clock_t* enemy_detected_clock)
{
    return mavlink_msg_enemy_detected_clock_pack_chan(system_id, component_id, chan, msg, enemy_detected_clock->kilitlenme_saat, enemy_detected_clock->kilitlenme_dakika, enemy_detected_clock->kilitlenme_saniye, enemy_detected_clock->kilitlenme_milisaniye, enemy_detected_clock->otonom_kilitlenme);
}

/**
 * @brief Encode a enemy_detected_clock struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param enemy_detected_clock C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_enemy_detected_clock_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_enemy_detected_clock_t* enemy_detected_clock)
{
    return mavlink_msg_enemy_detected_clock_pack_status(system_id, component_id, _status, msg,  enemy_detected_clock->kilitlenme_saat, enemy_detected_clock->kilitlenme_dakika, enemy_detected_clock->kilitlenme_saniye, enemy_detected_clock->kilitlenme_milisaniye, enemy_detected_clock->otonom_kilitlenme);
}

/**
 * @brief Send a enemy_detected_clock message
 * @param chan MAVLink channel to send the message
 *
 * @param kilitlenme_saat   kilitlenme bitiş süresinin saati
 * @param kilitlenme_dakika  kilitlenme bitiş süresinin dakikası 
 * @param kilitlenme_saniye  kilitlenme bitiş süresinin saniyesi
 * @param kilitlenme_milisaniye  kilitlenme bitiş süresinin milisaniyesi
 * @param otonom_kilitlenme  kilitlenme otonom olma durumu
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_enemy_detected_clock_send(mavlink_channel_t chan, uint8_t kilitlenme_saat, uint8_t kilitlenme_dakika, uint8_t kilitlenme_saniye, uint16_t kilitlenme_milisaniye, uint8_t otonom_kilitlenme)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_LEN];
    _mav_put_uint16_t(buf, 0, kilitlenme_milisaniye);
    _mav_put_uint8_t(buf, 2, kilitlenme_saat);
    _mav_put_uint8_t(buf, 3, kilitlenme_dakika);
    _mav_put_uint8_t(buf, 4, kilitlenme_saniye);
    _mav_put_uint8_t(buf, 5, otonom_kilitlenme);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK, buf, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_MIN_LEN, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_LEN, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_CRC);
#else
    mavlink_enemy_detected_clock_t packet;
    packet.kilitlenme_milisaniye = kilitlenme_milisaniye;
    packet.kilitlenme_saat = kilitlenme_saat;
    packet.kilitlenme_dakika = kilitlenme_dakika;
    packet.kilitlenme_saniye = kilitlenme_saniye;
    packet.otonom_kilitlenme = otonom_kilitlenme;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK, (const char *)&packet, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_MIN_LEN, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_LEN, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_CRC);
#endif
}

/**
 * @brief Send a enemy_detected_clock message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_enemy_detected_clock_send_struct(mavlink_channel_t chan, const mavlink_enemy_detected_clock_t* enemy_detected_clock)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_enemy_detected_clock_send(chan, enemy_detected_clock->kilitlenme_saat, enemy_detected_clock->kilitlenme_dakika, enemy_detected_clock->kilitlenme_saniye, enemy_detected_clock->kilitlenme_milisaniye, enemy_detected_clock->otonom_kilitlenme);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK, (const char *)enemy_detected_clock, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_MIN_LEN, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_LEN, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_CRC);
#endif
}

#if MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_enemy_detected_clock_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t kilitlenme_saat, uint8_t kilitlenme_dakika, uint8_t kilitlenme_saniye, uint16_t kilitlenme_milisaniye, uint8_t otonom_kilitlenme)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, kilitlenme_milisaniye);
    _mav_put_uint8_t(buf, 2, kilitlenme_saat);
    _mav_put_uint8_t(buf, 3, kilitlenme_dakika);
    _mav_put_uint8_t(buf, 4, kilitlenme_saniye);
    _mav_put_uint8_t(buf, 5, otonom_kilitlenme);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK, buf, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_MIN_LEN, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_LEN, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_CRC);
#else
    mavlink_enemy_detected_clock_t *packet = (mavlink_enemy_detected_clock_t *)msgbuf;
    packet->kilitlenme_milisaniye = kilitlenme_milisaniye;
    packet->kilitlenme_saat = kilitlenme_saat;
    packet->kilitlenme_dakika = kilitlenme_dakika;
    packet->kilitlenme_saniye = kilitlenme_saniye;
    packet->otonom_kilitlenme = otonom_kilitlenme;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK, (const char *)packet, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_MIN_LEN, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_LEN, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_CRC);
#endif
}
#endif

#endif

// MESSAGE ENEMY_DETECTED_CLOCK UNPACKING


/**
 * @brief Get field kilitlenme_saat from enemy_detected_clock message
 *
 * @return   kilitlenme bitiş süresinin saati
 */
static inline uint8_t mavlink_msg_enemy_detected_clock_get_kilitlenme_saat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field kilitlenme_dakika from enemy_detected_clock message
 *
 * @return  kilitlenme bitiş süresinin dakikası 
 */
static inline uint8_t mavlink_msg_enemy_detected_clock_get_kilitlenme_dakika(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field kilitlenme_saniye from enemy_detected_clock message
 *
 * @return  kilitlenme bitiş süresinin saniyesi
 */
static inline uint8_t mavlink_msg_enemy_detected_clock_get_kilitlenme_saniye(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field kilitlenme_milisaniye from enemy_detected_clock message
 *
 * @return  kilitlenme bitiş süresinin milisaniyesi
 */
static inline uint16_t mavlink_msg_enemy_detected_clock_get_kilitlenme_milisaniye(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field otonom_kilitlenme from enemy_detected_clock message
 *
 * @return  kilitlenme otonom olma durumu
 */
static inline uint8_t mavlink_msg_enemy_detected_clock_get_otonom_kilitlenme(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Decode a enemy_detected_clock message into a struct
 *
 * @param msg The message to decode
 * @param enemy_detected_clock C-struct to decode the message contents into
 */
static inline void mavlink_msg_enemy_detected_clock_decode(const mavlink_message_t* msg, mavlink_enemy_detected_clock_t* enemy_detected_clock)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    enemy_detected_clock->kilitlenme_milisaniye = mavlink_msg_enemy_detected_clock_get_kilitlenme_milisaniye(msg);
    enemy_detected_clock->kilitlenme_saat = mavlink_msg_enemy_detected_clock_get_kilitlenme_saat(msg);
    enemy_detected_clock->kilitlenme_dakika = mavlink_msg_enemy_detected_clock_get_kilitlenme_dakika(msg);
    enemy_detected_clock->kilitlenme_saniye = mavlink_msg_enemy_detected_clock_get_kilitlenme_saniye(msg);
    enemy_detected_clock->otonom_kilitlenme = mavlink_msg_enemy_detected_clock_get_otonom_kilitlenme(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_LEN? msg->len : MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_LEN;
        memset(enemy_detected_clock, 0, MAVLINK_MSG_ID_ENEMY_DETECTED_CLOCK_LEN);
    memcpy(enemy_detected_clock, _MAV_PAYLOAD(msg), len);
#endif
}
