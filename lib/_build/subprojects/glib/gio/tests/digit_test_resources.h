#ifndef __RESOURCE__digit_test_H__
#define __RESOURCE__digit_test_H__

#include <gio/gio.h>

G_GNUC_INTERNAL GResource *_digit_test_get_resource (void);

G_GNUC_INTERNAL void _digit_test_register_resource (void);
G_GNUC_INTERNAL void _digit_test_unregister_resource (void);

#endif
