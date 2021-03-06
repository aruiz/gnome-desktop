typedef struct
{
  const gchar const *locale;
  const gchar const *type;
  const gchar const *id;
} DefaultInputSource;

static DefaultInputSource default_input_sources[] =
{
  { "ar_DZ",    "xkb",          "ara+azerty" },
  { "as_IN",    "ibus",         "m17n:as:phonetic" },
  { "ast_ES",   "xkb",          "es+ast" },
  { "az_AZ",    "xkb",          "az" },
  { "be_BY",    "xkb",          "by" },
  { "bn_IN",    "ibus",         "m17n:bn:inscript" },
  { "cat_ES",   "xkb",          "es+cat" },
  { "cs_CZ",    "xkb",          "cz" },
  { "de_CH",    "xkb",          "ch" },
  { "de_DE",    "xkb",          "de" },
  { "el_CY",    "xkb",          "gr" },
  { "el_GR",    "xkb",          "gr" },
  { "en_GB",    "xkb",          "gb" },
  { "en_US",    "xkb",          "us" },
  { "en_ZA",    "xkb",          "za" },
  { "es_ES",    "xkb",          "es" },
  { "fr_CH",    "xkb",          "ch+fr" },
  { "fr_FR",    "xkb",          "fr+oss" },
  { "gl_ES",    "xkb",          "es" },
  { "gu_IN",    "ibus",         "m17n:gu:inscript" },
  { "he_IL",    "xkb",          "il" },
  { "hi_IN",    "ibus",         "m17n:hi:inscript" },
  { "it_IT",    "xkb",          "it" },
  { "ja_JP",    "ibus",         "anthy" },
  { "kn_IN",    "ibus",         "m17n:kn:kgp" },
  { "ko_KR",    "ibus",         "hangul" },
  { "mai_IN",   "ibus",         "m17n:mai:inscript" },
  { "ml_IN",    "ibus",         "m17n:ml:inscript" },
  { "mr_IN",    "ibus",         "m17n:mr:inscript" },
  { "nl_NL",    "xkb",          "us+altgr-intl" },
  { "or_IN",    "ibus",         "m17n:or:inscript" },
  { "pa_IN",    "ibus",         "m17n:pa:inscript" },
  { "pl_PL",    "xkb",          "pl" },
  { "pt_BR",    "xkb",          "br" },
  { "pt_PT",    "xkb",          "pt" },
  { "ru_RU",    "xkb",          "ru" },
  { "sd_IN",    "ibus",         "m17n:sd:inscript" },
  { "sk_SK",    "xkb",          "sk" },
  { "ta_IN",    "ibus",         "m17n:ta:tamil99" },
  { "te_IN",    "ibus",         "m17n:te:inscript" },
  { "ur_IN",    "ibus",         "m17n:ur:phonetic" },
  { "zh_CN",    "ibus",         "libpinyin" },
  { "zh_HK",    "ibus",         "cangjie" },
  { "zh_TW",    "ibus",         "chewing" },
  { NULL,       NULL,           NULL }
};
