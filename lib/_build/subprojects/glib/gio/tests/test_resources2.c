#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.g_test2"), aligned (8)))
#else
# define SECTION
#endif

static const SECTION union { const guint8 data[181]; const double alignment; void * const ptr;}  _g_test2_resource_data = {
  "\107\126\141\162\151\141\156\164\000\000\000\000\000\000\000\000"
  "\030\000\000\000\164\000\000\000\000\000\000\050\003\000\000\000"
  "\000\000\000\000\001\000\000\000\002\000\000\000\311\064\017\271"
  "\002\000\000\000\164\000\000\000\016\000\114\000\204\000\000\000"
  "\210\000\000\000\110\163\243\120\000\000\000\000\210\000\000\000"
  "\011\000\166\000\230\000\000\000\256\000\000\000\324\265\002\000"
  "\377\377\377\377\256\000\000\000\001\000\114\000\260\000\000\000"
  "\264\000\000\000\155\141\156\165\141\154\137\154\157\141\144\145"
  "\144\057\000\000\001\000\000\000\164\145\163\164\061\056\164\170"
  "\164\000\000\000\000\000\000\000\006\000\000\000\000\000\000\000"
  "\164\145\163\164\061\012\000\000\050\165\165\141\171\051\057\000"
  "\000\000\000\000" };

static GStaticResource static_resource = { _g_test2_resource_data.data, sizeof (_g_test2_resource_data.data) - 1 /* nul terminator */, NULL, NULL, NULL };

G_GNUC_INTERNAL
GResource *_g_test2_get_resource (void);
GResource *_g_test2_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}

G_GNUC_INTERNAL
void _g_test2_unregister_resource (void);
void _g_test2_unregister_resource (void)
{
  g_static_resource_fini (&static_resource);
}

G_GNUC_INTERNAL
void _g_test2_register_resource (void);
void _g_test2_register_resource (void)
{
  g_static_resource_init (&static_resource);
}
