#include QMK_KEYBOARD_H


#define _DVORAK 0
#define _NUM    1
#define _RAISE  2

#define RAISE  TG(_RAISE)
#define MY_NUM TG(_NUM)

#define 

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


    /*                                                                                                                              *
     * ┌──────┬──────┬──────┬──────┬──────┬──────┐                                      ┌──────┬──────┬──────┬──────┬──────┬──────┐ *
     * │ F1   │ F2   │ F3   │ F4   │ F5   │ F6   │                                      │ F7   │ F8   │ F9   │ F10  │ F11  │ F12  │ *
     * │      │      │      │      │      │      │                                      │      │      │      │      │      │      │ *
     * │      │      │      │      │      │      │                                      │      │      │      │      │      │      │ *
     * ├──────┼──────┼──────┼──────┼──────┼──────┤                                      ├──────┼──────┼──────┼──────┼──────┼──────┤ *
     * │ `    │ 1    │ 2    │ 3    │ 4    │ 5    │                                      │ 6    │ 7    │ 8    │ 9    │ 0    │ =    │ *
     * │      │      │      │      │      │      │                                      │      │      │      │      │      │      │ *
     * │      │      │      │      │      │      │                                      │      │      │      │      │      │      │ *
     * ├──────┼──────┼──────┼──────┼──────┼──────┤                                      ├──────┼──────┼──────┼──────┼──────┼──────┤ *
     * │ \    │ '    │ ,    │ .    │ p    │ y    │                                      │ f    │ g    │ c    │ r    │ l    │ /    │ *
     * │      │      │      │      │      │      │                                      │      │      │      │      │      │      │ *
     * │      │      │      │      │      │      │                                      │      │      │      │      │      │      │ *
     * ├──────┼──────┼──────┼──────╆━━━━━━╅──────┤                                      ├──────╆━━━━━━╅──────┼──────┼──────┼──────┤ *
     * │ ESC  │ a    │ o    │ e    ┃ u    ┃ i    │                                      │ d    ┃ h    ┃  t   │ n    │ s    │ -    │ *
     * │      │      │      │      ┃      ┃      │                                      │      ┃      ┃      │      │      │      │ *
     * │      │      │      │      ┃      ┃      │                                      │      ┃      ┃      │      │      │      │ *
     * ├──────┼──────┼──────┼──────╄━━━━━━╃──────┤                                      ├──────╄━━━━━━╃──────┼──────┼──────┼──────┤ *
     * │ [    │ ;    │ q    │ j    │ k    │ x    │                                      │ b    │ m    │ w    │ v    │ z    │ ]    │ *
     * │      │      │      │      │      │      │                                      │      │      │      │      │      │      │ *
     * │      │      │      │      │      │      │                                      │      │      │      │      │      │      │ *
     * └──────┴──────┼──────┼──────╆━━━━━━╈━━━━━━╈━━━━━━┳━━━━━━┓          ┏━━━━━━┳━━━━━━╈━━━━━━╈━━━━━━╅──────┼──────┼──────┴──────┘ *
     *               │ ←    │ →    ┃ LEFT ┃LEFT  ┃ TAB  ┃SPACE ┃          ┃ LEFT ┃ ALT- ┃RIGHT ┃BACK  ┃ ↓    │ ↑    │               *
     *               │      │      ┃ CTRL ┃ SHIFT┃      ┃      ┃          ┃ META ┃  GR  ┃ SHIFT┃ SPACE┃      │      │               *
     *               │      │      ┃      ┃      ┃      ┃      ┃          ┃      ┃      ┃      ┃      ┃      │      │               *
     *               └──────┴──────┺━━━━━━┻━━━━━━╋━━━━━━╋━━━━━━┫          ┣━━━━━━╋━━━━━━╋━━━━━━┻━━━━━━┹──────┴──────┘               *
     *                                           ┃ LEFT ┃RAISE ┃          ┃LOWER ┃DELETE┃                                           *
     *                                           ┃  ALT ┃      ┃          ┃      ┃      ┃                                           *
     *                                           ┃      ┃      ┃          ┃      ┃      ┃                                           *
     *                                           ┗━━━━━━┻━━━━━━┛          ┗━━━━━━┻━━━━━━┛                                           *
     *                                                                                                                              */

