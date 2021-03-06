#ifndef CLIB_BULLET_PROTOS_H
#define CLIB_BULLET_PROTOS_H

/*
    *** Automatically generated from 'bullet.conf'. Edits will be lost. ***
    Copyright � 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#ifndef UTILITIY_TAGITEM_H
#   include <utility/tagitem.h>
#endif

#ifndef DISKFONT_GLYPH_H
#   include <diskfont/glyph.h>
#endif

ULONG SetInfo(struct GlyphEngine *glyphEngine, Tag tag1, ...);
ULONG ReleaseInfo(struct GlyphEngine *glyphEngine, Tag tag1, ...);
ULONG ObtainInfo(struct GlyphEngine *glyphEngine, Tag tag1, ...);


AROS_LP0(struct GlyphEngine *, OpenEngine,
        struct Library *, BulletBase, 5, Bullet)

AROS_LP1(void, CloseEngine,
        AROS_LPA(struct GlyphEngine *, glyphEngine, A0),
        struct Library *, BulletBase, 6, Bullet)

AROS_LP2(ULONG, SetInfoA,
        AROS_LPA(struct GlyphEngine *, glyphEngine, A0),
        AROS_LPA(struct TagItem *, tagList, A1),
        struct Library *, BulletBase, 7, Bullet)

AROS_LP2(ULONG, ObtainInfoA,
        AROS_LPA(struct GlyphEngine *, glyphEngine, A0),
        AROS_LPA(struct TagItem *, tagList, A1),
        struct Library *, BulletBase, 8, Bullet)

AROS_LP2(ULONG, ReleaseInfoA,
        AROS_LPA(struct GlyphEngine *, glyphEngine, A0),
        AROS_LPA(struct TagItem *, tagList, A1),
        struct Library *, BulletBase, 9, Bullet)

#endif /* CLIB_BULLET_PROTOS_H */
