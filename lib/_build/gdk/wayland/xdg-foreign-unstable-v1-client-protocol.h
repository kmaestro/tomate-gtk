/* Generated by wayland-scanner 1.18.0 */

#ifndef XDG_FOREIGN_UNSTABLE_V1_CLIENT_PROTOCOL_H
#define XDG_FOREIGN_UNSTABLE_V1_CLIENT_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include "wayland-client.h"

#ifdef  __cplusplus
extern "C" {
#endif

/**
 * @page page_xdg_foreign_unstable_v1 The xdg_foreign_unstable_v1 protocol
 * Protocol for exporting xdg surface handles
 *
 * @section page_desc_xdg_foreign_unstable_v1 Description
 *
 * This protocol specifies a way for making it possible to reference a surface
 * of a different client. With such a reference, a client can, by using the
 * interfaces provided by this protocol, manipulate the relationship between
 * its own surfaces and the surface of some other client. For example, stack
 * some of its own surface above the other clients surface.
 *
 * In order for a client A to get a reference of a surface of client B, client
 * B must first export its surface using xdg_exporter.export. Upon doing this,
 * client B will receive a handle (a unique string) that it may share with
 * client A in some way (for example D-Bus). After client A has received the
 * handle from client B, it may use xdg_importer.import to create a reference
 * to the surface client B just exported. See the corresponding requests for
 * details.
 *
 * A possible use case for this is out-of-process dialogs. For example when a
 * sandboxed client without file system access needs the user to select a file
 * on the file system, given sandbox environment support, it can export its
 * surface, passing the exported surface handle to an unsandboxed process that
 * can show a file browser dialog and stack it above the sandboxed client's
 * surface.
 *
 * Warning! The protocol described in this file is experimental and backward
 * incompatible changes may be made. Backward compatible changes may be added
 * together with the corresponding interface version bump. Backward
 * incompatible changes are done by bumping the version number in the protocol
 * and interface names and resetting the interface version. Once the protocol
 * is to be declared stable, the 'z' prefix and the version number in the
 * protocol and interface names are removed and the interface version number is
 * reset.
 *
 * @section page_ifaces_xdg_foreign_unstable_v1 Interfaces
 * - @subpage page_iface_zxdg_exporter_v1 - interface for exporting surfaces
 * - @subpage page_iface_zxdg_importer_v1 - interface for importing surfaces
 * - @subpage page_iface_zxdg_exported_v1 - an exported surface handle
 * - @subpage page_iface_zxdg_imported_v1 - an imported surface handle
 * @section page_copyright_xdg_foreign_unstable_v1 Copyright
 * <pre>
 *
 * Copyright © 2015-2016 Red Hat Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 * </pre>
 */
struct wl_surface;
struct zxdg_exported_v1;
struct zxdg_exporter_v1;
struct zxdg_imported_v1;
struct zxdg_importer_v1;

/**
 * @page page_iface_zxdg_exporter_v1 zxdg_exporter_v1
 * @section page_iface_zxdg_exporter_v1_desc Description
 *
 * A global interface used for exporting surfaces that can later be imported
 * using xdg_importer.
 * @section page_iface_zxdg_exporter_v1_api API
 * See @ref iface_zxdg_exporter_v1.
 */
/**
 * @defgroup iface_zxdg_exporter_v1 The zxdg_exporter_v1 interface
 *
 * A global interface used for exporting surfaces that can later be imported
 * using xdg_importer.
 */
extern const struct wl_interface zxdg_exporter_v1_interface;
/**
 * @page page_iface_zxdg_importer_v1 zxdg_importer_v1
 * @section page_iface_zxdg_importer_v1_desc Description
 *
 * A global interface used for importing surfaces exported by xdg_exporter.
 * With this interface, a client can create a reference to a surface of
 * another client.
 * @section page_iface_zxdg_importer_v1_api API
 * See @ref iface_zxdg_importer_v1.
 */
/**
 * @defgroup iface_zxdg_importer_v1 The zxdg_importer_v1 interface
 *
 * A global interface used for importing surfaces exported by xdg_exporter.
 * With this interface, a client can create a reference to a surface of
 * another client.
 */
extern const struct wl_interface zxdg_importer_v1_interface;
/**
 * @page page_iface_zxdg_exported_v1 zxdg_exported_v1
 * @section page_iface_zxdg_exported_v1_desc Description
 *
 * A xdg_exported object represents an exported reference to a surface. The
 * exported surface may be referenced as long as the xdg_exported object not
 * destroyed. Destroying the xdg_exported invalidates any relationship the
 * importer may have established using xdg_imported.
 * @section page_iface_zxdg_exported_v1_api API
 * See @ref iface_zxdg_exported_v1.
 */
/**
 * @defgroup iface_zxdg_exported_v1 The zxdg_exported_v1 interface
 *
 * A xdg_exported object represents an exported reference to a surface. The
 * exported surface may be referenced as long as the xdg_exported object not
 * destroyed. Destroying the xdg_exported invalidates any relationship the
 * importer may have established using xdg_imported.
 */
extern const struct wl_interface zxdg_exported_v1_interface;
/**
 * @page page_iface_zxdg_imported_v1 zxdg_imported_v1
 * @section page_iface_zxdg_imported_v1_desc Description
 *
 * A xdg_imported object represents an imported reference to surface exported
 * by some client. A client can use this interface to manipulate
 * relationships between its own surfaces and the imported surface.
 * @section page_iface_zxdg_imported_v1_api API
 * See @ref iface_zxdg_imported_v1.
 */
/**
 * @defgroup iface_zxdg_imported_v1 The zxdg_imported_v1 interface
 *
 * A xdg_imported object represents an imported reference to surface exported
 * by some client. A client can use this interface to manipulate
 * relationships between its own surfaces and the imported surface.
 */
extern const struct wl_interface zxdg_imported_v1_interface;

#define ZXDG_EXPORTER_V1_DESTROY 0
#define ZXDG_EXPORTER_V1_EXPORT 1


/**
 * @ingroup iface_zxdg_exporter_v1
 */
#define ZXDG_EXPORTER_V1_DESTROY_SINCE_VERSION 1
/**
 * @ingroup iface_zxdg_exporter_v1
 */
#define ZXDG_EXPORTER_V1_EXPORT_SINCE_VERSION 1

/** @ingroup iface_zxdg_exporter_v1 */
static inline void
zxdg_exporter_v1_set_user_data(struct zxdg_exporter_v1 *zxdg_exporter_v1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zxdg_exporter_v1, user_data);
}

