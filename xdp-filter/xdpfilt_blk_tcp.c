/* SPDX-License-Identifier: GPL-2.0 */

#define FILT_MODE_BLACKLIST
#undef FILT_MODE_ETHERNET
#undef FILT_MODE_IPV4
#undef FILT_MODE_IPV6
#undef FILT_MODE_UDP
#define FILT_MODE_TCP
#define FUNCNAME xdpfilt_blk_tcp
#include "xdpfilt_prog.h"
