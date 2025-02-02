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

#include <debug.h>
#include <mutable_span_t.h>
#include <types.h>

/**
 * <!-- description -->
 *   @brief Outputs the contents of a provided mk huge pool.
 *
 * <!-- inputs/outputs -->
 *   @param huge_pool the mk huge pool to output
 *   @return 0 on success, LOADER_FAILURE on failure.
 */
void
dump_mk_huge_pool(struct mutable_span_t *const huge_pool)
{
    BFINFO("mk huge pool:\n");
    BFINFO(" - addr: 0x%016" PRIx64 "\n", (uint64_t)huge_pool->addr);
    BFINFO(" - size: 0x%016" PRIx64 "\n", huge_pool->size);
}