/** @ingroup iface_zxdg_exporter_v1 */
static inline void *
zxdg_exporter_v1_get_user_data(struct zxdg_exporter_v1 *zxdg_exporter_v1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zxdg_exporter_v1);
}

static inline uint32_t
zxdg_exporter_v1_get_version(struct zxdg_exporter_v1 *zxdg_exporter_v1)
{
	return wl_proxy_get_version((struct wl_proxy *) zxdg_exporter_v1);
}

/**
 * @ingroup iface_zxdg_exporter_v1
 *
 * Notify the compositor that the xdg_exporter object will no longer be
 * used.
 */
static inline void
zxdg_exporter_v1_destroy(struct zxdg_exporter_v1 *zxdg_exporter_v1)
{
	wl_proxy_marshal((struct wl_proxy *) zxdg_exporter_v1,
			 ZXDG_EXPORTER_V1_DESTROY);

	wl_proxy_destroy((struct wl_proxy *) zxdg_exporter_v1);
}

/**
 * @ingroup iface_zxdg_exporter_v1
 *
 * The export request exports the passed surface so that it can later be
 * imported via xdg_importer. When called, a new xdg_exported object will
 * be created and xdg_exported.handle will be sent immediately. See the
 * corresponding interface and event for details.
 *
 * A surface may be exported multiple times, and each exported handle may
 * be used to create a xdg_imported multiple times. Only xdg_surface
 * surfaces may be exported.
 */
static inline struct zxdg_exported_v1 *
zxdg_exporter_v1_export(struct zxdg_exporter_v1 *zxdg_exporter_v1, struct wl_surface *surface)
{
	struct wl_proxy *id;

	id = wl_proxy_marshal_constructor((struct wl_proxy *) zxdg_exporter_v1,
			 ZXDG_EXPORTER_V1_EXPORT, &zxdg_exported_v1_interface, NULL, surface);

	return (struct zxdg_exported_v1 *) id;
}

