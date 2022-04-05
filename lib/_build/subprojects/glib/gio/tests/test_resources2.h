#ifndef __RESOURCE__g_test2_H__
#define __RESOURCE__g_test2_H__

#include <gio/gio.h>

G_GNUC_INTERNAL GResource *_g_test2_get_resource (void);

G_GNUC_INTERNAL void _g_test2_register_resource (void);
G_GNUC_INTERNAL void _g_test2_unregister_resource (void);

#endif
