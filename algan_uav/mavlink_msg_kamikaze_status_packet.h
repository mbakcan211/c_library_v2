#pragma once
// MESSAGE KAMIKAZE_STATUS_PACKET PACKING

#define MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET 13010


typedef struct __mavlink_kamikaze_status_packet_t {
 uint16_t kamikaze_baslangic_milisaniye; /*<  kamikaze başlangıç süresinin milisaniyesi*/
 uint16_t kamikaze_bitis_milisaniye; /*<  kamikaze bitiş süresinin milisaniyesi*/
 uint8_t kamikaze_baslangic_saat; /*<   kamikaze başlangıç süresinin saati*/
 uint8_t kamikaze_baslangic_dakika; /*<  kamikaze başlangıç süresinin dakikası */
 uint8_t kamikaze_baslangic_saniye; /*<  kamikaze başlangıç süresinin saniyesi*/
 uint8_t kamikaze_bitis_saat; /*<   kamikaze bitiş süresinin saati*/
 uint8_t kamikaze_bitis_dakika; /*<  kamikaze bitiş süresinin dakikası */
 uint8_t kamikaze_bitis_saniye; /*<  kamikaze bitiş süresinin saniyesi*/
 char qr_metni[20]; /*<  QR Verisinin içeriği / okunamamışsa "invalid_qr" */
} mavlink_kamikaze_status_packet_t;

#define MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_LEN 30
#define MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_MIN_LEN 30
#define MAVLINK_MSG_ID_13010_LEN 30
#define MAVLINK_MSG_ID_13010_MIN_LEN 30

#define MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_CRC 207
#define MAVLINK_MSG_ID_13010_CRC 207

#define MAVLINK_MSG_KAMIKAZE_STATUS_PACKET_FIELD_QR_METNI_LEN 20

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_KAMIKAZE_STATUS_PACKET { \
    13010, \
    "KAMIKAZE_STATUS_PACKET", \
    9, \
    {  { "kamikaze_baslangic_saat", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_kamikaze_status_packet_t, kamikaze_baslangic_saat) }, \
         { "kamikaze_baslangic_dakika", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_kamikaze_status_packet_t, kamikaze_baslangic_dakika) }, \
         { "kamikaze_baslangic_saniye", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_kamikaze_status_packet_t, kamikaze_baslangic_saniye) }, \
         { "kamikaze_baslangic_milisaniye", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_kamikaze_status_packet_t, kamikaze_baslangic_milisaniye) }, \
         { "kamikaze_bitis_saat", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_kamikaze_status_packet_t, kamikaze_bitis_saat) }, \
         { "kamikaze_bitis_dakika", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_kamikaze_status_packet_t, kamikaze_bitis_dakika) }, \
         { "kamikaze_bitis_saniye", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_kamikaze_status_packet_t, kamikaze_bitis_saniye) }, \
         { "kamikaze_bitis_milisaniye", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_kamikaze_status_packet_t, kamikaze_bitis_milisaniye) }, \
         { "qr_metni", NULL, MAVLINK_TYPE_CHAR, 20, 10, offsetof(mavlink_kamikaze_status_packet_t, qr_metni) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_KAMIKAZE_STATUS_PACKET { \
    "KAMIKAZE_STATUS_PACKET", \
    9, \
    {  { "kamikaze_baslangic_saat", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_kamikaze_status_packet_t, kamikaze_baslangic_saat) }, \
         { "kamikaze_baslangic_dakika", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_kamikaze_status_packet_t, kamikaze_baslangic_dakika) }, \
         { "kamikaze_baslangic_saniye", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_kamikaze_status_packet_t, kamikaze_baslangic_saniye) }, \
         { "kamikaze_baslangic_milisaniye", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_kamikaze_status_packet_t, kamikaze_baslangic_milisaniye) }, \
         { "kamikaze_bitis_saat", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_kamikaze_status_packet_t, kamikaze_bitis_saat) }, \
         { "kamikaze_bitis_dakika", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_kamikaze_status_packet_t, kamikaze_bitis_dakika) }, \
         { "kamikaze_bitis_saniye", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_kamikaze_status_packet_t, kamikaze_bitis_saniye) }, \
         { "kamikaze_bitis_milisaniye", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_kamikaze_status_packet_t, kamikaze_bitis_milisaniye) }, \
         { "qr_metni", NULL, MAVLINK_TYPE_CHAR, 20, 10, offsetof(mavlink_kamikaze_status_packet_t, qr_metni) }, \
         } \
}
#endif

