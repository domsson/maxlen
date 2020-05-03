#ifndef _MAXLEN_H
#define _MAXLEN_H

/* 
 * Linux file names.
 *
 * For most (very nearly all) file systems, anyway. 
 * Note, you might want to use NAME_MAX instead.
 */
#define MAXLEN_LINUX_FILE_NAME 255


/*
 * XLogical Font Descriptions.
 *
 * Version 1.5 of the XLogical Font Description Conventions says:
 * "The entire font name string must have no more than 255 characters"
 */
#define MAXLEN_XORG_FONT_DESCR 255

/*
 * IRC messages.
 *
 * This includes the actual chat message, as well as prefix, paramters, etc.
 * However, it does not include IRCv3 tags.
 * See RFC-2812, section 2.3.
 */
#define MAXLEN_IRC_MESSAGE 512

/*
 * IRC tags.
 *
 * Tags string as defined by IRCv3.
 */
#define MAXLEN_IRC_TAGS 8191

/*
 * Domain name labels.
 *
 * For example, a subdomain, or domain, or top-level-domain.
 * See RFC-1034.
 */
#define MAXLEN_DOMAIN_LABEL 63

/*
 * Domain string.
 *
 * An entire domain, for example, "www.example.com"
 * See RFC-1034.
 */
#define MAXLEN_DOMAIN 253

/*
 * E-Mail addresses.
 */
#define MAXLEN_EMAIL_ADDRESS 254

/*
 * MIME type.
 *
 * For example, "text/javascript"
 */
#define MAXLEN_MIME_TYPE 255

/*
 * IP address (IPv4).
 *
 * Note, you might want to use INET_ADDSTRLEN instead.
 */
#define MAXLEN_IP4_ADDRESS 15

/*
 * IP address (IPv6).
 *
 * Note, you might want to use INET6_ADDRSTRLEN instead.
 */
#define MAXLEN_IP6_ADDRESS 45

/*
 * YouTube video ID.
 *
 * Note, this might be subject to change.
 */
#define MAXLEN_YOUTUBE_VIDEO_ID 11

/*
 * Twitch.tv user names.
 *
 * Note, this might be subject to change.
 */
#define MAXLEN_TWITCH_USERNAME 25

/*
 * Twitch.tv display names.
 *
 * Note, this might be subject to change.
 */
#define MAXLEN_TWITCH_DISPLAYNAME 25

/*
 * Hexadecimal RGB color notations.
 */
#define MAXLEN_RGB_HEX 7

/*
 * Hexadecimal RGBA color notations.
 */
#define MAXLEN_RGBA_HEX 9

#endif
