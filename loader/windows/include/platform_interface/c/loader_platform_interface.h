/* SPDX-License-Identifier: SPDX-License-Identifier: GPL-2.0 OR MIT */

/**
 * @copyright
 * Copyright (C) 2020 Assured Information Security, Inc.
 *
 * @copyright
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * @copyright
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * @copyright
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef LOADER_PLATFORM_INTERFACE_H
#define LOADER_PLATFORM_INTERFACE_H

/* clang-format off */

/**
 * NOTE:
 * - The windows includes that we use here need to remain in this order.
 *   Otherwise the code will not compile.
 */

#include <Initguid.h>

/* clang-format on */

#include <dump_vmm_args_t.h>
#include <start_vmm_args_t.h>
#include <stop_vmm_args_t.h>

/** @brief defines the GUID name of the loader */
DEFINE_GUID(
    GUID_DEVINTERFACE_LOADER,
    0x1d9c9218,
    0x3c88,
    0x4b81,
    0x8e,
    0x81,
    0xb4,
    0x62,
    0x2a,
    0x4d,
    0xcb,
    0x44);

/** @brief defines IOCTL for starting a VM */
#define LOADER_START_VMM                                                       \
    CTL_CODE(                                                                  \
        FILE_DEVICE_UNKNOWN,                                                   \
        LOADER_START_VMM_CMD,                                                  \
        METHOD_BUFFERED,                                                       \
        FILE_READ_DATA)

/** @brief defines IOCTL for stopping a VM */
#define LOADER_STOP_VMM                                                        \
    CTL_CODE(                                                                  \
        FILE_DEVICE_UNKNOWN,                                                   \
        LOADER_STOP_VMM_CMD,                                                   \
        METHOD_BUFFERED,                                                       \
        FILE_READ_DATA)

/** @brief defines IOCTL for dumping a VMs debug ring */
#define LOADER_DUMP_VMM                                                        \
    CTL_CODE(                                                                  \
        FILE_DEVICE_UNKNOWN,                                                   \
        LOADER_DUMP_VMM_CMD,                                                   \
        METHOD_BUFFERED,                                                       \
        FILE_READ_DATA | FILE_WRITE_DATA)

#endif
