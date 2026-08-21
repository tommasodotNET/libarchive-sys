// Copyright 2021 Sergei Solodovnikov
//
// Licensed under the Apache License, Version 2.0 <LICENSE-APACHE or
// http://www.apache.org/licenses/LICENSE-2.0> or the MIT license
// <LICENSE-MIT or http://opensource.org/licenses/MIT>, at your
// option. This file may not be copied, modified, or distributed
// except according to those terms.

//bindgen wraper

#include <archive.h>
#include <archive_entry.h>

#define ARCHIVE_STATUS_EOF ((int) ARCHIVE_EOF)
#define ARCHIVE_STATUS_OK ((int) ARCHIVE_OK)
#define ARCHIVE_STATUS_RETRY ((int) ARCHIVE_RETRY)
#define ARCHIVE_STATUS_WARN ((int) ARCHIVE_WARN)
#define ARCHIVE_STATUS_FAILED ((int) ARCHIVE_FAILED)
#define ARCHIVE_STATUS_FATAL ((int) ARCHIVE_FATAL)