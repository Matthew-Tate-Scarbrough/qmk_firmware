#pragma once

#include "dactyl_manuform.h"
#include "quantum.h"


#ifdef USE_I2C
	#include <stddef.h>
	#ifdef __AVR__
		#include <avr/io.h>
		#include <avr/interrupt.h>
	#endif
#endif

// -------------------------------------------------------------------------- //
//       Because of the manuform is mirrored, so must this be mirrored.       //
//                                                                            //
// Mirroring is handled by the definition '#define FLIP_HALF', which is set   //
// in your keymap/<name>'s `config.h`.  See 'keymap/crystalhand'.             //
// -------------------------------------------------------------------------- //

//	#ifndef FLIP_HALF
		/*                         THE FLIPPED KEYMAP                          */
        /*                                                                     */
		/* NOTE: Thumb clusters are to match my personal keyboard wiring.  I   */
		/*       am decently sure that I followed Crystalhand's wiring to-the- */
		/*       letter.                                                       */
        /*                                                                     */
		#define LAYOUT_6x6(\
		  L00, L01, L02, L03, L04, L05,           R00, R01, R02, R03, R04, R05, \
		  L10, L11, L12, L13, L14, L15,           R10, R11, R12, R13, R14, R15, \
		  L20, L21, L22, L23, L24, L25,           R20, R21, R22, R23, R24, R25, \
		  L30, L31, L32, L33, L34, L35,           R30, R31, R32, R33, R34, R35, \
		  L40, L41, L42, L43, L44, L45,           R40, R41, R42, R43, R44, R45, \
					L52, L53, L54, L55,           R50, R51, R52, R53,           \
							  L65, L63,           R62, R60,                     \
							  L64, L62,           R63, R61                      \
		  ) \
		  { \
		    { L00,   L01,   L02, L03, L04, L05 }, \
		    { L10,   L11,   L12, L13, L14, L15 }, \
		    { L20,   L21,   L22, L23, L24, L25 }, \
		    { L30,   L31,   L32, L33, L34, L35 }, \
		    { L40,   L41,   L42, L43, L44, L45 }, \
		    { KC_NO, KC_NO, L52, L53, L54, L55 }, \
		    { KC_NO, KC_NO, L62, L63, L64, L65 }, \
												  \
		    { R05,   R04,   R03, R02, R01, R00 }, \
		    { R15,   R14,   R13, R12, R11, R10 }, \
		    { R25,   R24,   R23, R22, R21, R20 }, \
		    { R35,   R34,   R33, R32, R31, R30 }, \
		    { R45,   R44,   R43, R42, R41, R40 }, \
		    { KC_NO, KC_NO, R53, R52, R51, R50 }, \
		    { KC_NO, KC_NO, R63, R62, R61, R60 }  \
		}
/*
 *	#else
 *		#define LAYOUT_6x6(\
 *		  L00, L01, L02, L03, L04, L05,                          R00, R01, R02, R03, R04, R05, \
 *		  L10, L11, L12, L13, L14, L15,                          R10, R11, R12, R13, R14, R15, \
 *		  L20, L21, L22, L23, L24, L25,                          R20, R21, R22, R23, R24, R25, \
 *		  L30, L31, L32, L33, L34, L35,                          R30, R31, R32, R33, R34, R35, \
 *		  L40, L41, L42, L43, L44, L45,                          R40, R41, R42, R43, R44, R45, \
 *			    L52, L53,                                              R52, R53,           \
 *				      L54, L55,                          R50, R51,                     \
 *						L64, L65,      R60, R61,                               \
 *						L62, L63,      R62, R63                                \
 *		  ) \
 *		  { \
 *		    { L00,   L01,   L02, L03, L04, L05 }, \
 *		    { L10,   L11,   L12, L13, L14, L15 }, \
 *		    { L20,   L21,   L22, L23, L24, L25 }, \
 *		    { L30,   L31,   L32, L33, L34, L35 }, \
 *		    { L40,   L41,   L42, L43, L44, L45 }, \
 *		    { KC_NO, KC_NO, L52, L53, L54, L55 }, \
 *		    { KC_NO, KC_NO, L62, L63, L64, L65 }, \
 *							  \
 *		    { R00, R01, R02, R03, R04,   R05   }, \
 *		    { R10, R11, R12, R13, R14,   R15   }, \
 *		    { R20, R21, R22, R23, R24,   R25   }, \
 *		    { R30, R31, R32, R33, R34,   R35   }, \
 *		    { R40, R41, R42, R43, R44,   R45   }, \
 *		    { R50, R51, R52, R53, KC_NO, KC_NO }, \
 *		    { R60, R61, R62, R63, KC_NO, KC_NO }  \
 *		}
 *	#endif
 */
