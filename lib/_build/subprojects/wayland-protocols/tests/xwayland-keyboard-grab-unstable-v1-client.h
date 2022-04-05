/* Generated by wayland-scanner 1.18.0 */

#ifndef XWAYLAND_KEYBOARD_GRAB_UNSTABLE_V1_CLIENT_PROTOCOL_H
#define XWAYLAND_KEYBOARD_GRAB_UNSTABLE_V1_CLIENT_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include "wayland-client.h"

#ifdef  __cplusplus
extern "C" {
#endif

/**
 * @page page_xwayland_keyboard_grab_unstable_v1 The xwayland_keyboard_grab_unstable_v1 protocol
 * Protocol for grabbing the keyboard from Xwayland
 *
 * @section page_desc_xwayland_keyboard_grab_unstable_v1 Description
 *
 * This protocol is application-specific to meet the needs of the X11
 * protocol through Xwayland. It provides a way for Xwayland to request
 * all keyboard events to be forwarded to a surface even when the
 * surface does not have keyboard focus.
 *
 * In the X11 protocol, a client may request an "active grab" on the
 * keyboard. On success, all key events are reported only to the
 * grabbing X11 client. For details, see XGrabKeyboard(3).
 *
 * The core Wayland protocol does not have a notion of an active
 * keyboard grab. When running in Xwayland, X11 applications may
 * acquire an active grab inside Xwayland but that cannot be translated
 * to the Wayland compositor who may set the input focus to some other
 * surface. In doing so, it breaks the X11 client assumption that all
 * key events are reported to the grabbing client.
 *
 * This protocol specifies a way for Xwayland to request all keyboard
 * be directed to the given surface. The protocol does not guarantee
 * that the compositor will honor this request and it does not
 * prescribe user interfaces on how to handle the respond. For example,
 * a compositor may inform the user that all key events are now
 * forwarded to the given client surface, or it may ask the user for
 * permission to do so.
 *
 * Compositors are required to restrict access to this application
 * specific protocol to Xwayland alone.
 *
 * Warning! The protocol described in this file is experimental and
 * backward incompatible changes may be made. Backward compatible
 * changes may be added together with the corresponding interface
 * version bump.
 * Backward incompatible changes are done by bumping the version
 * number in the protocol and interface names and resetting the
 * interface version. Once the protocol is to be declared stable,
 * the 'z' prefix and the version number in the protocol and
 * interface names are removed and the interface version number is
 * reset.
 *
 * @section page_ifaces_xwayland_keyboard_grab_unstable_v1 Interfaces
 * - @subpage page_iface_zwp_xwayland_keyboard_grab_manager_v1 - context object for keyboard grab manager
 * - @subpage page_iface_zwp_xwayland_keyboard_grab_v1 - interface for grabbing the keyboard
 * @section page_copyright_xwayland_keyboard_grab_unstable_v1 Copyright
 * <pre>
 *
 * Copyright © 2017 Red Hat Inc.
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
struct wl_seat;
struct wl_surface;
struct zwp_xwayland_keyboard_grab_manager_v1;
struct zwp_xwayland_keyboard_grab_v1;

/**
 * @page page_iface_zwp_xwayland_keyboard_grab_manager_v1 zwp_xwayland_keyboard_grab_manager_v1
 * @section page_iface_zwp_xwayland_keyboard_grab_manager_v1_desc Description
 *
 * A global interface used for grabbing the keyboard.
 * @section page_iface_zwp_xwayland_keyboard_grab_manager_v1_api API
 * See @ref iface_zwp_xwayland_keyboard_grab_manager_v1.
 */
/**
 * @defgroup iface_zwp_xwayland_keyboard_grab_manager_v1 The zwp_xwayland_keyboard_grab_manager_v1 interface
 *
 * A global interface used for grabbing the keyboard.
 */
extern const struct wl_interface zwp_xwayland_keyboard_grab_manager_v1_interface;
/**
 * @page page_iface_zwp_xwayland_keyboard_grab_v1 zwp_xwayland_keyboard_grab_v1
 * @section page_iface_zwp_xwayland_keyboard_grab_v1_desc Description
 *
 * A global interface used for grabbing the keyboard.
 * @section page_iface_zwp_xwayland_keyboard_grab_v1_api API
 * See @ref iface_zwp_xwayland_keyboard_grab_v1.
 */
/**
 * @defgroup iface_zwp_xwayland_keyboard_grab_v1 The zwp_xwayland_keyboard_grab_v1 interface
 *
 * A global interface used for grabbing the keyboard.
 */
extern const struct wl_interface zwp_xwayland_keyboard_grab_v1_interface;

#define ZWP_XWAYLAND_KEYBOARD_GRAB_MANAGER_V1_DESTROY 0
#define ZWP_XWAYLAND_KEYBOARD_GRAB_MANAGER_V1_GRAB_KEYBOARD 1


/**
 * @ingroup iface_zwp_xwayland_keyboard_grab_manager_v1
 */
#define ZWP_XWAYLAND_KEYBOARD_GRAB_MANAGER_V1_DESTROY_SINCE_VERSION 1
/**
 * @ingroup iface_zwp_xwayland_keyboard_grab_manager_v1
 */
#define ZWP_XWAYLAND_KEYBOARD_GRAB_MANAGER_V1_GRAB_KEYBOARD_SINCE_VERSION 1

/** @ingroup iface_zwp_xwayland_keyboard_grab_manager_v1 */
static inline void
zwp_xwayland_keyboard_grab_manager_v1_set_user_data(struct zwp_xwayland_keyboard_grab_manager_v1 *zwp_xwayland_keyboard_grab_manager_v1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zwp_xwayland_keyboard_grab_manager_v1, user_data);
}

