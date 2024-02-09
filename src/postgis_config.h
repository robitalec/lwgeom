/* postgis_config.h.  Generated from postgis_config.h.in by configure.  */
#ifndef POSTGIS_CONFIG_H
#define POSTGIS_CONFIG_H 1

#include "postgis_svn_revision.h"

/* Manually manipulate the POSTGIS_DEBUG_LEVEL, it is not affected by the
   configure process */
#define POSTGIS_DEBUG_LEVEL 0

/* Define to 1 to enable memory checks in pointarray management. */
#define PARANOIA_LEVEL 0

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
#define ENABLE_NLS 1

/* Define for some functions we are interested in */
#define HAVE_FSEEKO 1

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define if the build is big endian */
/* #undef WORDS_BIGENDIAN */

/* Define if you have the iconv() function and it works. */
#define HAVE_ICONV 1

/* Define to 1 if you have the `iconvctl' function. */
/* #undef HAVE_ICONVCTL */

/* ieeefp.h header */
#define HAVE_IEEEFP_H 0

/* Define to 1 if you have the `geos_c' library (-lgeos_c). */
#define HAVE_LIBGEOS_C 1

/* Define to 1 if you have the `libiconvctl' function. */
/* #undef HAVE_LIBICONVCTL */

/* Define to 1 if libprotobuf-c is present */
/* #undef HAVE_LIBPROTOBUF */

/* Define to 1 if protobuf_c_version() is present */
/* #undef HAVE_PROTOBUF_C_VERSION */

/* Numeric version number for libprotobuf */
/* #undef LIBPROTOBUF_VERSION */

/* Define to 1 if libprotobuf-c is >= version 1.1 */
/* #undef HAVE_GEOBUF */

/* Define to 1 if libjson is present */
#define HAVE_LIBJSON 1

/* Define to 1 if you have the `pq' library (-lpq). */
#define HAVE_LIBPQ 1

/* Define to 1 if you have the `proj' library (-lproj). */
#define HAVE_LIBPROJ 1

/* Define to 1 if you have the `xml2' library (-lxml2). */
#define HAVE_LIBXML2 1

/* Define to 1 if you have the <libxml/parser.h> header file. */
#define HAVE_LIBXML_PARSER_H 1

/* Define to 1 if you have the <libxml/tree.h> header file. */
#define HAVE_LIBXML_TREE_H 1

/* Define to 1 if you have the <libxml/xpathInternals.h> header file. */
#define HAVE_LIBXML_XPATHINTERNALS_H 1

/* Define to 1 if you have the <libxml/xpath.h> header file. */
#define HAVE_LIBXML_XPATH_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if wagyu is being built */
#define HAVE_WAGYU 1

/* Define to 1 if sfcgal is being built */
/* #undef HAVE_SFCGAL */

/* Define to the sub-directory in which libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Location of PostgreSQL locale directory */
#define PGSQL_LOCALEDIR "/usr/share/locale"

/* PostGIS build date */
#define POSTGIS_BUILD_DATE "2020-01-28 17:06:21"

/* SFCGAL library version at buil time */
/* #undef POSTGIS_SFCGAL_VERSION */

/* GDAL library version */
/* #undef POSTGIS_GDAL_VERSION */

/* GEOS library version */
/* #define POSTGIS_GEOS_VERSION 38 */

/* PostGIS libxml2 version */
#define POSTGIS_LIBXML2_VERSION "2.9.4"

/* PostGIS library version */
#define POSTGIS_LIB_VERSION "3.0.0"

/* PostGIS major version */
#define POSTGIS_MAJOR_VERSION "3"

/* PostGIS minor version */
#define POSTGIS_MINOR_VERSION "0"

/* PostGIS micro version */
#define POSTGIS_MICRO_VERSION "0"

/* PostgreSQL server version */
#define POSTGIS_PGSQL_VERSION 100

/* PROJ library version */
#define POSTGIS_PROJ_VERSION 93

/* PostGIS Raster build date */
/* #undef POSTGIS_RASTER_BUILD_DATE */

/* PostGIS Raster library version */
/* #undef POSTGIS_RASTER_LIB_VERSION */

/* PostGIS Raster major version */
/* #undef POSTGIS_RASTER_MAJOR_VERSION */

/* PostGIS Raster micro version */
/* #undef POSTGIS_RASTER_MICRO_VERSION */

/* PostGIS Raster minor version */
/* #undef POSTGIS_RASTER_MINOR_VERSION */

/* PostGIS Raster scripts version */
/* #undef POSTGIS_RASTER_SCRIPTS_VERSION */

/* PostGIS Raster version */
/* #undef POSTGIS_RASTER_VERSION */

/* Define to 1 if a warning is outputted every time a double is truncated */
/* #undef POSTGIS_RASTER_WARN_ON_TRUNCATION */

/* PostGIS scripts version */
#define POSTGIS_SCRIPTS_VERSION "3.0.0"


/* PostGIS version */
#define POSTGIS_VERSION "3.0 USE_GEOS=1 USE_PROJ=1 USE_STATS=1"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#define YYTEXT_POINTER 1

#endif /* POSTGIS_CONFIG_H */
