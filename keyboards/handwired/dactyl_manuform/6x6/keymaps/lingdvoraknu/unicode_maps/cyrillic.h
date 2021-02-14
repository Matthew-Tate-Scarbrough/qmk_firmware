/*                                                                            *
 * This file requires that you have enabled `UNICODEMAP_ENABLE` in your       *
 * `rules.mk`.  By default with my fork, this is the case.                    *
 *                                                                            *
 *     This will map all cyrillic characters.  Use as needed.  In complex     *
 * keymaps, it may be best to comment out what is not needed.                 *
 *                                                                            */





/*                                  CYRILLIC                                  */

#ifdef UNICODE_ENABLE

	/*                                                                        *
	 * The names for these are `R`, short for 'Russian', and `C` is short for *
	 * 'Cyrillic'.  This should avoid any conflict with the official Russian  *
	 * keymap names.                                                          *
	 *                                                                        */

		// RUSSIAN
		#define RC_A      XP(а, А)
		#define RC_B      XP(б, Б)
		#define RC_V      XP(в, В)
		#define RC_G      XP(г, Г)
		#define RC_D      XP(д, Д)
		#define RC_YE     XP(е, Е)
		#define RC_YO     XP(ё, Ё)
		#define RC_ZH     XP(ж, Ж)
		#define RC_Z      XP(з, З)
		#define RC_I      XP(и, И)
		#define RC_SHORTI XP(й, Й)
		#define RC_K      XP(к, К)
		#define RC_L      XP(л, Л)
		#define RC_M      XP(м, М)
		#define RC_N      XP(н, Н)
		#define RC_O      XP(о, О)
		#define RC_P      XP(п, П)
		#define RC_R      XP(р, Р)
		#define RC_S      XP(с, С)
		#define RC_T      XP(т, Т)
		#define RC_U      XP(у, У)
		#define RC_F      XP(ф, Ф)
		#define RC_KH     XP(х, Х)
		#define RC_TS     XP(ц, Ц)
		#define RC_CH     XP(ч, Ч)
		#define RC_SHCH   XP(ш, Ш)
		#define RC_HSH    XP(щ, Щ)
		#define RC_HARD   XP(ъ, Ъ)
		#define RC_Y      XP(ы, Ы)
		#define RC_SOFT   XP(ь, Ь)
		#define RC_E      XP(э, Э)
		#define RC_YU     XP(ю, ю)
		#define RC_YA     XP(я, Я)

	/*                                                                        *
	 * I judge it best to keep this one separate.  While it makes sense to me *
	 * (as 'j' is the latin letter for the English 'Y' sound), some may not   *
	 * like this.                                                             *
	 *                                                                        */

		// RUSSIAN SYNONYMS 1
		#define RC_J      RC_SHORTI
		#define RC_H      RC_X

	/*                                                                        *
	 * You may want to change the  names of these.  I added 'CYR', you may,   *
	 * however, want to truncate this just to 'C'.  In the off chance you are *
	 * using this as a replacement to the default russian keymap (i.e. you    *
	 * are creating a layout for a non-Russian language that uses a different *
	 * version of the Cyrillic script).                                       *
	 *                                                                        */

//		// RUSSIAN SYNONYMS 2
//		#define CYRA      DC_A
//		#define CYRB      DC_B
//		#define CYRV      DC_V
//		#define CYRG      DC_G
//		#define CYRD      DC_D
//		#define CYRYE     DC_YE
//		#define CYRYO     DC_YO
//		#define CYRZH     DC_ZH
//		#define CYRZ      DC_Z
//		#define CYRI      DC_I
//		#define CYRJ      DC_SHORTI
//		#define CYRK      DC_K
//		#define CYRL      DC_L
//		#define CYRM      DC_M
//		#define CYRN      DC_N
//		#define CYRO      DC_O
//		#define CYRP      DC_P
//		#define CYRR      DC_R
//		#define CYRS      DC_S
//		#define CYRT      DC_T
//		#define CYRU      DC_U
//		#define CYRF      DC_F
//		#define CYRX      DC_KH
//		#define CYRTS     DC_TS
//		#define CYRCH     DC_CH
//		#define CYRSHCH   DC_SHCH
//		#define CYRKHSH   DC_HSH
//		#define CYRHARD   DC_HARD
//		#define CYRY      DC_Y
//		#define CYRSOFT   DC_SOFT
//		#define CYRE      DC_E
//		#define CYRYU     DC_YU
//		#define CYRYA     DC_YA


	/*                                                                        *
	 * For the purposes of these, the letters that most resemble their modern *
	 * counterparts, these shall be named in accordance with the proper sche- *
	 * ma, all others will be called by a greek name and sym-linked to an al- *
	 * ternate name, suffixed by `a`.  `d` means 'diaeresis'.  `n` is 'nasal- *
	 * ized'.
	 *                                                                        */