/**
 * @brief Pack a kamikaze_status_packet message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param kamikaze_baslangic_saat   kamikaze başlangıç süresinin saati
 * @param kamikaze_baslangic_dakika  kamikaze başlangıç süresinin dakikası 
 * @param kamikaze_baslangic_saniye  kamikaze başlangıç süresinin saniyesi
 * @param kamikaze_baslangic_milisaniye  kamikaze başlangıç süresinin milisaniyesi
 * @param kamikaze_bitis_saat   kamikaze bitiş süresinin saati
 * @param kamikaze_bitis_dakika  kamikaze bitiş süresinin dakikası 
 * @param kamikaze_bitis_saniye  kamikaze bitiş süresinin saniyesi
 * @param kamikaze_bitis_milisaniye  kamikaze bitiş süresinin milisaniyesi
 * @param qr_metni  QR Verisinin içeriği / okunamamışsa "invalid_qr" 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_kamikaze_status_packet_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t kamikaze_baslangic_saat, uint8_t kamikaze_baslangic_dakika, uint8_t kamikaze_baslangic_saniye, uint16_t kamikaze_baslangic_milisaniye, uint8_t kamikaze_bitis_saat, uint8_t kamikaze_bitis_dakika, uint8_t kamikaze_bitis_saniye, uint16_t kamikaze_bitis_milisaniye, const char *qr_metni)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_LEN];
    _mav_put_uint16_t(buf, 0, kamikaze_baslangic_milisaniye);
    _mav_put_uint16_t(buf, 2, kamikaze_bitis_milisaniye);
    _mav_put_uint8_t(buf, 4, kamikaze_baslangic_saat);
    _mav_put_uint8_t(buf, 5, kamikaze_baslangic_dakika);
    _mav_put_uint8_t(buf, 6, kamikaze_baslangic_saniye);
    _mav_put_uint8_t(buf, 7, kamikaze_bitis_saat);
    _mav_put_uint8_t(buf, 8, kamikaze_bitis_dakika);
    _mav_put_uint8_t(buf, 9, kamikaze_bitis_saniye);
    _mav_put_char_array(buf, 10, qr_metni, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_LEN);
#else
    mavlink_kamikaze_status_packet_t packet;
    packet.kamikaze_baslangic_milisaniye = kamikaze_baslangic_milisaniye;
    packet.kamikaze_bitis_milisaniye = kamikaze_bitis_milisaniye;
    packet.kamikaze_baslangic_saat = kamikaze_baslangic_saat;
    packet.kamikaze_baslangic_dakika = kamikaze_baslangic_dakika;
    packet.kamikaze_baslangic_saniye = kamikaze_baslangic_saniye;
    packet.kamikaze_bitis_saat = kamikaze_bitis_saat;
    packet.kamikaze_bitis_dakika = kamikaze_bitis_dakika;
    packet.kamikaze_bitis_saniye = kamikaze_bitis_saniye;
    mav_array_assign_char(packet.qr_metni, qr_metni, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_MIN_LEN, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_LEN, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_CRC);
}

/**
 * @brief Pack a kamikaze_status_packet message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param kamikaze_baslangic_saat   kamikaze başlangıç süresinin saati
 * @param kamikaze_baslangic_dakika  kamikaze başlangıç süresinin dakikası 
 * @param kamikaze_baslangic_saniye  kamikaze başlangıç süresinin saniyesi
 * @param kamikaze_baslangic_milisaniye  kamikaze başlangıç süresinin milisaniyesi
 * @param kamikaze_bitis_saat   kamikaze bitiş süresinin saati
 * @param kamikaze_bitis_dakika  kamikaze bitiş süresinin dakikası 
 * @param kamikaze_bitis_saniye  kamikaze bitiş süresinin saniyesi
 * @param kamikaze_bitis_milisaniye  kamikaze bitiş süresinin milisaniyesi
 * @param qr_metni  QR Verisinin içeriği / okunamamışsa "invalid_qr" 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_kamikaze_status_packet_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t kamikaze_baslangic_saat, uint8_t kamikaze_baslangic_dakika, uint8_t kamikaze_baslangic_saniye, uint16_t kamikaze_baslangic_milisaniye, uint8_t kamikaze_bitis_saat, uint8_t kamikaze_bitis_dakika, uint8_t kamikaze_bitis_saniye, uint16_t kamikaze_bitis_milisaniye, const char *qr_metni)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_LEN];
    _mav_put_uint16_t(buf, 0, kamikaze_baslangic_milisaniye);
    _mav_put_uint16_t(buf, 2, kamikaze_bitis_milisaniye);
    _mav_put_uint8_t(buf, 4, kamikaze_baslangic_saat);
    _mav_put_uint8_t(buf, 5, kamikaze_baslangic_dakika);
    _mav_put_uint8_t(buf, 6, kamikaze_baslangic_saniye);
    _mav_put_uint8_t(buf, 7, kamikaze_bitis_saat);
    _mav_put_uint8_t(buf, 8, kamikaze_bitis_dakika);
    _mav_put_uint8_t(buf, 9, kamikaze_bitis_saniye);
    _mav_put_char_array(buf, 10, qr_metni, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_LEN);
#else
    mavlink_kamikaze_status_packet_t packet;
    packet.kamikaze_baslangic_milisaniye = kamikaze_baslangic_milisaniye;
    packet.kamikaze_bitis_milisaniye = kamikaze_bitis_milisaniye;
    packet.kamikaze_baslangic_saat = kamikaze_baslangic_saat;
    packet.kamikaze_baslangic_dakika = kamikaze_baslangic_dakika;
    packet.kamikaze_baslangic_saniye = kamikaze_baslangic_saniye;
    packet.kamikaze_bitis_saat = kamikaze_bitis_saat;
    packet.kamikaze_bitis_dakika = kamikaze_bitis_dakika;
    packet.kamikaze_bitis_saniye = kamikaze_bitis_saniye;
    mav_array_memcpy(packet.qr_metni, qr_metni, sizeof(char)*20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_MIN_LEN, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_LEN, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_MIN_LEN, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_LEN);
#endif
}

/**
 * @brief Pack a kamikaze_status_packet message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param kamikaze_baslangic_saat   kamikaze başlangıç süresinin saati
 * @param kamikaze_baslangic_dakika  kamikaze başlangıç süresinin dakikası 
 * @param kamikaze_baslangic_saniye  kamikaze başlangıç süresinin saniyesi
 * @param kamikaze_baslangic_milisaniye  kamikaze başlangıç süresinin milisaniyesi
 * @param kamikaze_bitis_saat   kamikaze bitiş süresinin saati
 * @param kamikaze_bitis_dakika  kamikaze bitiş süresinin dakikası 
 * @param kamikaze_bitis_saniye  kamikaze bitiş süresinin saniyesi
 * @param kamikaze_bitis_milisaniye  kamikaze bitiş süresinin milisaniyesi
 * @param qr_metni  QR Verisinin içeriği / okunamamışsa "invalid_qr" 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_kamikaze_status_packet_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t kamikaze_baslangic_saat,uint8_t kamikaze_baslangic_dakika,uint8_t kamikaze_baslangic_saniye,uint16_t kamikaze_baslangic_milisaniye,uint8_t kamikaze_bitis_saat,uint8_t kamikaze_bitis_dakika,uint8_t kamikaze_bitis_saniye,uint16_t kamikaze_bitis_milisaniye,const char *qr_metni)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_LEN];
    _mav_put_uint16_t(buf, 0, kamikaze_baslangic_milisaniye);
    _mav_put_uint16_t(buf, 2, kamikaze_bitis_milisaniye);
    _mav_put_uint8_t(buf, 4, kamikaze_baslangic_saat);
    _mav_put_uint8_t(buf, 5, kamikaze_baslangic_dakika);
    _mav_put_uint8_t(buf, 6, kamikaze_baslangic_saniye);
    _mav_put_uint8_t(buf, 7, kamikaze_bitis_saat);
    _mav_put_uint8_t(buf, 8, kamikaze_bitis_dakika);
    _mav_put_uint8_t(buf, 9, kamikaze_bitis_saniye);
    _mav_put_char_array(buf, 10, qr_metni, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_LEN);
#else
    mavlink_kamikaze_status_packet_t packet;
    packet.kamikaze_baslangic_milisaniye = kamikaze_baslangic_milisaniye;
    packet.kamikaze_bitis_milisaniye = kamikaze_bitis_milisaniye;
    packet.kamikaze_baslangic_saat = kamikaze_baslangic_saat;
    packet.kamikaze_baslangic_dakika = kamikaze_baslangic_dakika;
    packet.kamikaze_baslangic_saniye = kamikaze_baslangic_saniye;
    packet.kamikaze_bitis_saat = kamikaze_bitis_saat;
    packet.kamikaze_bitis_dakika = kamikaze_bitis_dakika;
    packet.kamikaze_bitis_saniye = kamikaze_bitis_saniye;
    mav_array_assign_char(packet.qr_metni, qr_metni, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_MIN_LEN, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_LEN, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_CRC);
}

/**
 * @brief Encode a kamikaze_status_packet struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param kamikaze_status_packet C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_kamikaze_status_packet_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_kamikaze_status_packet_t* kamikaze_status_packet)
{
    return mavlink_msg_kamikaze_status_packet_pack(system_id, component_id, msg, kamikaze_status_packet->kamikaze_baslangic_saat, kamikaze_status_packet->kamikaze_baslangic_dakika, kamikaze_status_packet->kamikaze_baslangic_saniye, kamikaze_status_packet->kamikaze_baslangic_milisaniye, kamikaze_status_packet->kamikaze_bitis_saat, kamikaze_status_packet->kamikaze_bitis_dakika, kamikaze_status_packet->kamikaze_bitis_saniye, kamikaze_status_packet->kamikaze_bitis_milisaniye, kamikaze_status_packet->qr_metni);
}

/**
 * @brief Encode a kamikaze_status_packet struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param kamikaze_status_packet C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_kamikaze_status_packet_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_kamikaze_status_packet_t* kamikaze_status_packet)
{
    return mavlink_msg_kamikaze_status_packet_pack_chan(system_id, component_id, chan, msg, kamikaze_status_packet->kamikaze_baslangic_saat, kamikaze_status_packet->kamikaze_baslangic_dakika, kamikaze_status_packet->kamikaze_baslangic_saniye, kamikaze_status_packet->kamikaze_baslangic_milisaniye, kamikaze_status_packet->kamikaze_bitis_saat, kamikaze_status_packet->kamikaze_bitis_dakika, kamikaze_status_packet->kamikaze_bitis_saniye, kamikaze_status_packet->kamikaze_bitis_milisaniye, kamikaze_status_packet->qr_metni);
}

/**
 * @brief Encode a kamikaze_status_packet struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param kamikaze_status_packet C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_kamikaze_status_packet_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_kamikaze_status_packet_t* kamikaze_status_packet)
{
    return mavlink_msg_kamikaze_status_packet_pack_status(system_id, component_id, _status, msg,  kamikaze_status_packet->kamikaze_baslangic_saat, kamikaze_status_packet->kamikaze_baslangic_dakika, kamikaze_status_packet->kamikaze_baslangic_saniye, kamikaze_status_packet->kamikaze_baslangic_milisaniye, kamikaze_status_packet->kamikaze_bitis_saat, kamikaze_status_packet->kamikaze_bitis_dakika, kamikaze_status_packet->kamikaze_bitis_saniye, kamikaze_status_packet->kamikaze_bitis_milisaniye, kamikaze_status_packet->qr_metni);
}

/**
 * @brief Send a kamikaze_status_packet message
 * @param chan MAVLink channel to send the message
 *
 * @param kamikaze_baslangic_saat   kamikaze başlangıç süresinin saati
 * @param kamikaze_baslangic_dakika  kamikaze başlangıç süresinin dakikası 
 * @param kamikaze_baslangic_saniye  kamikaze başlangıç süresinin saniyesi
 * @param kamikaze_baslangic_milisaniye  kamikaze başlangıç süresinin milisaniyesi
 * @param kamikaze_bitis_saat   kamikaze bitiş süresinin saati
 * @param kamikaze_bitis_dakika  kamikaze bitiş süresinin dakikası 
 * @param kamikaze_bitis_saniye  kamikaze bitiş süresinin saniyesi
 * @param kamikaze_bitis_milisaniye  kamikaze bitiş süresinin milisaniyesi
 * @param qr_metni  QR Verisinin içeriği / okunamamışsa "invalid_qr" 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_kamikaze_status_packet_send(mavlink_channel_t chan, uint8_t kamikaze_baslangic_saat, uint8_t kamikaze_baslangic_dakika, uint8_t kamikaze_baslangic_saniye, uint16_t kamikaze_baslangic_milisaniye, uint8_t kamikaze_bitis_saat, uint8_t kamikaze_bitis_dakika, uint8_t kamikaze_bitis_saniye, uint16_t kamikaze_bitis_milisaniye, const char *qr_metni)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_LEN];
    _mav_put_uint16_t(buf, 0, kamikaze_baslangic_milisaniye);
    _mav_put_uint16_t(buf, 2, kamikaze_bitis_milisaniye);
    _mav_put_uint8_t(buf, 4, kamikaze_baslangic_saat);
    _mav_put_uint8_t(buf, 5, kamikaze_baslangic_dakika);
    _mav_put_uint8_t(buf, 6, kamikaze_baslangic_saniye);
    _mav_put_uint8_t(buf, 7, kamikaze_bitis_saat);
    _mav_put_uint8_t(buf, 8, kamikaze_bitis_dakika);
    _mav_put_uint8_t(buf, 9, kamikaze_bitis_saniye);
    _mav_put_char_array(buf, 10, qr_metni, 20);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET, buf, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_MIN_LEN, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_LEN, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_CRC);
#else
    mavlink_kamikaze_status_packet_t packet;
    packet.kamikaze_baslangic_milisaniye = kamikaze_baslangic_milisaniye;
    packet.kamikaze_bitis_milisaniye = kamikaze_bitis_milisaniye;
    packet.kamikaze_baslangic_saat = kamikaze_baslangic_saat;
    packet.kamikaze_baslangic_dakika = kamikaze_baslangic_dakika;
    packet.kamikaze_baslangic_saniye = kamikaze_baslangic_saniye;
    packet.kamikaze_bitis_saat = kamikaze_bitis_saat;
    packet.kamikaze_bitis_dakika = kamikaze_bitis_dakika;
    packet.kamikaze_bitis_saniye = kamikaze_bitis_saniye;
    mav_array_assign_char(packet.qr_metni, qr_metni, 20);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET, (const char *)&packet, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_MIN_LEN, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_LEN, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_CRC);
#endif
}

/**
 * @brief Send a kamikaze_status_packet message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_kamikaze_status_packet_send_struct(mavlink_channel_t chan, const mavlink_kamikaze_status_packet_t* kamikaze_status_packet)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_kamikaze_status_packet_send(chan, kamikaze_status_packet->kamikaze_baslangic_saat, kamikaze_status_packet->kamikaze_baslangic_dakika, kamikaze_status_packet->kamikaze_baslangic_saniye, kamikaze_status_packet->kamikaze_baslangic_milisaniye, kamikaze_status_packet->kamikaze_bitis_saat, kamikaze_status_packet->kamikaze_bitis_dakika, kamikaze_status_packet->kamikaze_bitis_saniye, kamikaze_status_packet->kamikaze_bitis_milisaniye, kamikaze_status_packet->qr_metni);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET, (const char *)kamikaze_status_packet, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_MIN_LEN, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_LEN, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_CRC);
#endif
}

#if MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_kamikaze_status_packet_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t kamikaze_baslangic_saat, uint8_t kamikaze_baslangic_dakika, uint8_t kamikaze_baslangic_saniye, uint16_t kamikaze_baslangic_milisaniye, uint8_t kamikaze_bitis_saat, uint8_t kamikaze_bitis_dakika, uint8_t kamikaze_bitis_saniye, uint16_t kamikaze_bitis_milisaniye, const char *qr_metni)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, kamikaze_baslangic_milisaniye);
    _mav_put_uint16_t(buf, 2, kamikaze_bitis_milisaniye);
    _mav_put_uint8_t(buf, 4, kamikaze_baslangic_saat);
    _mav_put_uint8_t(buf, 5, kamikaze_baslangic_dakika);
    _mav_put_uint8_t(buf, 6, kamikaze_baslangic_saniye);
    _mav_put_uint8_t(buf, 7, kamikaze_bitis_saat);
    _mav_put_uint8_t(buf, 8, kamikaze_bitis_dakika);
    _mav_put_uint8_t(buf, 9, kamikaze_bitis_saniye);
    _mav_put_char_array(buf, 10, qr_metni, 20);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET, buf, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_MIN_LEN, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_LEN, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_CRC);
#else
    mavlink_kamikaze_status_packet_t *packet = (mavlink_kamikaze_status_packet_t *)msgbuf;
    packet->kamikaze_baslangic_milisaniye = kamikaze_baslangic_milisaniye;
    packet->kamikaze_bitis_milisaniye = kamikaze_bitis_milisaniye;
    packet->kamikaze_baslangic_saat = kamikaze_baslangic_saat;
    packet->kamikaze_baslangic_dakika = kamikaze_baslangic_dakika;
    packet->kamikaze_baslangic_saniye = kamikaze_baslangic_saniye;
    packet->kamikaze_bitis_saat = kamikaze_bitis_saat;
    packet->kamikaze_bitis_dakika = kamikaze_bitis_dakika;
    packet->kamikaze_bitis_saniye = kamikaze_bitis_saniye;
    mav_array_assign_char(packet->qr_metni, qr_metni, 20);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET, (const char *)packet, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_MIN_LEN, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_LEN, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_CRC);
#endif
}
#endif

#endif

// MESSAGE KAMIKAZE_STATUS_PACKET UNPACKING


/**
 * @brief Get field kamikaze_baslangic_saat from kamikaze_status_packet message
 *
 * @return   kamikaze başlangıç süresinin saati
 */
