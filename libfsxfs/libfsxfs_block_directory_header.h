/*
 * Block directory header functions
 *
 * Copyright (C) 2020-2023, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#if !defined( _LIBFSXFS_BLOCK_DIRECTORY_HEADER_H )
#define _LIBFSXFS_BLOCK_DIRECTORY_HEADER_H

#include <common.h>
#include <types.h>

#include "libfsxfs_libcerror.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct libfsxfs_block_directory_header libfsxfs_block_directory_header_t;

struct libfsxfs_block_directory_header
{
	/* Format version
	 */
	uint8_t format_version;

	/* Value to indicate the block directory has a footer
	 */
	uint8_t has_footer;
};

int libfsxfs_block_directory_header_initialize(
     libfsxfs_block_directory_header_t **block_directory_header,
     libcerror_error_t **error );

int libfsxfs_block_directory_header_free(
     libfsxfs_block_directory_header_t **block_directory_header,
     libcerror_error_t **error );

int libfsxfs_block_directory_header_read_data(
     libfsxfs_block_directory_header_t *block_directory_header,
     const uint8_t *data,
     size_t data_size,
     libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBFSXFS_BLOCK_DIRECTORY_HEADER_H ) */