#define ZXDG_IMPORTER_V1_DESTROY 0
#define ZXDG_IMPORTER_V1_IMPORT 1


/**
 * @ingroup iface_zxdg_importer_v1
 */
#define ZXDG_IMPORTER_V1_DESTROY_SINCE_VERSION 1
/**
 * @ingroup iface_zxdg_importer_v1
 */
#define ZXDG_IMPORTER_V1_IMPORT_SINCE_VERSION 1

/** @ingroup iface_zxdg_importer_v1 */
static inline void
zxdg_importer_v1_set_user_data(struct zxdg_importer_v1 *zxdg_importer_v1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zxdg_importer_v1, user_data);
}

/** @ingroup iface_zxdg_importer_v1 */
static inline void *
zxdg_importer_v1_get_user_data(struct zxdg_importer_v1 *zxdg_importer_v1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zxdg_importer_v1);
}

static inline uint32_t
zxdg_importer_v1_get_version(struct zxdg_importer_v1 *zxdg_importer_v1)
{
	return wl_proxy_get_version((struct wl_proxy *) zxdg_importer_v1);
}

/**
 * @ingroup iface_zxdg_importer_v1
 *
 * Notify the compositor that the xdg_importer object will no longer be
 * used.
 */
static inline void
zxdg_importer_v1_destroy(struct zxdg_importer_v1 *zxdg_importer_v1)
{
	wl_proxy_marshal((struct wl_proxy *) zxdg_importer_v1,
			 ZXDG_IMPORTER_V1_DESTROY);

	wl_proxy_destroy((struct wl_proxy *) zxdg_importer_v1);
}

/**
 * @ingroup iface_zxdg_importer_v1
 *
 * The import request imports a surface from any client given a handle
 * retrieved by exporting said surface using xdg_exporter.export. When
 * called, a new xdg_imported object will be created. This new object
 * represents the imported surface, and the importing client can
 * manipulate its relationship using it. See xdg_imported for details.
 */
static inline struct zxdg_imported_v1 *
zxdg_importer_v1_import(struct zxdg_importer_v1 *zxdg_importer_v1, const char *handle)
{
	struct wl_proxy *id;

	id = wl_proxy_marshal_constructor((struct wl_proxy *) zxdg_importer_v1,
			 ZXDG_IMPORTER_V1_IMPORT, &zxdg_imported_v1_interface, NULL, handle);

	return (struct zxdg_imported_v1 *) id;
}

/**
 * @ingroup iface_zxdg_exported_v1
 * @struct zxdg_exported_v1_listener
 */
struct zxdg_exported_v1_listener {
	/**
	 * the exported surface handle
	 *
	 * The handle event contains the unique handle of this exported
	 * surface reference. It may be shared with any client, which then
	 * can use it to import the surface by calling xdg_importer.import.
	 * A handle may be used to import the surface multiple times.
	 * @param handle the exported surface handle
	 */
	void (*handle)(void *data,
		       struct zxdg_exported_v1 *zxdg_exported_v1,
		       const char *handle);
};

/**
 * @ingroup iface_zxdg_exported_v1
 */
static inline int
zxdg_exported_v1_add_listener(struct zxdg_exported_v1 *zxdg_exported_v1,
			      const struct zxdg_exported_v1_listener *listener, void *data)
{
	return wl_proxy_add_listener((struct wl_proxy *) zxdg_exported_v1,
				     (void (**)(void)) listener, data);
}

#define ZXDG_EXPORTED_V1_DESTROY 0

/**
 * @ingroup iface_zxdg_exported_v1
 */
#define ZXDG_EXPORTED_V1_HANDLE_SINCE_VERSION 1

/**
 * @ingroup iface_zxdg_exported_v1
 */
#define ZXDG_EXPORTED_V1_DESTROY_SINCE_VERSION 1

/** @ingroup iface_zxdg_exported_v1 */
static inline void
zxdg_exported_v1_set_user_data(struct zxdg_exported_v1 *zxdg_exported_v1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zxdg_exported_v1, user_data);
}

/** @ingroup iface_zxdg_exported_v1 */
static inline void *
zxdg_exported_v1_get_user_data(struct zxdg_exported_v1 *zxdg_exported_v1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zxdg_exported_v1);
}