static inline uint8_t mavlink_msg_kamikaze_status_packet_get_kamikaze_baslangic_saat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field kamikaze_baslangic_dakika from kamikaze_status_packet message
 *
 * @return  kamikaze başlangıç süresinin dakikası 
 */
static inline uint8_t mavlink_msg_kamikaze_status_packet_get_kamikaze_baslangic_dakika(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field kamikaze_baslangic_saniye from kamikaze_status_packet message
 *
 * @return  kamikaze başlangıç süresinin saniyesi
 */
static inline uint8_t mavlink_msg_kamikaze_status_packet_get_kamikaze_baslangic_saniye(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field kamikaze_baslangic_milisaniye from kamikaze_status_packet message
 *
 * @return  kamikaze başlangıç süresinin milisaniyesi
 */
static inline uint16_t mavlink_msg_kamikaze_status_packet_get_kamikaze_baslangic_milisaniye(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field kamikaze_bitis_saat from kamikaze_status_packet message
 *
 * @return   kamikaze bitiş süresinin saati
 */
static inline uint8_t mavlink_msg_kamikaze_status_packet_get_kamikaze_bitis_saat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Get field kamikaze_bitis_dakika from kamikaze_status_packet message
 *
 * @return  kamikaze bitiş süresinin dakikası 
 */
static inline uint8_t mavlink_msg_kamikaze_status_packet_get_kamikaze_bitis_dakika(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field kamikaze_bitis_saniye from kamikaze_status_packet message
 *
 * @return  kamikaze bitiş süresinin saniyesi
 */
static inline uint8_t mavlink_msg_kamikaze_status_packet_get_kamikaze_bitis_saniye(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field kamikaze_bitis_milisaniye from kamikaze_status_packet message
 *
 * @return  kamikaze bitiş süresinin milisaniyesi
 */
static inline uint16_t mavlink_msg_kamikaze_status_packet_get_kamikaze_bitis_milisaniye(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field qr_metni from kamikaze_status_packet message
 *
 * @return  QR Verisinin içeriği / okunamamışsa "invalid_qr" 
 */
static inline uint16_t mavlink_msg_kamikaze_status_packet_get_qr_metni(const mavlink_message_t* msg, char *qr_metni)
{
    return _MAV_RETURN_char_array(msg, qr_metni, 20,  10);
}

/**
 * @brief Decode a kamikaze_status_packet message into a struct
 *
 * @param msg The message to decode
 * @param kamikaze_status_packet C-struct to decode the message contents into
 */
static inline void mavlink_msg_kamikaze_status_packet_decode(const mavlink_message_t* msg, mavlink_kamikaze_status_packet_t* kamikaze_status_packet)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    kamikaze_status_packet->kamikaze_baslangic_milisaniye = mavlink_msg_kamikaze_status_packet_get_kamikaze_baslangic_milisaniye(msg);
    kamikaze_status_packet->kamikaze_bitis_milisaniye = mavlink_msg_kamikaze_status_packet_get_kamikaze_bitis_milisaniye(msg);
    kamikaze_status_packet->kamikaze_baslangic_saat = mavlink_msg_kamikaze_status_packet_get_kamikaze_baslangic_saat(msg);
    kamikaze_status_packet->kamikaze_baslangic_dakika = mavlink_msg_kamikaze_status_packet_get_kamikaze_baslangic_dakika(msg);
    kamikaze_status_packet->kamikaze_baslangic_saniye = mavlink_msg_kamikaze_status_packet_get_kamikaze_baslangic_saniye(msg);
    kamikaze_status_packet->kamikaze_bitis_saat = mavlink_msg_kamikaze_status_packet_get_kamikaze_bitis_saat(msg);
    kamikaze_status_packet->kamikaze_bitis_dakika = mavlink_msg_kamikaze_status_packet_get_kamikaze_bitis_dakika(msg);
    kamikaze_status_packet->kamikaze_bitis_saniye = mavlink_msg_kamikaze_status_packet_get_kamikaze_bitis_saniye(msg);
    mavlink_msg_kamikaze_status_packet_get_qr_metni(msg, kamikaze_status_packet->qr_metni);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_LEN? msg->len : MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_LEN;
        memset(kamikaze_status_packet, 0, MAVLINK_MSG_ID_KAMIKAZE_STATUS_PACKET_LEN);
    memcpy(kamikaze_status_packet, _MAV_PAYLOAD(msg), len);
#endif
}
