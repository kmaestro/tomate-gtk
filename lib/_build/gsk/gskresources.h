#ifndef __RESOURCE__gsk_H__
#define __RESOURCE__gsk_H__

#include <gio/gio.h>

G_GNUC_INTERNAL GResource *_gsk_get_resource (void);

G_GNUC_INTERNAL void _gsk_register_resource (void);
G_GNUC_INTERNAL void _gsk_unregister_resource (void);

#endif