[_DVORAK] = LAYOUT_6x6(

    //-------+-------+-------+-------+-------+--------|*                                                 *|-------+-------+-------+-------+-------+--------||
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
      KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,KC_F6  ,/*                                                 */KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,KC_F11 ,KC_F12 ,//
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
    //-------+-------+-------+-------+-------+--------|*                                                 *|-------+-------+-------+-------+-------+--------||
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
      KC_GRV ,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,/*                                                 */KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0   ,KC_EQL ,//
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
    //-------+-------+-------+-------+-------+--------|*                                                 *|-------+-------+-------+-------+-------+--------||
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
      KC_TAB ,KC_QUOT,KC_COMM,KC_DOT ,KC_P   ,KC_Y   ,/*                                                 */KC_F   ,KC_G   ,KC_C   ,KC_R   ,KC_L   ,KC_SLSH,//
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
    //-------+-------+-------+-------+-------+--------|*                                                 *|-------+-------+-------+-------+-------+--------||
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
      KC_ESC ,KC_A   ,KC_O   ,KC_E   ,KC_U   ,KC_I   ,/*                                                 */KC_D   ,KC_H   ,KC_T   ,KC_N   ,KC_S   ,KC_MINS,//
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
    //-------+-------+-------+-------+-------+--------|*                                                 *|-------+-------+-------+-------+-------+--------||
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
      KC_LBRC,KC_SCLN,KC_Q   ,KC_J   ,KC_K   ,KC_X   ,/*                                                 */KC_B   ,KC_M   ,KC_W   ,KC_V   ,KC_Z   ,KC_RBRC,//
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
    //-------+-------+-------+-------+=======+========|*                                                 *|=======+=======+-------+-------+-------+--------||
                    //       |       |       |        |*                                                 *|       |       |       |        ||
                      MY_NUM ,RAISE  ,KC_BSLS,KC_SPC ,/*                                                 */KC_ENT ,KC_BSPC,KC_DOWN,KC_UP  ,//
                    //       |       |       |        |*                                                 *|       |       |       |        ||
                    //-------+-------+=======+========|*                                                 *|=======+=======+-------+--------||
                                                        //-------+--------|*         *|-------+--------||
                                                        //       |        |*         *|       |        ||
                                                          KC_LCTL,KC_LSFT,/*         */KC_LWIN,KC_RSFT,//
                                                        //       |        |*         *|       |        ||
                                                        //-------+--------|*         *|-------+--------||
                                                        //       |        |*         *|       |        ||
                                                          KC_LWIN,KC_LALT,/*         */KC_DEL ,KC_RTCL //
                                                        //       |        |*         *|       |        ||
                                                        //-------+--------|*         *|-------+--------||
),


[_NUM] = LAYOUT_6x6(

    //-------+-------+-------+-------+-------+--------|*                                                 *|-------+-------+-------+-------+-------+--------||
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
      _______,_______,_______,_______,_______,_______,/*                                                 */_______,_______,_______,_______,_______,_______,//
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
    //-------+-------+-------+-------+-------+--------|*                                                 *|-------+-------+-------+-------+-------+--------||
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
      _______,_______,_______,_______,_______,_______,/*                                                 */_______,KC_NLCK,KC_PSLS,KC_PAST,KC_PMNS,_______,//
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
    //-------+-------+-------+-------+-------+--------|*                                                 *|-------+-------+-------+-------+-------+--------||
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
      _______,_______,_______,_______,_______,_______,/*                                                 */KC_PCMM,KC_P7  ,KC_P8  ,KC_P9  ,KC_PPLS,_______,//
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
    //-------+-------+-------+-------+-------+--------|*                                                 *|-------+-------+-------+-------+-------+--------||
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
      RESET  ,KC_HOME,KC_PGDN,KC_PGUP,KC_END , KC_INS,/*                                                 */KC_PEQL,KC_P4  ,KC_P5  ,KC_P6  ,KC_PPLS,_______,//
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
    //-------+-------+-------+-------+-------+--------|*                                                 *|-------+-------+-------+-------+-------+--------||
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
      _______,_______,_______,_______,_______,_______,/*                                                 */_______,KC_P1  ,KC_P2  ,KC_P3  ,KC_PENT,_______,//
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
    //-------+-------+-------+-------+=======+========|*                                                 *|=======+=======+-------+-------+-------+--------||
                    //       |       |       |        |*                                                 *|       |       |       |        ||
                      MY_NUM ,RAISE  ,_______,_______,/*                                                 */_______,_______,KC_P0  ,KC_PDOT,//
                    //       |       |       |        |*                                                 *|       |       |       |        ||
                    //-------+-------+=======+========|*                                                 *|=======+=======+-------+--------||
                                                        //-------+--------|*         *|-------+--------||
                                                        //       |        |*         *|       |        ||
                                                          _______,_______,/*         */_______,_______,//
                                                        //       |        |*         *|       |        ||
                                                        //-------+--------|*         *|-------+--------||
                                                        //       |        |*         *|       |        ||
                                                          _______,_______,/*         */_______,_______ //
                                                        //       |        |*         *|       |        ||
                                                        //-------+--------|*         *|-------+--------||
),

