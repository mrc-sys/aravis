/* Aravis - Digital camera library
 *
 * Copyright © 2009-2025 Emmanuel Pacaud <emmanuel.pacaud@free.fr>
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Emmanuel Pacaud <emmanuel.pacaud@free.fr>
 */

#ifndef ARV_GV_INTERFACE_PRIVATE_H
#define ARV_GV_INTERFACE_PRIVATE_H

#if !defined (ARV_H_INSIDE) && !defined (ARAVIS_COMPILATION)
#error "Only <arv.h> can be included directly."
#endif

#include <arvgvinterface.h>
#include <arvinterfaceprivate.h>

G_BEGIN_DECLS

#define ARV_GV_INTERFACE_DISCOVERY_TIMEOUT_MS	1000
#define ARV_GV_INTERFACE_SOCKET_BUFFER_SIZE	1024
#define ARV_GV_INTERFACE_DISCOVERY_SOCKET_BUFFER_SIZE	(256*1024)

void 			arv_gv_interface_destroy_instance 	(void);

G_END_DECLS

#endif