//		// OLD CYRILLIC
//		#define OC_A     XP(а, А)
//		#define OC_B     XP(б, Б)
//		#define OC_V     XP(в, В)
//		#define OC_G     XP(г, Г)
//		#define OC_D     XP(д, Д)
//		#define OC_E     XP(є, Є)
//		#define OC_ZH    XP(ж, Ж)
//		#define OC_DZ    XP(ѕ, Ѕ)
//		#define OC_DZETA XP(ꙃ, Ꙃ)
//		#define OC_Z     XP(з, З)
//		#define OC_ZETA  XP(ꙁ, Ꙁ)
//		#define OC_I     XP(и, И)
//		#define OC_IOTA  XP(і, І)
//		#define OC_IOTAd XP(ї, Ї)
//		#define OC_DJ    XP(ꙉ, Ꙉ)
//		#define OC_K     XP(к, К)
//		#define OC_L     XP(л, Л)
//		#define OC_M     XP(м, М)
//		#define OC_N     XP(н, Н)
//		#define OC_O     XP(о, О)
//		#define OC_P     XP(п, П)
//		#define OC_R     XP(р, Р)
//		#define OC_S     XP(с, С)
//		#define OC_T     XP(т, Т)
//		#define OC_OU    XP(ꙋ, Ꙋ)
//		#define OC_F     XP(ф, ф)
//		#define OC_X     XP(х, Х)
//		#define OC_OMEGA XP(ѡ, Ѡ)
//		#define OC_TS    XP(ц, Ц)
//		#define OC_CH    XP(ч, Ч)
//		#define OC_SH    XP(ш, Ш)
//		#define OC_SHT   XP(щ, Щ)
//		#define OC_HARD  XP(ъ, Ъ)
//		#define OC_Y     XP(ꙑ, Ꙑ)
//		#define OC_SOFT  XP(ь, Ь)
//		#define OC_AE    XP(ѣ, Ѣ)
//		#define OC_YA    XP(ꙗ, Ꙗ)
//		#define OC_YE    XP(ѥ, Ѥ)
//		#define OC_YU    XP(ю, Ю)
//		#define OC_On    XP(ѫ, Ѫ)
//		#define OC_YO    XP(ѭ, Ѭ)
//		#define OC_En    XP(ѧ, Ѧ)
//		#define OC_YEn   XP(ѩ, Ѩ)
//		#define OC_KS    XP(ѯ, Ѯ)
//		#define OC_PS    XP(ѱ, Ѱ)
//		#define OC_TH    XP(ѳ, Ѳ)
//		#define OC_UE    XP(ѵ, Ѵ)
//		#define OC_Q     XP(ҁ, Ҁ)

//		// OLD CYRILLIC SYNONYMS
//		#define OC_Id    OC_IOTAd
//		#define OC_J     OC_IOTA
//		#define OC_Jd    OC_IOTAd

	/*                                                                        *
	 * Because of how convoluted the naming schema shall get, it is best to   *
	 * divide the cyrillic letters by language.                               *
	 *                                                                        */

		// SOUTHERN ALTAI
		#define AC_G      XP(ғ, Ғ)
		#define AC_J      XP(ј, Ј)
		#define AC_K      XP(қ, Қ)
		#define AC_CH     XP(ҹ, Ҹ)
		#define AC_NG     XP(ҥ, Ҥ)
		#define AC_OE     XP(ӧ, Ӧ)
		#define AC_UE     XP(ӱ, Ӱ)
		#define AC_H      XP(һ, Һ)

		// SOUTHERN ALTAI SYNONYMS
		#define AC_X      AC_H


	/*                                                                        *
	 * From here-on-out, letters will be divided by by diacritics.            *
	 *                                                                        *
	 *     a = acute                                                          *
	 *     b = breve                                                          *
	 *     d = diaeresis                                                      *
	 *     dot = tiddle                                                       *
	 *     da  = double accute                                                *
	 *     dg  = double grave                                                 *
	 *     h   = hook                                                         *
	 *     l   = latin
	 *     s   = stroke                                                       *
	 *     v   = vertical stroke                                              *
	 *                                                                        */

#endif