static inline uint32_t
zxdg_exported_v1_get_version(struct zxdg_exported_v1 *zxdg_exported_v1)
{
	return wl_proxy_get_version((struct wl_proxy *) zxdg_exported_v1);
}

/**
 * @ingroup iface_zxdg_exported_v1
 *
 * Revoke the previously exported surface. This invalidates any
 * relationship the importer may have set up using the xdg_imported created
 * given the handle sent via xdg_exported.handle.
 */
static inline void
zxdg_exported_v1_destroy(struct zxdg_exported_v1 *zxdg_exported_v1)
{
	wl_proxy_marshal((struct wl_proxy *) zxdg_exported_v1,
			 ZXDG_EXPORTED_V1_DESTROY);

	wl_proxy_destroy((struct wl_proxy *) zxdg_exported_v1);
}

/**
 * @ingroup iface_zxdg_imported_v1
 * @struct zxdg_imported_v1_listener
 */
struct zxdg_imported_v1_listener {
	/**
	 * the imported surface handle has been destroyed
	 *
	 * The imported surface handle has been destroyed and any
	 * relationship set up has been invalidated. This may happen for
	 * various reasons, for example if the exported surface or the
	 * exported surface handle has been destroyed, if the handle used
	 * for importing was invalid.
	 */
	void (*destroyed)(void *data,
			  struct zxdg_imported_v1 *zxdg_imported_v1);
};

/**
 * @ingroup iface_zxdg_imported_v1
 */
static inline int
zxdg_imported_v1_add_listener(struct zxdg_imported_v1 *zxdg_imported_v1,
			      const struct zxdg_imported_v1_listener *listener, void *data)
{
	return wl_proxy_add_listener((struct wl_proxy *) zxdg_imported_v1,
				     (void (**)(void)) listener, data);
}

#define ZXDG_IMPORTED_V1_DESTROY 0
#define ZXDG_IMPORTED_V1_SET_PARENT_OF 1

/**
 * @ingroup iface_zxdg_imported_v1
 */
#define ZXDG_IMPORTED_V1_DESTROYED_SINCE_VERSION 1

/**
 * @ingroup iface_zxdg_imported_v1
 */
#define ZXDG_IMPORTED_V1_DESTROY_SINCE_VERSION 1
/**
 * @ingroup iface_zxdg_imported_v1
 */
#define ZXDG_IMPORTED_V1_SET_PARENT_OF_SINCE_VERSION 1

/** @ingroup iface_zxdg_imported_v1 */
static inline void
zxdg_imported_v1_set_user_data(struct zxdg_imported_v1 *zxdg_imported_v1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zxdg_imported_v1, user_data);
}

/** @ingroup iface_zxdg_imported_v1 */
static inline void *
zxdg_imported_v1_get_user_data(struct zxdg_imported_v1 *zxdg_imported_v1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zxdg_imported_v1);
}

static inline uint32_t
zxdg_imported_v1_get_version(struct zxdg_imported_v1 *zxdg_imported_v1)
{
	return wl_proxy_get_version((struct wl_proxy *) zxdg_imported_v1);
}

/**
 * @ingroup iface_zxdg_imported_v1
 *
 * Notify the compositor that it will no longer use the xdg_imported
 * object. Any relationship that may have been set up will at this point
 * be invalidated.
 */
static inline void
zxdg_imported_v1_destroy(struct zxdg_imported_v1 *zxdg_imported_v1)
{
	wl_proxy_marshal((struct wl_proxy *) zxdg_imported_v1,
			 ZXDG_IMPORTED_V1_DESTROY);

	wl_proxy_destroy((struct wl_proxy *) zxdg_imported_v1);
}

/**
 * @ingroup iface_zxdg_imported_v1
 *
 * Set the imported surface as the parent of some surface of the client.
 * The passed surface must be a toplevel xdg_surface. Calling this function
 * sets up a surface to surface relation with the same stacking and positioning
 * semantics as xdg_surface.set_parent.
 */
static inline void
zxdg_imported_v1_set_parent_of(struct zxdg_imported_v1 *zxdg_imported_v1, struct wl_surface *surface)
{
	wl_proxy_marshal((struct wl_proxy *) zxdg_imported_v1,
			 ZXDG_IMPORTED_V1_SET_PARENT_OF, surface);
}

#ifdef  __cplusplus
}
#endif

#endif