[_RAISE] = LAYOUT_6x6(

    //-------+-------+-------+-------+-------+--------|*                                                 *|-------+-------+-------+-------+-------+--------||
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
      _______,_______,_______,_______,_______,_______,/*                                                 */_______,_______,_______,_______,_______,_______,//
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
    //-------+-------+-------+-------+-------+--------|*                                                 *|-------+-------+-------+-------+-------+--------||
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
      _______,_______,_______,_______,_______,_______,/*                                                 */_______,_______,_______,_______,_______,_______,//
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
    //-------+-------+-------+-------+-------+--------|*                                                 *|-------+-------+-------+-------+-------+--------||
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
      _______,_______,_______,KC_W   ,KC_E   ,KC_R   ,/*                                                 */_______,_______,_______,_______,_______,_______,//
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
    //-------+-------+-------+-------+-------+--------|*                                                 *|-------+-------+-------+-------+-------+--------||
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
      _______,_______,KC_A   ,KC_S   ,KC_D   ,_______,/*                                                 */_______,LEFT   ,DOWN   ,UP     ,RIGHT  ,_______,//
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
    //-------+-------+-------+-------+-------+--------|*                                                 *|-------+-------+-------+-------+-------+--------||
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
      _______,_______,_______,_______,_______,_______,/*                                                 */_______,_______,_______,_______,_______,_______,//
    //       |       |       |       |       |        |*                                                 *|       |       |       |       |       |        ||
    //-------+-------+-------+-------+=======+========|*                                                 *|=======+=======+-------+-------+-------+--------||
                    //       |       |       |        |*                                                 *|       |       |       |        ||
                      MY_NUM ,RAISE  ,_______,_______,/*                                                 */_______,_______,_______,_______,//
                    //       |       |       |        |*                                                 *|       |       |       |        ||
                    //-------+-------+=======+========|*                                                 *|=======+=======+-------+--------||
                                                        //-------+--------|*         *|-------+--------||
                                                        //       |        |*         *|       |        ||
                                                          _______,_______,/*         */_______,_______,//
                                                        //       |        |*         *|       |        ||
                                                        //-------+--------|*         *|-------+--------||
                                                        //       |        |*         *|       |        ||
                                                          _______,_______,/*         */_______,_______ //
                                                        //       |        |*         *|       |        ||
                                                        //-------+--------|*         *|-------+--------||
),


 /*
  *	[_QWERTY] = LAYOUT_6x6(
  *
  *    KC_F1  , KC_F2 , KC_F3 , KC_F4 , KC_F5 , KC_F6 ,                         KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,KC_F12 ,
  *    KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_BSPC,
  *    KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_MINS,
  *    KC_LSFT, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
  *    KC_LCTL, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_BSLASH,
  *                     KC_LBRC,KC_RBRC,                                                       KC_PLUS, KC_EQL,
  *                                     RAISE,KC_SPC,                        KC_ENT, LOWER,
  *                                     KC_TAB,KC_HOME,                         KC_END,  KC_DEL,
  *                                     KC_BSPC, KC_GRV,                        KC_LGUI, KC_LALT
  * ),
  *
  * [_LOWER] = LAYOUT_6x6(
  *
  *    KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 , KC_F6  ,                         KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,KC_F12 ,
  *    KC_TILD,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                        KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_DEL,
  *    _______,_______,_______,_______,_______,KC_LBRC,                        KC_RBRC, KC_P7 , KC_P8 , KC_P9 ,_______,KC_PLUS,
  *    _______,KC_HOME,KC_PGUP,KC_PGDN,KC_END ,KC_LPRN,                        KC_RPRN, KC_P4 , KC_P5 , KC_P6 ,KC_MINS,KC_PIPE,
  *    _______,_______,_______,_______,_______,_______,                        _______, KC_P1 , KC_P2 , KC_P3 ,KC_EQL ,KC_UNDS,
  *                                            _______,KC_PSCR,            _______, KC_P0,
  *                                            _______,_______,            _______,_______,
  *                                            _______,_______,            _______,_______,
  *                                            _______,_______,            _______,_______
  * ),
  *
  * [_RAISE] = LAYOUT_6x6(
  *
  *      KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
  *      _______,_______,_______,_______,_______,KC_LBRC,                        KC_RBRC,_______,KC_NLCK,KC_INS ,KC_SLCK,KC_MUTE,
  *      _______,KC_LEFT,KC_UP  ,KC_DOWN,KC_RGHT,KC_LPRN,                        KC_RPRN,KC_MPRV,KC_MPLY,KC_MNXT,_______,KC_VOLU,
  *      _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,KC_VOLD,
  *      _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
  *
  *                                              _______,_______,            KC_EQL ,_______,
  *                                              _______,_______,            _______,_______,
  *                                              _______,_______,            _______,_______,
  *                                              _______,_______,            _______,_______
  * ),
  */

};
