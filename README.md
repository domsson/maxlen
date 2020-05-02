# maxlen

This list is an attempt to answer the question _"What's the maximum string length for ...?"_ for as many strings as possible. Note that all numerical values are in bytes (not characters), unless stated otherwise. Also note that many of these numbers can be subject to change; don't hold me responsible if your software breaks. 

## Linux file paths

- arbitrarily long

There is [`PATH_MAX`](https://www.gnu.org/software/libc/manual/html_node/Limits-for-Files.html), but it is problematic, as paths might actually be longer than this limit in practice. See, for example, the articles [PATH_MAX is tricky](https://eklitzke.org/path-max-is-tricky) and [PATH_MAX simply isn't](http://insanecoding.blogspot.com/2007/11/pathmax-simply-isnt.html).

## Linux file names

- `255`

For most file systems, anyway. See [`NAME_MAX`](https://www.gnu.org/software/libc/manual/html_node/Limits-for-Files.html) and the [Wikipedia article on file system comparion](https://en.wikipedia.org/wiki/Comparison_of_file_systems#Limits).

## XLogical Font Description

- `255`

[Version 1.5 of the XLogical Font Description Conventions PDF](https://www.x.org/docs/XLFD/xlfd.pdf) says:

> The entire font name string must have no more than 255 characters.

## IRC messages

- `512` for the message
- `8191` for tags

According to [RFC-2812](https://tools.ietf.org/html/rfc2812#section-2.3), an IRC message (that is, the actual chat message plus meta data, like prefix and parameters) is limited to 512 bytes, which includes the `\r\n`, leaving 510 bytes for the message. With IRC v3, an IRC message can additionally contain [tags](https://ircv3.net/specs/extensions/message-tags.html#size-limit), which can use up to 8191 bytes.

## Domain name labels (subdomain, domain, TLD)

- `63` for each label
- `253` for the entire domain

See [this Wikipedia article](https://en.wikipedia.org/wiki/Domain_Name_System#cite_ref-rfc1034_1-2) or [RFC-1034](https://tools.ietf.org/html/rfc1034).

## MIME type

- `255`

That's 127 for the type, 1 for the slash and another 127 for the subtype, according to [RFC-4288](http://tools.ietf.org/html/rfc4288#section-4.2). Note, however, that the more recent [RFC-6838](http://tools.ietf.org/html/rfc6838#section-4.2) states that both type and subtype _should_ not exceed 64 characters each.

## YouTube video ID

- `11`

According to the answers on [this relevant question on Stack Overflow](https://stackoverflow.com/questions/6180138/whats-the-maximum-length-of-a-youtube-video-id).

## Twitch user and display names

- `25`

According to a [reddit post from 2015](https://www.reddit.com/r/Twitch/comments/32w5b2/username_requirements/) and [BarryCarlyon](https://discuss.dev.twitch.tv/t/max-length-for-user-names-and-display-names/21315), both the user names (nicks) and display names on Twitch can not exceed 25 characters.

## Hex RGB(A) colors

- `7` for RGB
- `9` for RGBA

Easily determined: 2 bytes for each color channel, plus 1 byte for the `#` character.

