#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.digit_test"), aligned (8)))
#else
# define SECTION
#endif

static const SECTION union { const guint8 data[175]; const double alignment; void * const ptr;}  _digit_test_resource_data = {
  "\107\126\141\162\151\141\156\164\000\000\000\000\000\000\000\000"
  "\030\000\000\000\164\000\000\000\000\000\000\050\003\000\000\000"
  "\000\000\000\000\000\000\000\000\000\000\000\000\324\265\002\000"
  "\377\377\377\377\164\000\000\000\001\000\114\000\170\000\000\000"
  "\174\000\000\000\063\025\131\242\000\000\000\000\174\000\000\000"
  "\013\000\114\000\210\000\000\000\214\000\000\000\362\152\151\247"
  "\001\000\000\000\214\000\000\000\011\000\166\000\230\000\000\000"
  "\256\000\000\000\057\000\000\000\001\000\000\000\144\151\147\151"
  "\164\137\164\145\163\164\057\000\002\000\000\000\164\145\163\164"
  "\061\056\164\170\164\000\000\000\006\000\000\000\000\000\000\000"
  "\164\145\163\164\061\012\000\000\050\165\165\141\171\051" };

static GStaticResource static_resource = { _digit_test_resource_data.data, sizeof (_digit_test_resource_data.data) - 1 /* nul terminator */, NULL, NULL, NULL };

G_GNUC_INTERNAL
GResource *_digit_test_get_resource (void);
GResource *_digit_test_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}

G_GNUC_INTERNAL
void _digit_test_unregister_resource (void);
void _digit_test_unregister_resource (void)
{
  g_static_resource_fini (&static_resource);
}

G_GNUC_INTERNAL
void _digit_test_register_resource (void);
void _digit_test_register_resource (void)
{
  g_static_resource_init (&static_resource);
}
