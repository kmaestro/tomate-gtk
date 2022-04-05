
/* This file is generated by glib-mkenums, do not modify it. This code is licensed under the same license as the containing project. Note that it links to GLib, so must comply with the LGPL linking clauses. */

#include "config.h"
#include "glib-enumtypes.h"
#include <glib-object.h>

G_GNUC_BEGIN_IGNORE_DEPRECATIONS
/* enumerations from "../subprojects/glib/gobject/../glib/gunicode.h" */
GType
g_unicode_type_get_type (void)
{
  static gsize static_g_define_type_id = 0;

  if (g_once_init_enter (&static_g_define_type_id))
    {
      static const GEnumValue values[] = {
        { G_UNICODE_CONTROL, "G_UNICODE_CONTROL", "control" },
        { G_UNICODE_FORMAT, "G_UNICODE_FORMAT", "format" },
        { G_UNICODE_UNASSIGNED, "G_UNICODE_UNASSIGNED", "unassigned" },
        { G_UNICODE_PRIVATE_USE, "G_UNICODE_PRIVATE_USE", "private-use" },
        { G_UNICODE_SURROGATE, "G_UNICODE_SURROGATE", "surrogate" },
        { G_UNICODE_LOWERCASE_LETTER, "G_UNICODE_LOWERCASE_LETTER", "lowercase-letter" },
        { G_UNICODE_MODIFIER_LETTER, "G_UNICODE_MODIFIER_LETTER", "modifier-letter" },
        { G_UNICODE_OTHER_LETTER, "G_UNICODE_OTHER_LETTER", "other-letter" },
        { G_UNICODE_TITLECASE_LETTER, "G_UNICODE_TITLECASE_LETTER", "titlecase-letter" },
        { G_UNICODE_UPPERCASE_LETTER, "G_UNICODE_UPPERCASE_LETTER", "uppercase-letter" },
        { G_UNICODE_SPACING_MARK, "G_UNICODE_SPACING_MARK", "spacing-mark" },
        { G_UNICODE_ENCLOSING_MARK, "G_UNICODE_ENCLOSING_MARK", "enclosing-mark" },
        { G_UNICODE_NON_SPACING_MARK, "G_UNICODE_NON_SPACING_MARK", "non-spacing-mark" },
        { G_UNICODE_DECIMAL_NUMBER, "G_UNICODE_DECIMAL_NUMBER", "decimal-number" },
        { G_UNICODE_LETTER_NUMBER, "G_UNICODE_LETTER_NUMBER", "letter-number" },
        { G_UNICODE_OTHER_NUMBER, "G_UNICODE_OTHER_NUMBER", "other-number" },
        { G_UNICODE_CONNECT_PUNCTUATION, "G_UNICODE_CONNECT_PUNCTUATION", "connect-punctuation" },
        { G_UNICODE_DASH_PUNCTUATION, "G_UNICODE_DASH_PUNCTUATION", "dash-punctuation" },
        { G_UNICODE_CLOSE_PUNCTUATION, "G_UNICODE_CLOSE_PUNCTUATION", "close-punctuation" },
        { G_UNICODE_FINAL_PUNCTUATION, "G_UNICODE_FINAL_PUNCTUATION", "final-punctuation" },
        { G_UNICODE_INITIAL_PUNCTUATION, "G_UNICODE_INITIAL_PUNCTUATION", "initial-punctuation" },
        { G_UNICODE_OTHER_PUNCTUATION, "G_UNICODE_OTHER_PUNCTUATION", "other-punctuation" },
        { G_UNICODE_OPEN_PUNCTUATION, "G_UNICODE_OPEN_PUNCTUATION", "open-punctuation" },
        { G_UNICODE_CURRENCY_SYMBOL, "G_UNICODE_CURRENCY_SYMBOL", "currency-symbol" },
        { G_UNICODE_MODIFIER_SYMBOL, "G_UNICODE_MODIFIER_SYMBOL", "modifier-symbol" },
        { G_UNICODE_MATH_SYMBOL, "G_UNICODE_MATH_SYMBOL", "math-symbol" },
        { G_UNICODE_OTHER_SYMBOL, "G_UNICODE_OTHER_SYMBOL", "other-symbol" },
        { G_UNICODE_LINE_SEPARATOR, "G_UNICODE_LINE_SEPARATOR", "line-separator" },
        { G_UNICODE_PARAGRAPH_SEPARATOR, "G_UNICODE_PARAGRAPH_SEPARATOR", "paragraph-separator" },
        { G_UNICODE_SPACE_SEPARATOR, "G_UNICODE_SPACE_SEPARATOR", "space-separator" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("GUnicodeType"), values);
      g_once_init_leave (&static_g_define_type_id, g_define_type_id);
    }

  return static_g_define_type_id;
}
GType
g_unicode_break_type_get_type (void)
{
  static gsize static_g_define_type_id = 0;

  if (g_once_init_enter (&static_g_define_type_id))
    {
      static const GEnumValue values[] = {
        { G_UNICODE_BREAK_MANDATORY, "G_UNICODE_BREAK_MANDATORY", "mandatory" },
        { G_UNICODE_BREAK_CARRIAGE_RETURN, "G_UNICODE_BREAK_CARRIAGE_RETURN", "carriage-return" },
        { G_UNICODE_BREAK_LINE_FEED, "G_UNICODE_BREAK_LINE_FEED", "line-feed" },
        { G_UNICODE_BREAK_COMBINING_MARK, "G_UNICODE_BREAK_COMBINING_MARK", "combining-mark" },
        { G_UNICODE_BREAK_SURROGATE, "G_UNICODE_BREAK_SURROGATE", "surrogate" },
        { G_UNICODE_BREAK_ZERO_WIDTH_SPACE, "G_UNICODE_BREAK_ZERO_WIDTH_SPACE", "zero-width-space" },
        { G_UNICODE_BREAK_INSEPARABLE, "G_UNICODE_BREAK_INSEPARABLE", "inseparable" },
        { G_UNICODE_BREAK_NON_BREAKING_GLUE, "G_UNICODE_BREAK_NON_BREAKING_GLUE", "non-breaking-glue" },
        { G_UNICODE_BREAK_CONTINGENT, "G_UNICODE_BREAK_CONTINGENT", "contingent" },
        { G_UNICODE_BREAK_SPACE, "G_UNICODE_BREAK_SPACE", "space" },
        { G_UNICODE_BREAK_AFTER, "G_UNICODE_BREAK_AFTER", "after" },
        { G_UNICODE_BREAK_BEFORE, "G_UNICODE_BREAK_BEFORE", "before" },
        { G_UNICODE_BREAK_BEFORE_AND_AFTER, "G_UNICODE_BREAK_BEFORE_AND_AFTER", "before-and-after" },
        { G_UNICODE_BREAK_HYPHEN, "G_UNICODE_BREAK_HYPHEN", "hyphen" },
        { G_UNICODE_BREAK_NON_STARTER, "G_UNICODE_BREAK_NON_STARTER", "non-starter" },
        { G_UNICODE_BREAK_OPEN_PUNCTUATION, "G_UNICODE_BREAK_OPEN_PUNCTUATION", "open-punctuation" },
        { G_UNICODE_BREAK_CLOSE_PUNCTUATION, "G_UNICODE_BREAK_CLOSE_PUNCTUATION", "close-punctuation" },
        { G_UNICODE_BREAK_QUOTATION, "G_UNICODE_BREAK_QUOTATION", "quotation" },
        { G_UNICODE_BREAK_EXCLAMATION, "G_UNICODE_BREAK_EXCLAMATION", "exclamation" },
        { G_UNICODE_BREAK_IDEOGRAPHIC, "G_UNICODE_BREAK_IDEOGRAPHIC", "ideographic" },
        { G_UNICODE_BREAK_NUMERIC, "G_UNICODE_BREAK_NUMERIC", "numeric" },
        { G_UNICODE_BREAK_INFIX_SEPARATOR, "G_UNICODE_BREAK_INFIX_SEPARATOR", "infix-separator" },
        { G_UNICODE_BREAK_SYMBOL, "G_UNICODE_BREAK_SYMBOL", "symbol" },
        { G_UNICODE_BREAK_ALPHABETIC, "G_UNICODE_BREAK_ALPHABETIC", "alphabetic" },
        { G_UNICODE_BREAK_PREFIX, "G_UNICODE_BREAK_PREFIX", "prefix" },
        { G_UNICODE_BREAK_POSTFIX, "G_UNICODE_BREAK_POSTFIX", "postfix" },
        { G_UNICODE_BREAK_COMPLEX_CONTEXT, "G_UNICODE_BREAK_COMPLEX_CONTEXT", "complex-context" },
        { G_UNICODE_BREAK_AMBIGUOUS, "G_UNICODE_BREAK_AMBIGUOUS", "ambiguous" },
        { G_UNICODE_BREAK_UNKNOWN, "G_UNICODE_BREAK_UNKNOWN", "unknown" },
        { G_UNICODE_BREAK_NEXT_LINE, "G_UNICODE_BREAK_NEXT_LINE", "next-line" },
        { G_UNICODE_BREAK_WORD_JOINER, "G_UNICODE_BREAK_WORD_JOINER", "word-joiner" },
        { G_UNICODE_BREAK_HANGUL_L_JAMO, "G_UNICODE_BREAK_HANGUL_L_JAMO", "hangul-l-jamo" },
        { G_UNICODE_BREAK_HANGUL_V_JAMO, "G_UNICODE_BREAK_HANGUL_V_JAMO", "hangul-v-jamo" },
        { G_UNICODE_BREAK_HANGUL_T_JAMO, "G_UNICODE_BREAK_HANGUL_T_JAMO", "hangul-t-jamo" },
        { G_UNICODE_BREAK_HANGUL_LV_SYLLABLE, "G_UNICODE_BREAK_HANGUL_LV_SYLLABLE", "hangul-lv-syllable" },
        { G_UNICODE_BREAK_HANGUL_LVT_SYLLABLE, "G_UNICODE_BREAK_HANGUL_LVT_SYLLABLE", "hangul-lvt-syllable" },
        { G_UNICODE_BREAK_CLOSE_PARANTHESIS, "G_UNICODE_BREAK_CLOSE_PARANTHESIS", "close-paranthesis" },
        { G_UNICODE_BREAK_CLOSE_PARENTHESIS, "G_UNICODE_BREAK_CLOSE_PARENTHESIS", "close-parenthesis" },
        { G_UNICODE_BREAK_CONDITIONAL_JAPANESE_STARTER, "G_UNICODE_BREAK_CONDITIONAL_JAPANESE_STARTER", "conditional-japanese-starter" },
        { G_UNICODE_BREAK_HEBREW_LETTER, "G_UNICODE_BREAK_HEBREW_LETTER", "hebrew-letter" },
        { G_UNICODE_BREAK_REGIONAL_INDICATOR, "G_UNICODE_BREAK_REGIONAL_INDICATOR", "regional-indicator" },
        { G_UNICODE_BREAK_EMOJI_BASE, "G_UNICODE_BREAK_EMOJI_BASE", "emoji-base" },
        { G_UNICODE_BREAK_EMOJI_MODIFIER, "G_UNICODE_BREAK_EMOJI_MODIFIER", "emoji-modifier" },
        { G_UNICODE_BREAK_ZERO_WIDTH_JOINER, "G_UNICODE_BREAK_ZERO_WIDTH_JOINER", "zero-width-joiner" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("GUnicodeBreakType"), values);
      g_once_init_leave (&static_g_define_type_id, g_define_type_id);
    }

  return static_g_define_type_id;
}
GType
g_unicode_script_get_type (void)
{
  static gsize static_g_define_type_id = 0;

  if (g_once_init_enter (&static_g_define_type_id))
    {
      static const GEnumValue values[] = {
        { G_UNICODE_SCRIPT_INVALID_CODE, "G_UNICODE_SCRIPT_INVALID_CODE", "invalid-code" },
        { G_UNICODE_SCRIPT_COMMON, "G_UNICODE_SCRIPT_COMMON", "common" },
        { G_UNICODE_SCRIPT_INHERITED, "G_UNICODE_SCRIPT_INHERITED", "inherited" },
        { G_UNICODE_SCRIPT_ARABIC, "G_UNICODE_SCRIPT_ARABIC", "arabic" },
        { G_UNICODE_SCRIPT_ARMENIAN, "G_UNICODE_SCRIPT_ARMENIAN", "armenian" },
        { G_UNICODE_SCRIPT_BENGALI, "G_UNICODE_SCRIPT_BENGALI", "bengali" },
        { G_UNICODE_SCRIPT_BOPOMOFO, "G_UNICODE_SCRIPT_BOPOMOFO", "bopomofo" },
        { G_UNICODE_SCRIPT_CHEROKEE, "G_UNICODE_SCRIPT_CHEROKEE", "cherokee" },
        { G_UNICODE_SCRIPT_COPTIC, "G_UNICODE_SCRIPT_COPTIC", "coptic" },
        { G_UNICODE_SCRIPT_CYRILLIC, "G_UNICODE_SCRIPT_CYRILLIC", "cyrillic" },
        { G_UNICODE_SCRIPT_DESERET, "G_UNICODE_SCRIPT_DESERET", "deseret" },
        { G_UNICODE_SCRIPT_DEVANAGARI, "G_UNICODE_SCRIPT_DEVANAGARI", "devanagari" },
        { G_UNICODE_SCRIPT_ETHIOPIC, "G_UNICODE_SCRIPT_ETHIOPIC", "ethiopic" },
        { G_UNICODE_SCRIPT_GEORGIAN, "G_UNICODE_SCRIPT_GEORGIAN", "georgian" },
        { G_UNICODE_SCRIPT_GOTHIC, "G_UNICODE_SCRIPT_GOTHIC", "gothic" },
        { G_UNICODE_SCRIPT_GREEK, "G_UNICODE_SCRIPT_GREEK", "greek" },
        { G_UNICODE_SCRIPT_GUJARATI, "G_UNICODE_SCRIPT_GUJARATI", "gujarati" },
        { G_UNICODE_SCRIPT_GURMUKHI, "G_UNICODE_SCRIPT_GURMUKHI", "gurmukhi" },
        { G_UNICODE_SCRIPT_HAN, "G_UNICODE_SCRIPT_HAN", "han" },
        { G_UNICODE_SCRIPT_HANGUL, "G_UNICODE_SCRIPT_HANGUL", "hangul" },
        { G_UNICODE_SCRIPT_HEBREW, "G_UNICODE_SCRIPT_HEBREW", "hebrew" },
        { G_UNICODE_SCRIPT_HIRAGANA, "G_UNICODE_SCRIPT_HIRAGANA", "hiragana" },
        { G_UNICODE_SCRIPT_KANNADA, "G_UNICODE_SCRIPT_KANNADA", "kannada" },
        { G_UNICODE_SCRIPT_KATAKANA, "G_UNICODE_SCRIPT_KATAKANA", "katakana" },
        { G_UNICODE_SCRIPT_KHMER, "G_UNICODE_SCRIPT_KHMER", "khmer" },
        { G_UNICODE_SCRIPT_LAO, "G_UNICODE_SCRIPT_LAO", "lao" },
        { G_UNICODE_SCRIPT_LATIN, "G_UNICODE_SCRIPT_LATIN", "latin" },
        { G_UNICODE_SCRIPT_MALAYALAM, "G_UNICODE_SCRIPT_MALAYALAM", "malayalam" },
        { G_UNICODE_SCRIPT_MONGOLIAN, "G_UNICODE_SCRIPT_MONGOLIAN", "mongolian" },
        { G_UNICODE_SCRIPT_MYANMAR, "G_UNICODE_SCRIPT_MYANMAR", "myanmar" },
        { G_UNICODE_SCRIPT_OGHAM, "G_UNICODE_SCRIPT_OGHAM", "ogham" },
        { G_UNICODE_SCRIPT_OLD_ITALIC, "G_UNICODE_SCRIPT_OLD_ITALIC", "old-italic" },
        { G_UNICODE_SCRIPT_ORIYA, "G_UNICODE_SCRIPT_ORIYA", "oriya" },
        { G_UNICODE_SCRIPT_RUNIC, "G_UNICODE_SCRIPT_RUNIC", "runic" },
        { G_UNICODE_SCRIPT_SINHALA, "G_UNICODE_SCRIPT_SINHALA", "sinhala" },
        { G_UNICODE_SCRIPT_SYRIAC, "G_UNICODE_SCRIPT_SYRIAC", "syriac" },
        { G_UNICODE_SCRIPT_TAMIL, "G_UNICODE_SCRIPT_TAMIL", "tamil" },
        { G_UNICODE_SCRIPT_TELUGU, "G_UNICODE_SCRIPT_TELUGU", "telugu" },
        { G_UNICODE_SCRIPT_THAANA, "G_UNICODE_SCRIPT_THAANA", "thaana" },
        { G_UNICODE_SCRIPT_THAI, "G_UNICODE_SCRIPT_THAI", "thai" },
        { G_UNICODE_SCRIPT_TIBETAN, "G_UNICODE_SCRIPT_TIBETAN", "tibetan" },
        { G_UNICODE_SCRIPT_CANADIAN_ABORIGINAL, "G_UNICODE_SCRIPT_CANADIAN_ABORIGINAL", "canadian-aboriginal" },
        { G_UNICODE_SCRIPT_YI, "G_UNICODE_SCRIPT_YI", "yi" },
        { G_UNICODE_SCRIPT_TAGALOG, "G_UNICODE_SCRIPT_TAGALOG", "tagalog" },
        { G_UNICODE_SCRIPT_HANUNOO, "G_UNICODE_SCRIPT_HANUNOO", "hanunoo" },
        { G_UNICODE_SCRIPT_BUHID, "G_UNICODE_SCRIPT_BUHID", "buhid" },
        { G_UNICODE_SCRIPT_TAGBANWA, "G_UNICODE_SCRIPT_TAGBANWA", "tagbanwa" },
        { G_UNICODE_SCRIPT_BRAILLE, "G_UNICODE_SCRIPT_BRAILLE", "braille" },
        { G_UNICODE_SCRIPT_CYPRIOT, "G_UNICODE_SCRIPT_CYPRIOT", "cypriot" },
        { G_UNICODE_SCRIPT_LIMBU, "G_UNICODE_SCRIPT_LIMBU", "limbu" },
        { G_UNICODE_SCRIPT_OSMANYA, "G_UNICODE_SCRIPT_OSMANYA", "osmanya" },
        { G_UNICODE_SCRIPT_SHAVIAN, "G_UNICODE_SCRIPT_SHAVIAN", "shavian" },
        { G_UNICODE_SCRIPT_LINEAR_B, "G_UNICODE_SCRIPT_LINEAR_B", "linear-b" },
        { G_UNICODE_SCRIPT_TAI_LE, "G_UNICODE_SCRIPT_TAI_LE", "tai-le" },
        { G_UNICODE_SCRIPT_UGARITIC, "G_UNICODE_SCRIPT_UGARITIC", "ugaritic" },
        { G_UNICODE_SCRIPT_NEW_TAI_LUE, "G_UNICODE_SCRIPT_NEW_TAI_LUE", "new-tai-lue" },
        { G_UNICODE_SCRIPT_BUGINESE, "G_UNICODE_SCRIPT_BUGINESE", "buginese" },
        { G_UNICODE_SCRIPT_GLAGOLITIC, "G_UNICODE_SCRIPT_GLAGOLITIC", "glagolitic" },
        { G_UNICODE_SCRIPT_TIFINAGH, "G_UNICODE_SCRIPT_TIFINAGH", "tifinagh" },
        { G_UNICODE_SCRIPT_SYLOTI_NAGRI, "G_UNICODE_SCRIPT_SYLOTI_NAGRI", "syloti-nagri" },
        { G_UNICODE_SCRIPT_OLD_PERSIAN, "G_UNICODE_SCRIPT_OLD_PERSIAN", "old-persian" },
        { G_UNICODE_SCRIPT_KHAROSHTHI, "G_UNICODE_SCRIPT_KHAROSHTHI", "kharoshthi" },
        { G_UNICODE_SCRIPT_UNKNOWN, "G_UNICODE_SCRIPT_UNKNOWN", "unknown" },
        { G_UNICODE_SCRIPT_BALINESE, "G_UNICODE_SCRIPT_BALINESE", "balinese" },
        { G_UNICODE_SCRIPT_CUNEIFORM, "G_UNICODE_SCRIPT_CUNEIFORM", "cuneiform" },
        { G_UNICODE_SCRIPT_PHOENICIAN, "G_UNICODE_SCRIPT_PHOENICIAN", "phoenician" },
        { G_UNICODE_SCRIPT_PHAGS_PA, "G_UNICODE_SCRIPT_PHAGS_PA", "phags-pa" },
        { G_UNICODE_SCRIPT_NKO, "G_UNICODE_SCRIPT_NKO", "nko" },
        { G_UNICODE_SCRIPT_KAYAH_LI, "G_UNICODE_SCRIPT_KAYAH_LI", "kayah-li" },
        { G_UNICODE_SCRIPT_LEPCHA, "G_UNICODE_SCRIPT_LEPCHA", "lepcha" },
        { G_UNICODE_SCRIPT_REJANG, "G_UNICODE_SCRIPT_REJANG", "rejang" },
        { G_UNICODE_SCRIPT_SUNDANESE, "G_UNICODE_SCRIPT_SUNDANESE", "sundanese" },
        { G_UNICODE_SCRIPT_SAURASHTRA, "G_UNICODE_SCRIPT_SAURASHTRA", "saurashtra" },
        { G_UNICODE_SCRIPT_CHAM, "G_UNICODE_SCRIPT_CHAM", "cham" },
        { G_UNICODE_SCRIPT_OL_CHIKI, "G_UNICODE_SCRIPT_OL_CHIKI", "ol-chiki" },
        { G_UNICODE_SCRIPT_VAI, "G_UNICODE_SCRIPT_VAI", "vai" },
        { G_UNICODE_SCRIPT_CARIAN, "G_UNICODE_SCRIPT_CARIAN", "carian" },
        { G_UNICODE_SCRIPT_LYCIAN, "G_UNICODE_SCRIPT_LYCIAN", "lycian" },
        { G_UNICODE_SCRIPT_LYDIAN, "G_UNICODE_SCRIPT_LYDIAN", "lydian" },
        { G_UNICODE_SCRIPT_AVESTAN, "G_UNICODE_SCRIPT_AVESTAN", "avestan" },
        { G_UNICODE_SCRIPT_BAMUM, "G_UNICODE_SCRIPT_BAMUM", "bamum" },
        { G_UNICODE_SCRIPT_EGYPTIAN_HIEROGLYPHS, "G_UNICODE_SCRIPT_EGYPTIAN_HIEROGLYPHS", "egyptian-hieroglyphs" },
        { G_UNICODE_SCRIPT_IMPERIAL_ARAMAIC, "G_UNICODE_SCRIPT_IMPERIAL_ARAMAIC", "imperial-aramaic" },
        { G_UNICODE_SCRIPT_INSCRIPTIONAL_PAHLAVI, "G_UNICODE_SCRIPT_INSCRIPTIONAL_PAHLAVI", "inscriptional-pahlavi" },
        { G_UNICODE_SCRIPT_INSCRIPTIONAL_PARTHIAN, "G_UNICODE_SCRIPT_INSCRIPTIONAL_PARTHIAN", "inscriptional-parthian" },
        { G_UNICODE_SCRIPT_JAVANESE, "G_UNICODE_SCRIPT_JAVANESE", "javanese" },
        { G_UNICODE_SCRIPT_KAITHI, "G_UNICODE_SCRIPT_KAITHI", "kaithi" },
        { G_UNICODE_SCRIPT_LISU, "G_UNICODE_SCRIPT_LISU", "lisu" },
        { G_UNICODE_SCRIPT_MEETEI_MAYEK, "G_UNICODE_SCRIPT_MEETEI_MAYEK", "meetei-mayek" },
        { G_UNICODE_SCRIPT_OLD_SOUTH_ARABIAN, "G_UNICODE_SCRIPT_OLD_SOUTH_ARABIAN", "old-south-arabian" },
        { G_UNICODE_SCRIPT_OLD_TURKIC, "G_UNICODE_SCRIPT_OLD_TURKIC", "old-turkic" },
        { G_UNICODE_SCRIPT_SAMARITAN, "G_UNICODE_SCRIPT_SAMARITAN", "samaritan" },
        { G_UNICODE_SCRIPT_TAI_THAM, "G_UNICODE_SCRIPT_TAI_THAM", "tai-tham" },
        { G_UNICODE_SCRIPT_TAI_VIET, "G_UNICODE_SCRIPT_TAI_VIET", "tai-viet" },
        { G_UNICODE_SCRIPT_BATAK, "G_UNICODE_SCRIPT_BATAK", "batak" },
        { G_UNICODE_SCRIPT_BRAHMI, "G_UNICODE_SCRIPT_BRAHMI", "brahmi" },
        { G_UNICODE_SCRIPT_MANDAIC, "G_UNICODE_SCRIPT_MANDAIC", "mandaic" },
        { G_UNICODE_SCRIPT_CHAKMA, "G_UNICODE_SCRIPT_CHAKMA", "chakma" },
        { G_UNICODE_SCRIPT_MEROITIC_CURSIVE, "G_UNICODE_SCRIPT_MEROITIC_CURSIVE", "meroitic-cursive" },
        { G_UNICODE_SCRIPT_MEROITIC_HIEROGLYPHS, "G_UNICODE_SCRIPT_MEROITIC_HIEROGLYPHS", "meroitic-hieroglyphs" },
        { G_UNICODE_SCRIPT_MIAO, "G_UNICODE_SCRIPT_MIAO", "miao" },
        { G_UNICODE_SCRIPT_SHARADA, "G_UNICODE_SCRIPT_SHARADA", "sharada" },
        { G_UNICODE_SCRIPT_SORA_SOMPENG, "G_UNICODE_SCRIPT_SORA_SOMPENG", "sora-sompeng" },
        { G_UNICODE_SCRIPT_TAKRI, "G_UNICODE_SCRIPT_TAKRI", "takri" },
        { G_UNICODE_SCRIPT_BASSA_VAH, "G_UNICODE_SCRIPT_BASSA_VAH", "bassa-vah" },
        { G_UNICODE_SCRIPT_CAUCASIAN_ALBANIAN, "G_UNICODE_SCRIPT_CAUCASIAN_ALBANIAN", "caucasian-albanian" },
        { G_UNICODE_SCRIPT_DUPLOYAN, "G_UNICODE_SCRIPT_DUPLOYAN", "duployan" },
        { G_UNICODE_SCRIPT_ELBASAN, "G_UNICODE_SCRIPT_ELBASAN", "elbasan" },
        { G_UNICODE_SCRIPT_GRANTHA, "G_UNICODE_SCRIPT_GRANTHA", "grantha" },
        { G_UNICODE_SCRIPT_KHOJKI, "G_UNICODE_SCRIPT_KHOJKI", "khojki" },
        { G_UNICODE_SCRIPT_KHUDAWADI, "G_UNICODE_SCRIPT_KHUDAWADI", "khudawadi" },
        { G_UNICODE_SCRIPT_LINEAR_A, "G_UNICODE_SCRIPT_LINEAR_A", "linear-a" },
        { G_UNICODE_SCRIPT_MAHAJANI, "G_UNICODE_SCRIPT_MAHAJANI", "mahajani" },
        { G_UNICODE_SCRIPT_MANICHAEAN, "G_UNICODE_SCRIPT_MANICHAEAN", "manichaean" },
        { G_UNICODE_SCRIPT_MENDE_KIKAKUI, "G_UNICODE_SCRIPT_MENDE_KIKAKUI", "mende-kikakui" },
        { G_UNICODE_SCRIPT_MODI, "G_UNICODE_SCRIPT_MODI", "modi" },
        { G_UNICODE_SCRIPT_MRO, "G_UNICODE_SCRIPT_MRO", "mro" },
        { G_UNICODE_SCRIPT_NABATAEAN, "G_UNICODE_SCRIPT_NABATAEAN", "nabataean" },
        { G_UNICODE_SCRIPT_OLD_NORTH_ARABIAN, "G_UNICODE_SCRIPT_OLD_NORTH_ARABIAN", "old-north-arabian" },
        { G_UNICODE_SCRIPT_OLD_PERMIC, "G_UNICODE_SCRIPT_OLD_PERMIC", "old-permic" },
        { G_UNICODE_SCRIPT_PAHAWH_HMONG, "G_UNICODE_SCRIPT_PAHAWH_HMONG", "pahawh-hmong" },
        { G_UNICODE_SCRIPT_PALMYRENE, "G_UNICODE_SCRIPT_PALMYRENE", "palmyrene" },
        { G_UNICODE_SCRIPT_PAU_CIN_HAU, "G_UNICODE_SCRIPT_PAU_CIN_HAU", "pau-cin-hau" },
        { G_UNICODE_SCRIPT_PSALTER_PAHLAVI, "G_UNICODE_SCRIPT_PSALTER_PAHLAVI", "psalter-pahlavi" },
        { G_UNICODE_SCRIPT_SIDDHAM, "G_UNICODE_SCRIPT_SIDDHAM", "siddham" },
        { G_UNICODE_SCRIPT_TIRHUTA, "G_UNICODE_SCRIPT_TIRHUTA", "tirhuta" },
        { G_UNICODE_SCRIPT_WARANG_CITI, "G_UNICODE_SCRIPT_WARANG_CITI", "warang-citi" },
        { G_UNICODE_SCRIPT_AHOM, "G_UNICODE_SCRIPT_AHOM", "ahom" },
        { G_UNICODE_SCRIPT_ANATOLIAN_HIEROGLYPHS, "G_UNICODE_SCRIPT_ANATOLIAN_HIEROGLYPHS", "anatolian-hieroglyphs" },
        { G_UNICODE_SCRIPT_HATRAN, "G_UNICODE_SCRIPT_HATRAN", "hatran" },
        { G_UNICODE_SCRIPT_MULTANI, "G_UNICODE_SCRIPT_MULTANI", "multani" },
        { G_UNICODE_SCRIPT_OLD_HUNGARIAN, "G_UNICODE_SCRIPT_OLD_HUNGARIAN", "old-hungarian" },
        { G_UNICODE_SCRIPT_SIGNWRITING, "G_UNICODE_SCRIPT_SIGNWRITING", "signwriting" },
        { G_UNICODE_SCRIPT_ADLAM, "G_UNICODE_SCRIPT_ADLAM", "adlam" },
        { G_UNICODE_SCRIPT_BHAIKSUKI, "G_UNICODE_SCRIPT_BHAIKSUKI", "bhaiksuki" },
        { G_UNICODE_SCRIPT_MARCHEN, "G_UNICODE_SCRIPT_MARCHEN", "marchen" },
        { G_UNICODE_SCRIPT_NEWA, "G_UNICODE_SCRIPT_NEWA", "newa" },
        { G_UNICODE_SCRIPT_OSAGE, "G_UNICODE_SCRIPT_OSAGE", "osage" },
        { G_UNICODE_SCRIPT_TANGUT, "G_UNICODE_SCRIPT_TANGUT", "tangut" },
        { G_UNICODE_SCRIPT_MASARAM_GONDI, "G_UNICODE_SCRIPT_MASARAM_GONDI", "masaram-gondi" },
        { G_UNICODE_SCRIPT_NUSHU, "G_UNICODE_SCRIPT_NUSHU", "nushu" },
        { G_UNICODE_SCRIPT_SOYOMBO, "G_UNICODE_SCRIPT_SOYOMBO", "soyombo" },
        { G_UNICODE_SCRIPT_ZANABAZAR_SQUARE, "G_UNICODE_SCRIPT_ZANABAZAR_SQUARE", "zanabazar-square" },
        { G_UNICODE_SCRIPT_DOGRA, "G_UNICODE_SCRIPT_DOGRA", "dogra" },
        { G_UNICODE_SCRIPT_GUNJALA_GONDI, "G_UNICODE_SCRIPT_GUNJALA_GONDI", "gunjala-gondi" },
        { G_UNICODE_SCRIPT_HANIFI_ROHINGYA, "G_UNICODE_SCRIPT_HANIFI_ROHINGYA", "hanifi-rohingya" },
        { G_UNICODE_SCRIPT_MAKASAR, "G_UNICODE_SCRIPT_MAKASAR", "makasar" },
        { G_UNICODE_SCRIPT_MEDEFAIDRIN, "G_UNICODE_SCRIPT_MEDEFAIDRIN", "medefaidrin" },
        { G_UNICODE_SCRIPT_OLD_SOGDIAN, "G_UNICODE_SCRIPT_OLD_SOGDIAN", "old-sogdian" },
        { G_UNICODE_SCRIPT_SOGDIAN, "G_UNICODE_SCRIPT_SOGDIAN", "sogdian" },
        { G_UNICODE_SCRIPT_ELYMAIC, "G_UNICODE_SCRIPT_ELYMAIC", "elymaic" },
        { G_UNICODE_SCRIPT_NANDINAGARI, "G_UNICODE_SCRIPT_NANDINAGARI", "nandinagari" },
        { G_UNICODE_SCRIPT_NYIAKENG_PUACHUE_HMONG, "G_UNICODE_SCRIPT_NYIAKENG_PUACHUE_HMONG", "nyiakeng-puachue-hmong" },
        { G_UNICODE_SCRIPT_WANCHO, "G_UNICODE_SCRIPT_WANCHO", "wancho" },
        { G_UNICODE_SCRIPT_CHORASMIAN, "G_UNICODE_SCRIPT_CHORASMIAN", "chorasmian" },
        { G_UNICODE_SCRIPT_DIVES_AKURU, "G_UNICODE_SCRIPT_DIVES_AKURU", "dives-akuru" },
        { G_UNICODE_SCRIPT_KHITAN_SMALL_SCRIPT, "G_UNICODE_SCRIPT_KHITAN_SMALL_SCRIPT", "khitan-small-script" },
        { G_UNICODE_SCRIPT_YEZIDI, "G_UNICODE_SCRIPT_YEZIDI", "yezidi" },
        { G_UNICODE_SCRIPT_CYPRO_MINOAN, "G_UNICODE_SCRIPT_CYPRO_MINOAN", "cypro-minoan" },
        { G_UNICODE_SCRIPT_OLD_UYGHUR, "G_UNICODE_SCRIPT_OLD_UYGHUR", "old-uyghur" },
        { G_UNICODE_SCRIPT_TANGSA, "G_UNICODE_SCRIPT_TANGSA", "tangsa" },
        { G_UNICODE_SCRIPT_TOTO, "G_UNICODE_SCRIPT_TOTO", "toto" },
        { G_UNICODE_SCRIPT_VITHKUQI, "G_UNICODE_SCRIPT_VITHKUQI", "vithkuqi" },
        { G_UNICODE_SCRIPT_MATH, "G_UNICODE_SCRIPT_MATH", "math" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("GUnicodeScript"), values);
      g_once_init_leave (&static_g_define_type_id, g_define_type_id);
    }

  return static_g_define_type_id;
}
GType
g_normalize_mode_get_type (void)
{
  static gsize static_g_define_type_id = 0;

  if (g_once_init_enter (&static_g_define_type_id))
    {
      static const GEnumValue values[] = {
        { G_NORMALIZE_DEFAULT, "G_NORMALIZE_DEFAULT", "default" },
        { G_NORMALIZE_NFD, "G_NORMALIZE_NFD", "nfd" },
        { G_NORMALIZE_DEFAULT_COMPOSE, "G_NORMALIZE_DEFAULT_COMPOSE", "default-compose" },
        { G_NORMALIZE_NFC, "G_NORMALIZE_NFC", "nfc" },
        { G_NORMALIZE_ALL, "G_NORMALIZE_ALL", "all" },
        { G_NORMALIZE_NFKD, "G_NORMALIZE_NFKD", "nfkd" },
        { G_NORMALIZE_ALL_COMPOSE, "G_NORMALIZE_ALL_COMPOSE", "all-compose" },
        { G_NORMALIZE_NFKC, "G_NORMALIZE_NFKC", "nfkc" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("GNormalizeMode"), values);
      g_once_init_leave (&static_g_define_type_id, g_define_type_id);
    }

  return static_g_define_type_id;
}

G_GNUC_END_IGNORE_DEPRECATIONS

/* Generated data ends here */