/** @ingroup iface_zwp_xwayland_keyboard_grab_manager_v1 */
static inline void *
zwp_xwayland_keyboard_grab_manager_v1_get_user_data(struct zwp_xwayland_keyboard_grab_manager_v1 *zwp_xwayland_keyboard_grab_manager_v1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zwp_xwayland_keyboard_grab_manager_v1);
}

static inline uint32_t
zwp_xwayland_keyboard_grab_manager_v1_get_version(struct zwp_xwayland_keyboard_grab_manager_v1 *zwp_xwayland_keyboard_grab_manager_v1)
{
	return wl_proxy_get_version((struct wl_proxy *) zwp_xwayland_keyboard_grab_manager_v1);
}

/**
 * @ingroup iface_zwp_xwayland_keyboard_grab_manager_v1
 *
 * Destroy the keyboard grab manager.
 */
static inline void
zwp_xwayland_keyboard_grab_manager_v1_destroy(struct zwp_xwayland_keyboard_grab_manager_v1 *zwp_xwayland_keyboard_grab_manager_v1)
{
	wl_proxy_marshal((struct wl_proxy *) zwp_xwayland_keyboard_grab_manager_v1,
			 ZWP_XWAYLAND_KEYBOARD_GRAB_MANAGER_V1_DESTROY);

	wl_proxy_destroy((struct wl_proxy *) zwp_xwayland_keyboard_grab_manager_v1);
}

/**
 * @ingroup iface_zwp_xwayland_keyboard_grab_manager_v1
 *
 * The grab_keyboard request asks for a grab of the keyboard, forcing
 * the keyboard focus for the given seat upon the given surface.
 *
 * The protocol provides no guarantee that the grab is ever satisfied,
 * and does not require the compositor to send an error if the grab
 * cannot ever be satisfied. It is thus possible to request a keyboard
 * grab that will never be effective.
 *
 * The protocol:
 *
 * * does not guarantee that the grab itself is applied for a surface,
 * the grab request may be silently ignored by the compositor,
 * * does not guarantee that any events are sent to this client even
 * if the grab is applied to a surface,
 * * does not guarantee that events sent to this client are exhaustive,
 * a compositor may filter some events for its own consumption,
 * * does not guarantee that events sent to this client are continuous,
 * a compositor may change and reroute keyboard events while the grab
 * is nominally active.
 */
static inline struct zwp_xwayland_keyboard_grab_v1 *
zwp_xwayland_keyboard_grab_manager_v1_grab_keyboard(struct zwp_xwayland_keyboard_grab_manager_v1 *zwp_xwayland_keyboard_grab_manager_v1, struct wl_surface *surface, struct wl_seat *seat)
{
	struct wl_proxy *id;

	id = wl_proxy_marshal_constructor((struct wl_proxy *) zwp_xwayland_keyboard_grab_manager_v1,
			 ZWP_XWAYLAND_KEYBOARD_GRAB_MANAGER_V1_GRAB_KEYBOARD, &zwp_xwayland_keyboard_grab_v1_interface, NULL, surface, seat);

	return (struct zwp_xwayland_keyboard_grab_v1 *) id;
}

#define ZWP_XWAYLAND_KEYBOARD_GRAB_V1_DESTROY 0


/**
 * @ingroup iface_zwp_xwayland_keyboard_grab_v1
 */
#define ZWP_XWAYLAND_KEYBOARD_GRAB_V1_DESTROY_SINCE_VERSION 1

/** @ingroup iface_zwp_xwayland_keyboard_grab_v1 */
static inline void
zwp_xwayland_keyboard_grab_v1_set_user_data(struct zwp_xwayland_keyboard_grab_v1 *zwp_xwayland_keyboard_grab_v1, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) zwp_xwayland_keyboard_grab_v1, user_data);
}

/** @ingroup iface_zwp_xwayland_keyboard_grab_v1 */
static inline void *
zwp_xwayland_keyboard_grab_v1_get_user_data(struct zwp_xwayland_keyboard_grab_v1 *zwp_xwayland_keyboard_grab_v1)
{
	return wl_proxy_get_user_data((struct wl_proxy *) zwp_xwayland_keyboard_grab_v1);
}

static inline uint32_t
zwp_xwayland_keyboard_grab_v1_get_version(struct zwp_xwayland_keyboard_grab_v1 *zwp_xwayland_keyboard_grab_v1)
{
	return wl_proxy_get_version((struct wl_proxy *) zwp_xwayland_keyboard_grab_v1);
}

/**
 * @ingroup iface_zwp_xwayland_keyboard_grab_v1
 *
 * Destroy the grabbed keyboard object. If applicable, the compositor
 * will ungrab the keyboard.
 */
static inline void
zwp_xwayland_keyboard_grab_v1_destroy(struct zwp_xwayland_keyboard_grab_v1 *zwp_xwayland_keyboard_grab_v1)
{
	wl_proxy_marshal((struct wl_proxy *) zwp_xwayland_keyboard_grab_v1,
			 ZWP_XWAYLAND_KEYBOARD_GRAB_V1_DESTROY);

	wl_proxy_destroy((struct wl_proxy *) zwp_xwayland_keyboard_grab_v1);
}

#ifdef  __cplusplus
}
#endif

#endif
