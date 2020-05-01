# maxlen

This list is an attempt to answer the question _"What's the maximum length of (some) string?"_ for as many strings as possible.


## Linux file paths

Arbitrarily long.

There are [`PATH_MAX` and `NAME_MAX`](https://stackoverflow.com/questions/3325602/what-is-the-relation-between-path-max-and-name-max-and-how-do-i-obtain), but both are problematic. See, for example, the articles [PATH_MAX is tricky](https://eklitzke.org/path-max-is-tricky) and [PATH_MAX simply isn't](http://insanecoding.blogspot.com/2007/11/pathmax-simply-isnt.html).

## XLogical Font Description

`255`.

[Version 1.5 of the XLogical Font Description Conventions PDF](https://www.x.org/docs/XLFD/xlfd.pdf) says:

> The entire font name string must have no more than 255 characters.

## IRC messages

`512` plus `8191` for tags.

According to [RFC 2812](https://tools.ietf.org/html/rfc2812#section-2.3), an IRC message (that is, the actual chat message plus meta data, like prefix and parameters) is limited to `512` bytes, which includes the `\r\n`, leaving `510` bytes for the message. With IRC v3, an IRC message can additionally contain [tags](https://ircv3.net/specs/extensions/message-tags.html#size-limit), which can use up to `8191` bytes.

## Twitch user and display names

`25`.

According to a [reddit post from 2015](https://www.reddit.com/r/Twitch/comments/32w5b2/username_requirements/) and [BarryCarlyon](https://discuss.dev.twitch.tv/t/max-length-for-user-names-and-display-names/21315), both the user names (nicks) and display names on Twitch can not exceed 25 characters.
