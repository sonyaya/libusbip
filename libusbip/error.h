/**
 * libusbip - error.h (Private libusbip header file)
 * Copyright (C) 2011 Manuel Gebele
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **/

void error_illegal_libusbip_rpc_info(const char *func);
void error_illegal_libusbip_connection_info(const char *func);
void error_illegal_libusbip_device(const char *func);
void error_illegal_libusbip_device_list(const char *func);
void error_illegal_libusbip_device_descriptor(const char *func);
void error_illegal_libusbip_device_handle(const char *func);
void error_illegal_buffer(const char *func);
void error_illegal_length(const char *func);
void error_illegal_libusbip_ctx_t(const char *func);
void error_illegal_libusbip_rpc_t(const char *func);
