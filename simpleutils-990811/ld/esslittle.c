/* This file is is generated by a shell script.  DO NOT EDIT! */

/* emulate the original gld for the given sslittle
   Copyright (C) 1991, 93, 94, 95, 96, 1999 Free Software Foundation, Inc.
   Written by Steve Chamberlain steve@cygnus.com

This file is part of GLD, the Gnu Linker.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.  */

#define TARGET_IS_sslittle

#include "bfd.h"
#include "sysdep.h"
#include "bfdlink.h"

#include "ld.h"
#include "ldmain.h"
#include "ldemul.h"
#include "ldfile.h"
#include "ldmisc.h"

static void gldsslittle_before_parse PARAMS ((void));
static char *gldsslittle_get_script PARAMS ((int *isfile));

static void
gldsslittle_before_parse()
{
#ifndef TARGET_			/* I.e., if not generic.  */
  ldfile_set_output_arch ("ss");
#endif /* not TARGET_ */
}

static char *
gldsslittle_get_script(isfile)
     int *isfile;
{			     
  *isfile = 0;

  if (link_info.relocateable == true && config.build_constructors == true)
    return
"OUTPUT_FORMAT(\"ss-coff-little\", \"ss-coff-big\",\n\
	      \"ss-coff-little\")\n\
 SEARCH_DIR(/home/zhangtian/simplescalar/sslittle-na-sstrix/lib);\n\
ENTRY(__start)\n\
SECTIONS\n\
{\n\
  .text : {\n\
    ;\n\
    *(.init)\n\
    ;\n\
    *(.text)\n\
    *(.fini)\n\
    ;\n\
    ;\n\
  }\n\
  .rdata : {\n\
    *(.rdata)\n\
  }\n\
  .data : {\n\
    *(.data)\n\
    CONSTRUCTORS\n\
  }\n\
  .lit8 : {\n\
    *(.lit8)\n\
  }\n"
"  .lit4 : {\n\
    *(.lit4)\n\
  }\n\
  .sdata : {\n\
    *(.sdata)\n\
  }\n\
  .sbss : {\n\
    *(.sbss)\n\
    *(.scommon)\n\
  }\n\
  .bss : {\n\
    *(.bss)\n\
    *(COMMON)\n\
  }\n\
}\n\n"
  ; else if (link_info.relocateable == true) return
"OUTPUT_FORMAT(\"ss-coff-little\", \"ss-coff-big\",\n\
	      \"ss-coff-little\")\n\
 SEARCH_DIR(/home/zhangtian/simplescalar/sslittle-na-sstrix/lib);\n\
ENTRY(__start)\n\
SECTIONS\n\
{\n\
  .text : {\n\
    ;\n\
    *(.init)\n\
    ;\n\
    *(.text)\n\
    *(.fini)\n\
    ;\n\
    ;\n\
  }\n\
  .rdata : {\n\
    *(.rdata)\n\
  }\n\
  .data : {\n\
    *(.data)\n\
  }\n\
  .lit8 : {\n\
    *(.lit8)\n\
  }\n\
  .lit4 : {\n"
"    *(.lit4)\n\
  }\n\
  .sdata : {\n\
    *(.sdata)\n\
  }\n\
  .sbss : {\n\
    *(.sbss)\n\
    *(.scommon)\n\
  }\n\
  .bss : {\n\
    *(.bss)\n\
    *(COMMON)\n\
  }\n\
}\n\n"
  ; else if (!config.text_read_only) return
"OUTPUT_FORMAT(\"ss-coff-little\", \"ss-coff-big\",\n\
	      \"ss-coff-little\")\n\
 SEARCH_DIR(/home/zhangtian/simplescalar/sslittle-na-sstrix/lib);\n\
ENTRY(__start)\n\
SECTIONS\n\
{\n\
  . = 0x400000 + SIZEOF_HEADERS;\n\
  .text : {\n\
     _ftext = . ;\n\
    *(.init)\n\
     eprol  =  .;\n\
    *(.text)\n\
    *(.fini)\n\
     etext  =  .;\n\
     _etext  =  .;\n\
  }\n\
  . = 0x10000000;\n\
  .rdata : {\n\
    *(.rdata)\n\
  }\n\
   _fdata = .;\n\
  .data : {\n\
    *(.data)\n\
    CONSTRUCTORS\n\
  }\n"
"   _gp = ALIGN(16) + 0x8000;\n\
  .lit8 : {\n\
    *(.lit8)\n\
  }\n\
  .lit4 : {\n\
    *(.lit4)\n\
  }\n\
  .sdata : {\n\
    *(.sdata)\n\
  }\n\
   edata  =  .;\n\
   _edata  =  .;\n\
   _fbss = .;\n\
  .sbss : {\n\
    *(.sbss)\n\
    *(.scommon)\n\
  }\n\
  .bss : {\n\
    *(.bss)\n\
    *(COMMON)\n\
  }\n\
   end = .;\n\
   _end = .;\n\
}\n\n"
  ; else if (!config.magic_demand_paged) return
"OUTPUT_FORMAT(\"ss-coff-little\", \"ss-coff-big\",\n\
	      \"ss-coff-little\")\n\
 SEARCH_DIR(/home/zhangtian/simplescalar/sslittle-na-sstrix/lib);\n\
ENTRY(__start)\n\
SECTIONS\n\
{\n\
  . = 0x400000 + SIZEOF_HEADERS;\n\
  .text : {\n\
     _ftext = . ;\n\
    *(.init)\n\
     eprol  =  .;\n\
    *(.text)\n\
    *(.fini)\n\
     etext  =  .;\n\
     _etext  =  .;\n\
  }\n\
  . = 0x10000000;\n\
  .rdata : {\n\
    *(.rdata)\n\
  }\n\
   _fdata = .;\n\
  .data : {\n\
    *(.data)\n\
    CONSTRUCTORS\n\
  }\n"
"   _gp = ALIGN(16) + 0x8000;\n\
  .lit8 : {\n\
    *(.lit8)\n\
  }\n\
  .lit4 : {\n\
    *(.lit4)\n\
  }\n\
  .sdata : {\n\
    *(.sdata)\n\
  }\n\
   edata  =  .;\n\
   _edata  =  .;\n\
   _fbss = .;\n\
  .sbss : {\n\
    *(.sbss)\n\
    *(.scommon)\n\
  }\n\
  .bss : {\n\
    *(.bss)\n\
    *(COMMON)\n\
  }\n\
   end = .;\n\
   _end = .;\n\
}\n\n"
  ; else return
"OUTPUT_FORMAT(\"ss-coff-little\", \"ss-coff-big\",\n\
	      \"ss-coff-little\")\n\
 SEARCH_DIR(/home/zhangtian/simplescalar/sslittle-na-sstrix/lib);\n\
ENTRY(__start)\n\
SECTIONS\n\
{\n\
  . = 0x400000 + SIZEOF_HEADERS;\n\
  .text : {\n\
     _ftext = . ;\n\
    *(.init)\n\
     eprol  =  .;\n\
    *(.text)\n\
    *(.fini)\n\
     etext  =  .;\n\
     _etext  =  .;\n\
  }\n\
  . = 0x10000000;\n\
  .rdata : {\n\
    *(.rdata)\n\
  }\n\
   _fdata = .;\n\
  .data : {\n\
    *(.data)\n\
    CONSTRUCTORS\n\
  }\n"
"   _gp = ALIGN(16) + 0x8000;\n\
  .lit8 : {\n\
    *(.lit8)\n\
  }\n\
  .lit4 : {\n\
    *(.lit4)\n\
  }\n\
  .sdata : {\n\
    *(.sdata)\n\
  }\n\
   edata  =  .;\n\
   _edata  =  .;\n\
   _fbss = .;\n\
  .sbss : {\n\
    *(.sbss)\n\
    *(.scommon)\n\
  }\n\
  .bss : {\n\
    *(.bss)\n\
    *(COMMON)\n\
  }\n\
   end = .;\n\
   _end = .;\n\
}\n\n"
; }

struct ld_emulation_xfer_struct ld_sslittle_emulation = 
{
  gldsslittle_before_parse,
  syslib_default,
  hll_default,
  after_parse_default,
  after_open_default,
  after_allocation_default,
  set_output_arch_default,
  ldemul_default_target,
  before_allocation_default,
  gldsslittle_get_script,
  "sslittle",
  "ss-coff-little"
};
