/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*- */

/* Mutter X display handler */

/*
 * Copyright (C) 2001 Havoc Pennington
 * Copyright (C) 2002 Red Hat, Inc.
 * Copyright (C) 2003 Rob Adams
 * Copyright (C) 2004-2006 Elijah Newren
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef META_X11_DISPLAY_PRIVATE_H
#define META_X11_DISPLAY_PRIVATE_H

#include <glib.h>

#include "core/display-private.h"
#include "meta/common.h"
#include "meta/types.h"
#include "meta/meta-x11-display.h"

struct _MetaX11Display
{
  GObject parent;

  MetaDisplay *display;
};

MetaX11Display *meta_x11_display_new (MetaDisplay *display, GError **error);

#endif /* META_X11_DISPLAY_PRIVATE_H */