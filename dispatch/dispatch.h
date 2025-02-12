/*
 * Copyright (c) 2008-2013 Apple Inc. All rights reserved.
 *
 * @APPLE_APACHE_LICENSE_HEADER_START@
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * @APPLE_APACHE_LICENSE_HEADER_END@
 */

#ifndef __DISPATCH_PUBLIC__
#define __DISPATCH_PUBLIC__

#include <sys/types.h>

#ifdef __APPLE__
#include <Availability.h>
#include <os/availability.h>
#include <TargetConditionals.h>
#include <os/base.h>
#elif defined(__linux__)
#include <os/linux_base.h>
#endif

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdarg.h>
#if !defined(HAVE_UNISTD_H) || HAVE_UNISTD_H
#include <unistd.h>
#endif
#include <fcntl.h>

#if defined(__linux__) && defined(__has_feature)
#if __has_feature(modules)
#if !defined(__arm__)
#include <stdio.h> // for off_t (to match Glibc.modulemap)
#endif
#endif
#endif

#define DISPATCH_API_VERSION 20170124

#ifndef __DISPATCH_BUILDING_DISPATCH__

#ifndef __DISPATCH_INDIRECT__
#define __DISPATCH_INDIRECT__
#endif

#include <os/object.h>
#include <dispatch/base.h>
#include <dispatch/time.h>
#include <dispatch/object.h>
#include <dispatch/queue.h>
#include <dispatch/block.h>
#include <dispatch/source.h>
#include <dispatch/group.h>
#include <dispatch/semaphore.h>
#include <dispatch/once.h>
#include <dispatch/data.h>
#include <dispatch/io.h>

#undef __DISPATCH_INDIRECT__

#endif /* !__DISPATCH_BUILDING_DISPATCH__ */

#endif
