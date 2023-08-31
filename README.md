![version](https://img.shields.io/badge/version-19%2B-5682DF)
![platform](https://img.shields.io/static/v1?label=platform&message=mac-intel%20|%20mac-arm%20|%20win-64&color=blue)
[![license](https://img.shields.io/github/license/miyako/4d-plugin-houdini)](LICENSE)
![downloads](https://img.shields.io/github/downloads/miyako/4d-plugin-houdini/total)

# 4d-plugin-houdini
4D plugin implementation of Houdini The Escapist.

### Examples

```4d
success:=Houdini Escape XML (src;dst)
success:=Houdini Unescape HTML (src;dst)
success:=Houdini Escape URI (src;dst)
success:=Houdini Escape URL (src;dst)
success:=Houdini Escape HREF (src;dst)
success:=Houdini Unescape URI (src;dst)
success:=Houdini Unescape URL (src;dst)
success:=Houdini Escape JS (src;dst)
success:=Houdini Unescape JS (src;dst)
```

### Syntax

Parameter|Type|Description
------------|------------|----
src|TEXT|
dst|TEXT|
success|LONGINT|

```4d
success:=Houdini Escape HTML (src;dst;option)
```

Parameter|Type|Description
------------|------------|----
src|TEXT|
dst|TEXT|
option|LONGINT|``Houdini Escape Forward Slash`` or ``0``
success|LONGINT|
