4D plugin implementation of Houdini The Escapist.

### Platform

| carbon | cocoa | win32 | win64 |
|:------:|:-----:|:---------:|:---------:|
|<img src="https://cloud.githubusercontent.com/assets/1725068/22371562/1b091f0a-e4db-11e6-8458-8653954a7cce.png" width="24" height="24" />|<img src="https://cloud.githubusercontent.com/assets/1725068/22371562/1b091f0a-e4db-11e6-8458-8653954a7cce.png" width="24" height="24" />|<img src="https://cloud.githubusercontent.com/assets/1725068/22371562/1b091f0a-e4db-11e6-8458-8653954a7cce.png" width="24" height="24" />|<img src="https://cloud.githubusercontent.com/assets/1725068/22371562/1b091f0a-e4db-11e6-8458-8653954a7cce.png" width="24" height="24" />|

### Version

<img src="https://cloud.githubusercontent.com/assets/1725068/18940649/21945000-8645-11e6-86ed-4a0f800e5a73.png" width="32" height="32" /> <img src="https://cloud.githubusercontent.com/assets/1725068/18940648/2192ddba-8645-11e6-864d-6d5692d55717.png" width="32" height="32" />

```
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

Parameter|Type|Description
------------|------------|----
src|TEXT|
dst|TEXT|
success|LONGINT|

```
success:=Houdini Escape HTML (src;dst;option)
```

Parameter|Type|Description
------------|------------|----
src|TEXT|
dst|TEXT|
option|LONGINT|``Houdini Escape Forward Slash`` or ``0``
success|LONGINT|
