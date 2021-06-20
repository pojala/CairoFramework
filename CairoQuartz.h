/*
 *  CairoQuartz.h
 *  CairoFramework
 *
 *  Created by Pauli Ojala on 19.8.2008.
 *  This file is in the public domain.
 *
 */

#ifndef _CAIRO_FWK_QUARTZ_H_
#define _CAIRO_FWK_QUARTZ_H_

#include "cairo.h"
#include <ApplicationServices/ApplicationServices.h>


cairo_public cairo_surface_t *
cairo_quartz_surface_create (cairo_format_t format,
                             unsigned int width,
                             unsigned int height);

cairo_public cairo_surface_t *
cairo_quartz_surface_create_for_cg_context (CGContextRef cgContext,
                                            unsigned int width,
                                            unsigned int height);

cairo_public CGContextRef
cairo_quartz_surface_get_cg_context (cairo_surface_t *surface);


cairo_public cairo_font_face_t *
cairo_quartz_font_face_create_for_cgfont (CGFontRef font);

cairo_public cairo_font_face_t *
cairo_quartz_font_face_create_for_atsu_font_id (ATSUFontID font_id);


#endif