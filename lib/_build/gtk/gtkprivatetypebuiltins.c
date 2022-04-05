
/* This file is generated by glib-mkenums, do not modify it. This code is licensed under the same license as the containing project. Note that it links to GLib, so must comply with the LGPL linking clauses. */

#include "config.h"
#include "gtk.h"
#include "gtkprivate.h"
#include "gtkprivatetypebuiltins.h"
/* enumerations from "gtkcsstypesprivate.h" */
GType
_gtk_css_affects_get_type (void)
{
  static gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GFlagsValue values[] = {
        { GTK_CSS_AFFECTS_CONTENT, "GTK_CSS_AFFECTS_CONTENT", "content" },
        { GTK_CSS_AFFECTS_BACKGROUND, "GTK_CSS_AFFECTS_BACKGROUND", "background" },
        { GTK_CSS_AFFECTS_BORDER, "GTK_CSS_AFFECTS_BORDER", "border" },
        { GTK_CSS_AFFECTS_TEXT_ATTRS, "GTK_CSS_AFFECTS_TEXT_ATTRS", "text-attrs" },
        { GTK_CSS_AFFECTS_TEXT_SIZE, "GTK_CSS_AFFECTS_TEXT_SIZE", "text-size" },
        { GTK_CSS_AFFECTS_TEXT_CONTENT, "GTK_CSS_AFFECTS_TEXT_CONTENT", "text-content" },
        { GTK_CSS_AFFECTS_ICON_SIZE, "GTK_CSS_AFFECTS_ICON_SIZE", "icon-size" },
        { GTK_CSS_AFFECTS_ICON_TEXTURE, "GTK_CSS_AFFECTS_ICON_TEXTURE", "icon-texture" },
        { GTK_CSS_AFFECTS_ICON_REDRAW, "GTK_CSS_AFFECTS_ICON_REDRAW", "icon-redraw" },
        { GTK_CSS_AFFECTS_ICON_REDRAW_SYMBOLIC, "GTK_CSS_AFFECTS_ICON_REDRAW_SYMBOLIC", "icon-redraw-symbolic" },
        { GTK_CSS_AFFECTS_OUTLINE, "GTK_CSS_AFFECTS_OUTLINE", "outline" },
        { GTK_CSS_AFFECTS_SIZE, "GTK_CSS_AFFECTS_SIZE", "size" },
        { GTK_CSS_AFFECTS_POSTEFFECT, "GTK_CSS_AFFECTS_POSTEFFECT", "posteffect" },
        { GTK_CSS_AFFECTS_TRANSFORM, "GTK_CSS_AFFECTS_TRANSFORM", "transform" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_flags_register_static (g_intern_static_string ("GtkCssAffects"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
/* enumerations from "gtkplacessidebarprivate.h" */
GType
_gtk_places_open_flags_get_type (void)
{
  static gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GFlagsValue values[] = {
        { GTK_PLACES_OPEN_NORMAL, "GTK_PLACES_OPEN_NORMAL", "normal" },
        { GTK_PLACES_OPEN_NEW_TAB, "GTK_PLACES_OPEN_NEW_TAB", "new-tab" },
        { GTK_PLACES_OPEN_NEW_WINDOW, "GTK_PLACES_OPEN_NEW_WINDOW", "new-window" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_flags_register_static (g_intern_static_string ("GtkPlacesOpenFlags"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
_gtk_places_section_type_get_type (void)
{
  static gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { GTK_PLACES_SECTION_INVALID, "GTK_PLACES_SECTION_INVALID", "section-invalid" },
        { GTK_PLACES_SECTION_COMPUTER, "GTK_PLACES_SECTION_COMPUTER", "section-computer" },
        { GTK_PLACES_SECTION_MOUNTS, "GTK_PLACES_SECTION_MOUNTS", "section-mounts" },
        { GTK_PLACES_SECTION_CLOUD, "GTK_PLACES_SECTION_CLOUD", "section-cloud" },
        { GTK_PLACES_SECTION_BOOKMARKS, "GTK_PLACES_SECTION_BOOKMARKS", "section-bookmarks" },
        { GTK_PLACES_SECTION_OTHER_LOCATIONS, "GTK_PLACES_SECTION_OTHER_LOCATIONS", "section-other-locations" },
        { GTK_PLACES_N_SECTIONS, "GTK_PLACES_N_SECTIONS", "n-sections" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("GtkPlacesSectionType"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
GType
_gtk_places_place_type_get_type (void)
{
  static gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { GTK_PLACES_INVALID, "GTK_PLACES_INVALID", "invalid" },
        { GTK_PLACES_BUILT_IN, "GTK_PLACES_BUILT_IN", "built-in" },
        { GTK_PLACES_XDG_DIR, "GTK_PLACES_XDG_DIR", "xdg-dir" },
        { GTK_PLACES_MOUNTED_VOLUME, "GTK_PLACES_MOUNTED_VOLUME", "mounted-volume" },
        { GTK_PLACES_BOOKMARK, "GTK_PLACES_BOOKMARK", "bookmark" },
        { GTK_PLACES_HEADING, "GTK_PLACES_HEADING", "heading" },
        { GTK_PLACES_CONNECT_TO_SERVER, "GTK_PLACES_CONNECT_TO_SERVER", "connect-to-server" },
        { GTK_PLACES_ENTER_LOCATION, "GTK_PLACES_ENTER_LOCATION", "enter-location" },
        { GTK_PLACES_DROP_FEEDBACK, "GTK_PLACES_DROP_FEEDBACK", "drop-feedback" },
        { GTK_PLACES_BOOKMARK_PLACEHOLDER, "GTK_PLACES_BOOKMARK_PLACEHOLDER", "bookmark-placeholder" },
        { GTK_PLACES_OTHER_LOCATIONS, "GTK_PLACES_OTHER_LOCATIONS", "other-locations" },
        { GTK_PLACES_STARRED_LOCATION, "GTK_PLACES_STARRED_LOCATION", "starred-location" },
        { GTK_PLACES_N_PLACES, "GTK_PLACES_N_PLACES", "n-places" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("GtkPlacesPlaceType"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}
/* enumerations from "gtktexthandleprivate.h" */
GType
_gtk_text_handle_role_get_type (void)
{
  static gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { GTK_TEXT_HANDLE_ROLE_CURSOR, "GTK_TEXT_HANDLE_ROLE_CURSOR", "cursor" },
        { GTK_TEXT_HANDLE_ROLE_SELECTION_START, "GTK_TEXT_HANDLE_ROLE_SELECTION_START", "selection-start" },
        { GTK_TEXT_HANDLE_ROLE_SELECTION_END, "GTK_TEXT_HANDLE_ROLE_SELECTION_END", "selection-end" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("GtkTextHandleRole"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}


/* Generated data ends here */

