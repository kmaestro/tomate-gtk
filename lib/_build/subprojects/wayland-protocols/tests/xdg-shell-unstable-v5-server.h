/* Generated by wayland-scanner 1.18.0 */

#ifndef XDG_SHELL_UNSTABLE_V5_SERVER_PROTOCOL_H
#define XDG_SHELL_UNSTABLE_V5_SERVER_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include "wayland-server.h"

#ifdef  __cplusplus
extern "C" {
#endif

struct wl_client;
struct wl_resource;

/**
 * @page page_xdg_shell_unstable_v5 The xdg_shell_unstable_v5 protocol
 * @section page_ifaces_xdg_shell_unstable_v5 Interfaces
 * - @subpage page_iface_xdg_shell - create desktop-style surfaces
 * - @subpage page_iface_xdg_surface - A desktop window
 * - @subpage page_iface_xdg_popup - short-lived, popup surfaces for menus
 * @section page_copyright_xdg_shell_unstable_v5 Copyright
 * <pre>
 *
 * Copyright © 2008-2013 Kristian Høgsberg
 * Copyright © 2013      Rafael Antognolli
 * Copyright © 2013      Jasper St. Pierre
 * Copyright © 2010-2013 Intel Corporation
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
struct wl_output;
struct wl_seat;
struct wl_surface;
struct xdg_popup;
struct xdg_shell;
struct xdg_surface;

/**
 * @page page_iface_xdg_shell xdg_shell
 * @section page_iface_xdg_shell_desc Description
 *
 * xdg_shell allows clients to turn a wl_surface into a "real window"
 * which can be dragged, resized, stacked, and moved around by the
 * user. Everything about this interface is suited towards traditional
 * desktop environments.
 * @section page_iface_xdg_shell_api API
 * See @ref iface_xdg_shell.
 */
/**
 * @defgroup iface_xdg_shell The xdg_shell interface
 *
 * xdg_shell allows clients to turn a wl_surface into a "real window"
 * which can be dragged, resized, stacked, and moved around by the
 * user. Everything about this interface is suited towards traditional
 * desktop environments.
 */
extern const struct wl_interface xdg_shell_interface;
/**
 * @page page_iface_xdg_surface xdg_surface
 * @section page_iface_xdg_surface_desc Description
 *
 * An interface that may be implemented by a wl_surface, for
 * implementations that provide a desktop-style user interface.
 *
 * It provides requests to treat surfaces like windows, allowing to set
 * properties like maximized, fullscreen, minimized, and to move and resize
 * them, and associate metadata like title and app id.
 *
 * The client must call wl_surface.commit on the corresponding wl_surface
 * for the xdg_surface state to take effect. Prior to committing the new
 * state, it can set up initial configuration, such as maximizing or setting
 * a window geometry.
 *
 * Even without attaching a buffer the compositor must respond to initial
 * committed configuration, for instance sending a configure event with
 * expected window geometry if the client maximized its surface during
 * initialization.
 *
 * For a surface to be mapped by the compositor the client must have
 * committed both an xdg_surface state and a buffer.
 * @section page_iface_xdg_surface_api API
 * See @ref iface_xdg_surface.
 */
/**
 * @defgroup iface_xdg_surface The xdg_surface interface
 *
 * An interface that may be implemented by a wl_surface, for
 * implementations that provide a desktop-style user interface.
 *
 * It provides requests to treat surfaces like windows, allowing to set
 * properties like maximized, fullscreen, minimized, and to move and resize
 * them, and associate metadata like title and app id.
 *
 * The client must call wl_surface.commit on the corresponding wl_surface
 * for the xdg_surface state to take effect. Prior to committing the new
 * state, it can set up initial configuration, such as maximizing or setting
 * a window geometry.
 *
 * Even without attaching a buffer the compositor must respond to initial
 * committed configuration, for instance sending a configure event with
 * expected window geometry if the client maximized its surface during
 * initialization.
 *
 * For a surface to be mapped by the compositor the client must have
 * committed both an xdg_surface state and a buffer.
 */
extern const struct wl_interface xdg_surface_interface;
/**
 * @page page_iface_xdg_popup xdg_popup
 * @section page_iface_xdg_popup_desc Description
 *
 * A popup surface is a short-lived, temporary surface that can be
 * used to implement menus. It takes an explicit grab on the surface
 * that will be dismissed when the user dismisses the popup. This can
 * be done by the user clicking outside the surface, using the keyboard,
 * or even locking the screen through closing the lid or a timeout.
 *
 * When the popup is dismissed, a popup_done event will be sent out,
 * and at the same time the surface will be unmapped. The xdg_popup
 * object is now inert and cannot be reactivated, so clients should
 * destroy it. Explicitly destroying the xdg_popup object will also
 * dismiss the popup and unmap the surface.
 *
 * Clients will receive events for all their surfaces during this
 * grab (which is an "owner-events" grab in X11 parlance). This is
 * done so that users can navigate through submenus and other
 * "nested" popup windows without having to dismiss the topmost
 * popup.
 *
 * Clients that want to dismiss the popup when another surface of
 * their own is clicked should dismiss the popup using the destroy
 * request.
 *
 * The parent surface must have either an xdg_surface or xdg_popup
 * role.
 *
 * Specifying an xdg_popup for the parent means that the popups are
 * nested, with this popup now being the topmost popup. Nested
 * popups must be destroyed in the reverse order they were created
 * in, e.g. the only popup you are allowed to destroy at all times
 * is the topmost one.
 *
 * If there is an existing popup when creating a new popup, the
 * parent must be the current topmost popup.
 *
 * A parent surface must be mapped before the new popup is mapped.
 *
 * When compositors choose to dismiss a popup, they will likely
 * dismiss every nested popup as well. When a compositor dismisses
 * popups, it will follow the same dismissing order as required
 * from the client.
 *
 * The x and y arguments passed when creating the popup object specify
 * where the top left of the popup should be placed, relative to the
 * local surface coordinates of the parent surface. See
 * xdg_shell.get_xdg_popup.
 *
 * The client must call wl_surface.commit on the corresponding wl_surface
 * for the xdg_popup state to take effect.
 *
 * For a surface to be mapped by the compositor the client must have
 * committed both the xdg_popup state and a buffer.
 * @section page_iface_xdg_popup_api API
 * See @ref iface_xdg_popup.
 */
/**
 * @defgroup iface_xdg_popup The xdg_popup interface
 *
 * A popup surface is a short-lived, temporary surface that can be
 * used to implement menus. It takes an explicit grab on the surface
 * that will be dismissed when the user dismisses the popup. This can
 * be done by the user clicking outside the surface, using the keyboard,
 * or even locking the screen through closing the lid or a timeout.
 *
 * When the popup is dismissed, a popup_done event will be sent out,
 * and at the same time the surface will be unmapped. The xdg_popup
 * object is now inert and cannot be reactivated, so clients should
 * destroy it. Explicitly destroying the xdg_popup object will also
 * dismiss the popup and unmap the surface.
 *
 * Clients will receive events for all their surfaces during this
 * grab (which is an "owner-events" grab in X11 parlance). This is
 * done so that users can navigate through submenus and other
 * "nested" popup windows without having to dismiss the topmost
 * popup.
 *
 * Clients that want to dismiss the popup when another surface of
 * their own is clicked should dismiss the popup using the destroy
 * request.
 *
 * The parent surface must have either an xdg_surface or xdg_popup
 * role.
 *
 * Specifying an xdg_popup for the parent means that the popups are
 * nested, with this popup now being the topmost popup. Nested
 * popups must be destroyed in the reverse order they were created
 * in, e.g. the only popup you are allowed to destroy at all times
 * is the topmost one.
 *
 * If there is an existing popup when creating a new popup, the
 * parent must be the current topmost popup.
 *
 * A parent surface must be mapped before the new popup is mapped.
 *
 * When compositors choose to dismiss a popup, they will likely
 * dismiss every nested popup as well. When a compositor dismisses
 * popups, it will follow the same dismissing order as required
 * from the client.
 *
 * The x and y arguments passed when creating the popup object specify
 * where the top left of the popup should be placed, relative to the
 * local surface coordinates of the parent surface. See
 * xdg_shell.get_xdg_popup.
 *
 * The client must call wl_surface.commit on the corresponding wl_surface
 * for the xdg_popup state to take effect.
 *
 * For a surface to be mapped by the compositor the client must have
 * committed both the xdg_popup state and a buffer.
 */
extern const struct wl_interface xdg_popup_interface;

#ifndef XDG_SHELL_VERSION_ENUM
#define XDG_SHELL_VERSION_ENUM
/**
 * @ingroup iface_xdg_shell
 * latest protocol version
 *
 * The 'current' member of this enum gives the version of the
 * protocol.  Implementations can compare this to the version
 * they implement using static_assert to ensure the protocol and
 * implementation versions match.
 */
enum xdg_shell_version {
	/**
	 * Always the latest version
	 */
	XDG_SHELL_VERSION_CURRENT = 5,
};
#endif /* XDG_SHELL_VERSION_ENUM */

#ifndef XDG_SHELL_ERROR_ENUM
#define XDG_SHELL_ERROR_ENUM
enum xdg_shell_error {
	/**
	 * given wl_surface has another role
	 */
	XDG_SHELL_ERROR_ROLE = 0,
	/**
	 * xdg_shell was destroyed before children
	 */
	XDG_SHELL_ERROR_DEFUNCT_SURFACES = 1,
	/**
	 * the client tried to map or destroy a non-topmost popup
	 */
	XDG_SHELL_ERROR_NOT_THE_TOPMOST_POPUP = 2,
	/**
	 * the client specified an invalid popup parent surface
	 */
	XDG_SHELL_ERROR_INVALID_POPUP_PARENT = 3,
};
#endif /* XDG_SHELL_ERROR_ENUM */

/**
 * @ingroup iface_xdg_shell
 * @struct xdg_shell_interface
 */
struct xdg_shell_interface {
	/**
	 * destroy xdg_shell
	 *
	 * Destroy this xdg_shell object.
	 *
	 * Destroying a bound xdg_shell object while there are surfaces
	 * still alive created by this xdg_shell object instance is illegal
	 * and will result in a protocol error.
	 */
	void (*destroy)(struct wl_client *client,
			struct wl_resource *resource);
	/**
	 * enable use of this unstable version
	 *
	 * Negotiate the unstable version of the interface. This
	 * mechanism is in place to ensure client and server agree on the
	 * unstable versions of the protocol that they speak or exit
	 * cleanly if they don't agree. This request will go away once the
	 * xdg-shell protocol is stable.
	 */
	void (*use_unstable_version)(struct wl_client *client,
				     struct wl_resource *resource,
				     int32_t version);
	/**
	 * create a shell surface from a surface
	 *
	 * This creates an xdg_surface for the given surface and gives it
	 * the xdg_surface role. A wl_surface can only be given an
	 * xdg_surface role once. If get_xdg_surface is called with a
	 * wl_surface that already has an active xdg_surface associated
	 * with it, or if it had any other role, an error is raised.
	 *
	 * See the documentation of xdg_surface for more details about what
	 * an xdg_surface is and how it is used.
	 */
	void (*get_xdg_surface)(struct wl_client *client,
				struct wl_resource *resource,
				uint32_t id,
				struct wl_resource *surface);
	/**
	 * create a popup for a surface
	 *
	 * This creates an xdg_popup for the given surface and gives it
	 * the xdg_popup role. A wl_surface can only be given an xdg_popup
	 * role once. If get_xdg_popup is called with a wl_surface that
	 * already has an active xdg_popup associated with it, or if it had
	 * any other role, an error is raised.
	 *
	 * This request must be used in response to some sort of user
	 * action like a button press, key press, or touch down event.
	 *
	 * See the documentation of xdg_popup for more details about what
	 * an xdg_popup is and how it is used.
	 * @param seat the wl_seat of the user event
	 * @param serial the serial of the user event
	 */
	void (*get_xdg_popup)(struct wl_client *client,
			      struct wl_resource *resource,
			      uint32_t id,
			      struct wl_resource *surface,
			      struct wl_resource *parent,
			      struct wl_resource *seat,
			      uint32_t serial,
			      int32_t x,
			      int32_t y);
	/**
	 * respond to a ping event
	 *
	 * A client must respond to a ping event with a pong request or
	 * the client may be deemed unresponsive.
	 * @param serial serial of the ping event
	 */
	void (*pong)(struct wl_client *client,
		     struct wl_resource *resource,
		     uint32_t serial);
};

#define XDG_SHELL_PING 0

/**
 * @ingroup iface_xdg_shell
 */
#define XDG_SHELL_PING_SINCE_VERSION 1

/**
 * @ingroup iface_xdg_shell
 */
#define XDG_SHELL_DESTROY_SINCE_VERSION 1
/**
 * @ingroup iface_xdg_shell
 */
#define XDG_SHELL_USE_UNSTABLE_VERSION_SINCE_VERSION 1
/**
 * @ingroup iface_xdg_shell
 */
#define XDG_SHELL_GET_XDG_SURFACE_SINCE_VERSION 1
/**
 * @ingroup iface_xdg_shell
 */
#define XDG_SHELL_GET_XDG_POPUP_SINCE_VERSION 1
/**
 * @ingroup iface_xdg_shell
 */
#define XDG_SHELL_PONG_SINCE_VERSION 1

/**
 * @ingroup iface_xdg_shell
 * Sends an ping event to the client owning the resource.
 * @param resource_ The client's resource
 * @param serial pass this to the pong request
 */
static inline void
xdg_shell_send_ping(struct wl_resource *resource_, uint32_t serial)
{
	wl_resource_post_event(resource_, XDG_SHELL_PING, serial);
}

#ifndef XDG_SURFACE_RESIZE_EDGE_ENUM
#define XDG_SURFACE_RESIZE_EDGE_ENUM
/**
 * @ingroup iface_xdg_surface
 * edge values for resizing
 *
 * These values are used to indicate which edge of a surface
 * is being dragged in a resize operation.
 */
enum xdg_surface_resize_edge {
	XDG_SURFACE_RESIZE_EDGE_NONE = 0,
	XDG_SURFACE_RESIZE_EDGE_TOP = 1,
	XDG_SURFACE_RESIZE_EDGE_BOTTOM = 2,
	XDG_SURFACE_RESIZE_EDGE_LEFT = 4,
	XDG_SURFACE_RESIZE_EDGE_TOP_LEFT = 5,
	XDG_SURFACE_RESIZE_EDGE_BOTTOM_LEFT = 6,
	XDG_SURFACE_RESIZE_EDGE_RIGHT = 8,
	XDG_SURFACE_RESIZE_EDGE_TOP_RIGHT = 9,
	XDG_SURFACE_RESIZE_EDGE_BOTTOM_RIGHT = 10,
};
#endif /* XDG_SURFACE_RESIZE_EDGE_ENUM */

#ifndef XDG_SURFACE_STATE_ENUM
#define XDG_SURFACE_STATE_ENUM
/**
 * @ingroup iface_xdg_surface
 * the surface is now activated
 *
 * Client window decorations should be painted as if the window is
 * active. Do not assume this means that the window actually has
 * keyboard or pointer focus.
 */
enum xdg_surface_state {
	/**
	 * the surface is maximized
	 */
	XDG_SURFACE_STATE_MAXIMIZED = 1,
	/**
	 * the surface is fullscreen
	 */
	XDG_SURFACE_STATE_FULLSCREEN = 2,
	/**
	 * the surface is being resized
	 */
	XDG_SURFACE_STATE_RESIZING = 3,
	/**
	 * the surface is now activated
	 */
	XDG_SURFACE_STATE_ACTIVATED = 4,
};
#endif /* XDG_SURFACE_STATE_ENUM */

/**
 * @ingroup iface_xdg_surface
 * @struct xdg_surface_interface
 */
struct xdg_surface_interface {
	/**
	 * Destroy the xdg_surface
	 *
	 * Unmap and destroy the window. The window will be effectively
	 * hidden from the user's point of view, and all state like
	 * maximization, fullscreen, and so on, will be lost.
	 */
	void (*destroy)(struct wl_client *client,
			struct wl_resource *resource);
	/**
	 * set the parent of this surface
	 *
	 * Set the "parent" of this surface. This window should be
	 * stacked above a parent. The parent surface must be mapped as
	 * long as this surface is mapped.
	 *
	 * Parent windows should be set on dialogs, toolboxes, or other
	 * "auxiliary" surfaces, so that the parent is raised when the
	 * dialog is raised.
	 */
	void (*set_parent)(struct wl_client *client,
			   struct wl_resource *resource,
			   struct wl_resource *parent);
	/**
	 * set surface title
	 *
	 * Set a short title for the surface.
	 *
	 * This string may be used to identify the surface in a task bar,
	 * window list, or other user interface elements provided by the
	 * compositor.
	 *
	 * The string must be encoded in UTF-8.
	 */
	void (*set_title)(struct wl_client *client,
			  struct wl_resource *resource,
			  const char *title);
	/**
	 * set application ID
	 *
	 * Set an application identifier for the surface.
	 *
	 * The app ID identifies the general class of applications to which
	 * the surface belongs. The compositor can use this to group
	 * multiple surfaces together, or to determine how to launch a new
	 * application.
	 *
	 * For D-Bus activatable applications, the app ID is used as the
	 * D-Bus service name.
	 *
	 * The compositor shell will try to group application surfaces
	 * together by their app ID. As a best practice, it is suggested to
	 * select app ID's that match the basename of the application's
	 * .desktop file. For example, "org.freedesktop.FooViewer" where
	 * the .desktop file is "org.freedesktop.FooViewer.desktop".
	 *
	 * See the desktop-entry specification [0] for more details on
	 * application identifiers and how they relate to well-known D-Bus
	 * names and .desktop files.
	 *
	 * [0] http://standards.freedesktop.org/desktop-entry-spec/
	 */
	void (*set_app_id)(struct wl_client *client,
			   struct wl_resource *resource,
			   const char *app_id);
	/**
	 * show the window menu
	 *
	 * Clients implementing client-side decorations might want to
	 * show a context menu when right-clicking on the decorations,
	 * giving the user a menu that they can use to maximize or minimize
	 * the window.
	 *
	 * This request asks the compositor to pop up such a window menu at
	 * the given position, relative to the local surface coordinates of
	 * the parent surface. There are no guarantees as to what menu
	 * items the window menu contains.
	 *
	 * This request must be used in response to some sort of user
	 * action like a button press, key press, or touch down event.
	 * @param seat the wl_seat of the user event
	 * @param serial the serial of the user event
	 * @param x the x position to pop up the window menu at
	 * @param y the y position to pop up the window menu at
	 */
	void (*show_window_menu)(struct wl_client *client,
				 struct wl_resource *resource,
				 struct wl_resource *seat,
				 uint32_t serial,
				 int32_t x,
				 int32_t y);
	/**
	 * start an interactive move
	 *
	 * Start an interactive, user-driven move of the surface.
	 *
	 * This request must be used in response to some sort of user
	 * action like a button press, key press, or touch down event. The
	 * passed serial is used to determine the type of interactive move
	 * (touch, pointer, etc).
	 *
	 * The server may ignore move requests depending on the state of
	 * the surface (e.g. fullscreen or maximized), or if the passed
	 * serial is no longer valid.
	 *
	 * If triggered, the surface will lose the focus of the device
	 * (wl_pointer, wl_touch, etc) used for the move. It is up to the
	 * compositor to visually indicate that the move is taking place,
	 * such as updating a pointer cursor, during the move. There is no
	 * guarantee that the device focus will return when the move is
	 * completed.
	 * @param seat the wl_seat of the user event
	 * @param serial the serial of the user event
	 */
	void (*move)(struct wl_client *client,
		     struct wl_resource *resource,
		     struct wl_resource *seat,
		     uint32_t serial);
	/**
	 * start an interactive resize
	 *
	 * Start a user-driven, interactive resize of the surface.
	 *
	 * This request must be used in response to some sort of user
	 * action like a button press, key press, or touch down event. The
	 * passed serial is used to determine the type of interactive
	 * resize (touch, pointer, etc).
	 *
	 * The server may ignore resize requests depending on the state of
	 * the surface (e.g. fullscreen or maximized).
	 *
	 * If triggered, the client will receive configure events with the
	 * "resize" state enum value and the expected sizes. See the
	 * "resize" enum value for more details about what is required. The
	 * client must also acknowledge configure events using
	 * "ack_configure". After the resize is completed, the client will
	 * receive another "configure" event without the resize state.
	 *
	 * If triggered, the surface also will lose the focus of the device
	 * (wl_pointer, wl_touch, etc) used for the resize. It is up to the
	 * compositor to visually indicate that the resize is taking place,
	 * such as updating a pointer cursor, during the resize. There is
	 * no guarantee that the device focus will return when the resize
	 * is completed.
	 *
	 * The edges parameter specifies how the surface should be resized,
	 * and is one of the values of the resize_edge enum. The compositor
	 * may use this information to update the surface position for
	 * example when dragging the top left corner. The compositor may
	 * also use this information to adapt its behavior, e.g. choose an
	 * appropriate cursor image.
	 * @param seat the wl_seat of the user event
	 * @param serial the serial of the user event
	 * @param edges which edge or corner is being dragged
	 */
	void (*resize)(struct wl_client *client,
		       struct wl_resource *resource,
		       struct wl_resource *seat,
		       uint32_t serial,
		       uint32_t edges);
	/**
	 * ack a configure event
	 *
	 * When a configure event is received, if a client commits the
	 * surface in response to the configure event, then the client must
	 * make an ack_configure request sometime before the commit
	 * request, passing along the serial of the configure event.
	 *
	 * For instance, the compositor might use this information to move
	 * a surface to the top left only when the client has drawn itself
	 * for the maximized or fullscreen state.
	 *
	 * If the client receives multiple configure events before it can
	 * respond to one, it only has to ack the last configure event.
	 *
	 * A client is not required to commit immediately after sending an
	 * ack_configure request - it may even ack_configure several times
	 * before its next surface commit.
	 *
	 * The compositor expects that the most recently received
	 * ack_configure request at the time of a commit indicates which
	 * configure event the client is responding to.
	 * @param serial the serial from the configure event
	 */
	void (*ack_configure)(struct wl_client *client,
			      struct wl_resource *resource,
			      uint32_t serial);
	/**
	 * set the new window geometry
	 *
	 * The window geometry of a window is its "visible bounds" from
	 * the user's perspective. Client-side decorations often have
	 * invisible portions like drop-shadows which should be ignored for
	 * the purposes of aligning, placing and constraining windows.
	 *
	 * The window geometry is double buffered, and will be applied at
	 * the time wl_surface.commit of the corresponding wl_surface is
	 * called.
	 *
	 * Once the window geometry of the surface is set once, it is not
	 * possible to unset it, and it will remain the same until
	 * set_window_geometry is called again, even if a new subsurface or
	 * buffer is attached.
	 *
	 * If never set, the value is the full bounds of the surface,
	 * including any subsurfaces. This updates dynamically on every
	 * commit. This unset mode is meant for extremely simple clients.
	 *
	 * If responding to a configure event, the window geometry in here
	 * must respect the sizing negotiations specified by the states in
	 * the configure event.
	 *
	 * The arguments are given in the surface local coordinate space of
	 * the wl_surface associated with this xdg_surface.
	 *
	 * The width and height must be greater than zero.
	 */
	void (*set_window_geometry)(struct wl_client *client,
				    struct wl_resource *resource,
				    int32_t x,
				    int32_t y,
				    int32_t width,
				    int32_t height);
	/**
	 * maximize the window
	 *
	 * Maximize the surface.
	 *
	 * After requesting that the surface should be maximized, the
	 * compositor will respond by emitting a configure event with the
	 * "maximized" state and the required window geometry. The client
	 * should then update its content, drawing it in a maximized state,
	 * i.e. without shadow or other decoration outside of the window
	 * geometry. The client must also acknowledge the configure when
	 * committing the new content (see ack_configure).
	 *
	 * It is up to the compositor to decide how and where to maximize
	 * the surface, for example which output and what region of the
	 * screen should be used.
	 *
	 * If the surface was already maximized, the compositor will still
	 * emit a configure event with the "maximized" state.
	 */
	void (*set_maximized)(struct wl_client *client,
			      struct wl_resource *resource);
	/**
	 * unmaximize the window
	 *
	 * Unmaximize the surface.
	 *
	 * After requesting that the surface should be unmaximized, the
	 * compositor will respond by emitting a configure event without
	 * the "maximized" state. If available, the compositor will include
	 * the window geometry dimensions the window had prior to being
	 * maximized in the configure request. The client must then update
	 * its content, drawing it in a regular state, i.e. potentially
	 * with shadow, etc. The client must also acknowledge the configure
	 * when committing the new content (see ack_configure).
	 *
	 * It is up to the compositor to position the surface after it was
	 * unmaximized; usually the position the surface had before
	 * maximizing, if applicable.
	 *
	 * If the surface was already not maximized, the compositor will
	 * still emit a configure event without the "maximized" state.
	 */
	void (*unset_maximized)(struct wl_client *client,
				struct wl_resource *resource);
	/**
	 * set the window as fullscreen on a monitor
	 *
	 * Make the surface fullscreen.
	 *
	 * You can specify an output that you would prefer to be
	 * fullscreen. If this value is NULL, it's up to the compositor to
	 * choose which display will be used to map this surface.
	 *
	 * If the surface doesn't cover the whole output, the compositor
	 * will position the surface in the center of the output and
	 * compensate with black borders filling the rest of the output.
	 */
	void (*set_fullscreen)(struct wl_client *client,
			       struct wl_resource *resource,
			       struct wl_resource *output);
	/**
	 */
	void (*unset_fullscreen)(struct wl_client *client,
				 struct wl_resource *resource);
	/**
	 * set the window as minimized
	 *
	 * Request that the compositor minimize your surface. There is no
	 * way to know if the surface is currently minimized, nor is there
	 * any way to unset minimization on this surface.
	 *
	 * If you are looking to throttle redrawing when minimized, please
	 * instead use the wl_surface.frame event for this, as this will
	 * also work with live previews on windows in Alt-Tab, Expose or
	 * similar compositor features.
	 */
	void (*set_minimized)(struct wl_client *client,
			      struct wl_resource *resource);
};

#define XDG_SURFACE_CONFIGURE 0
#define XDG_SURFACE_CLOSE 1

/**
 * @ingroup iface_xdg_surface
 */
#define XDG_SURFACE_CONFIGURE_SINCE_VERSION 1
/**
 * @ingroup iface_xdg_surface
 */
#define XDG_SURFACE_CLOSE_SINCE_VERSION 1

/**
 * @ingroup iface_xdg_surface
 */
#define XDG_SURFACE_DESTROY_SINCE_VERSION 1
/**
 * @ingroup iface_xdg_surface
 */
#define XDG_SURFACE_SET_PARENT_SINCE_VERSION 1
/**
 * @ingroup iface_xdg_surface
 */
#define XDG_SURFACE_SET_TITLE_SINCE_VERSION 1
/**
 * @ingroup iface_xdg_surface
 */
#define XDG_SURFACE_SET_APP_ID_SINCE_VERSION 1
/**
 * @ingroup iface_xdg_surface
 */
#define XDG_SURFACE_SHOW_WINDOW_MENU_SINCE_VERSION 1
/**
 * @ingroup iface_xdg_surface
 */
#define XDG_SURFACE_MOVE_SINCE_VERSION 1
/**
 * @ingroup iface_xdg_surface
 */
#define XDG_SURFACE_RESIZE_SINCE_VERSION 1
/**
 * @ingroup iface_xdg_surface
 */
#define XDG_SURFACE_ACK_CONFIGURE_SINCE_VERSION 1
/**
 * @ingroup iface_xdg_surface
 */
#define XDG_SURFACE_SET_WINDOW_GEOMETRY_SINCE_VERSION 1
/**
 * @ingroup iface_xdg_surface
 */
#define XDG_SURFACE_SET_MAXIMIZED_SINCE_VERSION 1
/**
 * @ingroup iface_xdg_surface
 */
#define XDG_SURFACE_UNSET_MAXIMIZED_SINCE_VERSION 1
/**
 * @ingroup iface_xdg_surface
 */
#define XDG_SURFACE_SET_FULLSCREEN_SINCE_VERSION 1
/**
 * @ingroup iface_xdg_surface
 */
#define XDG_SURFACE_UNSET_FULLSCREEN_SINCE_VERSION 1
/**
 * @ingroup iface_xdg_surface
 */
#define XDG_SURFACE_SET_MINIMIZED_SINCE_VERSION 1

/**
 * @ingroup iface_xdg_surface
 * Sends an configure event to the client owning the resource.
 * @param resource_ The client's resource
 */
static inline void
xdg_surface_send_configure(struct wl_resource *resource_, int32_t width, int32_t height, struct wl_array *states, uint32_t serial)
{
	wl_resource_post_event(resource_, XDG_SURFACE_CONFIGURE, width, height, states, serial);
}

/**
 * @ingroup iface_xdg_surface
 * Sends an close event to the client owning the resource.
 * @param resource_ The client's resource
 */
static inline void
xdg_surface_send_close(struct wl_resource *resource_)
{
	wl_resource_post_event(resource_, XDG_SURFACE_CLOSE);
}

/**
 * @ingroup iface_xdg_popup
 * @struct xdg_popup_interface
 */
struct xdg_popup_interface {
	/**
	 * remove xdg_popup interface
	 *
	 * This destroys the popup. Explicitly destroying the xdg_popup
	 * object will also dismiss the popup, and unmap the surface.
	 *
	 * If this xdg_popup is not the "topmost" popup, a protocol error
	 * will be sent.
	 */
	void (*destroy)(struct wl_client *client,
			struct wl_resource *resource);
};

#define XDG_POPUP_POPUP_DONE 0

/**
 * @ingroup iface_xdg_popup
 */
#define XDG_POPUP_POPUP_DONE_SINCE_VERSION 1

/**
 * @ingroup iface_xdg_popup
 */
#define XDG_POPUP_DESTROY_SINCE_VERSION 1

/**
 * @ingroup iface_xdg_popup
 * Sends an popup_done event to the client owning the resource.
 * @param resource_ The client's resource
 */
static inline void
xdg_popup_send_popup_done(struct wl_resource *resource_)
{
	wl_resource_post_event(resource_, XDG_POPUP_POPUP_DONE);
}

#ifdef  __cplusplus
}
#endif

#endif
