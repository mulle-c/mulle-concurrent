/*
*   This file will be regenerated by `mulle-sde reflect` and any edits will be
*   lost. Suppress generation of this file with:
*      mulle-sde environment --global \
*         set MULLE_SOURCETREE_TO_C_INCLUDE_FILE DISABLE
*
*   To not generate any header files:
*      mulle-sde environment --global \
*         set MULLE_SOURCETREE_TO_C_RUN DISABLE
*/

#ifndef _mulle_concurrent_include_h__
#define _mulle_concurrent_include_h__

// How to tweak the following mulle-aba #include
//    remove:             `mulle-sourcetree mark mulle-aba no-header`
//    rename:             `mulle-sde dependency|library set mulle-aba include whatever.h`
//    toggle #import:     `mulle-sourcetree mark mulle-aba [no-]import`
//    toggle localheader: `mulle-sourcetree mark mulle-aba [no-]localheader`
//    toggle public:      `mulle-sourcetree mark mulle-aba [no-]public`
//    toggle optional:    `mulle-sourcetree mark mulle-aba [no-]require`
//    remove for os:      `mulle-sourcetree mark mulle-aba no-os-<osname>`
# if defined( __has_include) && __has_include("mulle-aba.h")
#   include "mulle-aba.h"   // mulle-aba
# else
#   include <mulle-aba/mulle-aba.h>   // mulle-aba
#endif

#endif
