/* $Id: widget_image.h,v 1.4 2006/04/09 14:17:50 reinelt Exp $
 *
 * image widget handling
 *
 * Copyright (C) 2006 Michael Reinelt <reinelt@eunet.at>
 * Copyright (C) 2006 The LCD4Linux Team <lcd4linux-devel@users.sourceforge.net>
 *
 * This file is part of LCD4Linux.
 *
 * LCD4Linux is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * LCD4Linux is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 *
 * $Log: widget_image.h,v $
 * Revision 1.4  2006/04/09 14:17:50  reinelt
 * autoconf/library fixes, image and graphic display inversion
 *
 * Revision 1.3  2006/02/25 13:36:33  geronet
 * updated indent.sh, applied coding style
 *
 * Revision 1.2  2006/02/08 04:55:05  reinelt
 * moved widget registration to drv_generic_graphic
 *
 * Revision 1.1  2006/01/22 09:16:11  reinelt
 * Image Widget framework added
 *
 */


#ifndef _WIDGET_IMAGE_H_
#define _WIDGET_IMAGE_H_

#include "rgb.h"

typedef struct WIDGET_IMAGE {
    RGBA *bitmap;		/* image bitmap */
    int width, height;		/* size of the image */
    char *file_expr;		/* expression for image filename */
    void *file_tree;		/* pre-compiled expression for image filename */
    char *file;			/* evaluated filename */
    char *update_expr;		/* expression for update interval */
    void *update_tree;		/* pre-compiled expression for update interval */
    int update;			/* update interval (msec) */
    char *visible_expr;		/* expression for visibility */
    void *visible_tree;		/* pre-compiled expression for visibility */
    int visible;		/* image visible? */
    char *inverted_expr;	/* expression for inversion */
    void *inverted_tree;	/* pre-compiled expression for inversion */
    int inverted;		/* image inverted? */
} WIDGET_IMAGE;

extern WIDGET_CLASS Widget_Image;

#endif