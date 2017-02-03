

#pragma once


// Forward declarations
void update_time();


// This works around the inability to use the current GRect macro for constants
#define ConstantGRect(x, y, w, h) {{(x), (y)}, {(w), (h)}}


// Day line information
static const char *day_lines[] = { "Mo  Tu  We  Th  Fr  Sa  Su"
                                 , "Ma  Di  Wo  Do  Vr  Za  Zo"
                                 , "Mo  Di  Mi  Do  Fr  Sa  So"
                                 , "Lu  Ma  Me  Je  Ve  Sa  Di"
                                 , "Po  Vt  Sr  Ce  Pe  Su  Ne"
                                 , "Lu  Ma  Mi  Ju  Vi  Sá  Do"
                                 , "Lu  Ma  Me  Gi  Ve  Sa  Do"
                                 , "Ma  Ti  On  To  Fr  Lø  Sø"
                                 , "Må  Ti  On  To  Fr  Lö  Sö"
                                 , "Ma  Ti  Ke  To  Pe  La  Su"
                                 , "Ma  Ti  On  To  Fr  Lø  Sø"
								 , "Pt  Sa  Ça  Pe  Cu  Ct  Pz"
								 , "Dl  Dt  Dc  Dj  Dv  Ds  Dg"
								 , "Po  Ut  St  Št  Pi  So  Ne"
                                 };

static const char *day_lines2[] = { "Su  Mo  Tu  We  Th  Fr  Sa"
                                 , "Zo  Ma  Di  Wo  Do  Vr  Za"
                                 , "So  Mo  Di  Mi  Do  Fr  Sa"
                                 , "Di  Lu  Ma  Me  Je  Ve  Sa"
                                 , "Ne  Po  Vt  Sr  Ce  Pe  Su"
                                 , "Do  Lu  Ma  Mi  Ju  Vi  Sá"
                                 , "Do  Lu  Ma  Me  Gi  Ve  Sa"
                                 , "Sø  Ma  Ti  On  To  Fr  Lø"
                                 , "Sö  Må  Ti  On  To  Fr  Lö"
                                 , "Su  Ma  Ti  Ke  To  Pe  La"
                                 , "Sø  Ma  Ti  On  To  Fr  Lø"
								 , "Pz  Pt  Sa  Ça  Pe  Cu  Ct"
								 , "Dg  Dl  Dt  Dc  Dj  Dv  Ds"
								 , "Ne  Po  Ut  St  Št  Pi  So"
                                 };


// GRect for day highlights
static const GRect highlight_rect[][7] = { { ConstantGRect( 16, 96, 18, 24 ) , ConstantGRect( 37, 96, 15, 24 ) , ConstantGRect( 54, 96, 19, 24 ) , ConstantGRect( 75, 96, 15, 24 ) , ConstantGRect( 94, 96, 14, 24 ) , ConstantGRect( 108, 96, 16, 24 ) , ConstantGRect( 126, 96, 17, 24 ) }
                                         , { ConstantGRect( 16, 96, 17, 24 ) , ConstantGRect( 37, 96, 13, 24 ) , ConstantGRect( 52, 96, 18, 24 ) , ConstantGRect( 73, 96, 15, 24 ) , ConstantGRect( 93, 96, 15, 24 ) , ConstantGRect( 110, 96, 14, 24 ) , ConstantGRect( 124, 96, 16, 24 ) }
                                         , { ConstantGRect( 16, 96, 17, 24 ) , ConstantGRect( 37, 96, 14, 24 ) , ConstantGRect( 52, 96, 15, 24 ) , ConstantGRect( 70, 96, 15, 24 ) , ConstantGRect( 90, 96, 14, 24 ) , ConstantGRect(  105, 96, 14, 24 ) , ConstantGRect( 122, 96, 16, 24 ) }
                                         , { ConstantGRect( 16, 96, 15, 24 ) , ConstantGRect( 34, 96, 16, 24 ) , ConstantGRect( 52, 96, 17, 24 ) , ConstantGRect( 73, 96, 15, 24 ) , ConstantGRect( 91, 96, 15, 24 ) , ConstantGRect( 109, 96, 15, 24 ) , ConstantGRect( 126, 96, 16, 24 ) }
                                         , { ConstantGRect( 16, 96, 15, 24 ) , ConstantGRect( 34, 96, 13, 24 ) , ConstantGRect( 50, 96, 14, 24 ) , ConstantGRect( 67, 96, 15, 24 ) , ConstantGRect( 85, 96, 15, 24 ) , ConstantGRect(  101, 96, 14, 24 ) , ConstantGRect( 118, 96, 18, 24 ) }
                                         , { ConstantGRect( 16, 96, 15, 24 ) , ConstantGRect( 34, 96, 16, 24 ) , ConstantGRect( 53, 96, 15, 24 ) , ConstantGRect( 71, 96, 15, 24 ) , ConstantGRect( 88, 96, 14, 24 ) , ConstantGRect(  103, 96, 15, 24 ) , ConstantGRect( 122, 96, 16, 24 ) }
                                         , { ConstantGRect( 16, 96, 15, 24 ) , ConstantGRect( 33, 96, 16, 24 ) , ConstantGRect( 53, 96, 18, 24 ) , ConstantGRect( 74, 96, 12, 24 ) , ConstantGRect( 88, 96, 15, 24 ) , ConstantGRect( 106, 96, 15, 24 ) , ConstantGRect( 124, 96, 16, 24 ) }
                                         , { ConstantGRect( 16, 96, 17, 24 ) , ConstantGRect( 36, 96, 13, 24 ) , ConstantGRect( 52, 96, 15, 24 ) , ConstantGRect( 70, 96, 15, 24 ) , ConstantGRect( 87, 96, 14, 24 ) , ConstantGRect(  104, 96, 14, 24 ) , ConstantGRect( 120, 96, 16, 24 ) }
                                         , { ConstantGRect( 16, 96, 17, 24 ) , ConstantGRect( 36, 96, 13, 24 ) , ConstantGRect( 52, 96, 15, 24 ) , ConstantGRect( 70, 96, 15, 24 ) , ConstantGRect( 87, 96, 14, 24 ) , ConstantGRect(  104, 96, 14, 24 ) , ConstantGRect( 120, 96, 16, 24 ) }
                                         , { ConstantGRect( 16, 96, 17, 24 ) , ConstantGRect( 36, 96, 13, 24 ) , ConstantGRect( 51, 96, 16, 24 ) , ConstantGRect( 69, 96, 15, 24 ) , ConstantGRect( 87, 96, 15, 24 ) , ConstantGRect(  104, 96, 14, 24 ) , ConstantGRect( 121, 96, 16, 24 ) }
                                         , { ConstantGRect( 16, 96, 17, 24 ) , ConstantGRect( 36, 96, 13, 24 ) , ConstantGRect( 51, 96, 16, 24 ) , ConstantGRect( 69, 96, 15, 24 ) , ConstantGRect( 87, 96, 15, 24 ) , ConstantGRect(  104, 96, 14, 24 ) , ConstantGRect( 121, 96, 16, 24 ) }
                                         , { ConstantGRect( 16, 96, 17, 24 ) , ConstantGRect( 36, 96, 13, 24 ) , ConstantGRect( 51, 96, 16, 24 ) , ConstantGRect( 69, 96, 15, 24 ) , ConstantGRect( 87, 96, 15, 24 ) , ConstantGRect(  104, 96, 14, 24 ) , ConstantGRect( 121, 96, 16, 24 ) }
                                         , { ConstantGRect( 15, 96, 16, 24 ) , ConstantGRect( 33, 96, 13, 24 ) , ConstantGRect( 48, 96, 16, 24 ) , ConstantGRect( 67, 96, 14, 24 ) , ConstantGRect( 84, 96, 15, 24 ) , ConstantGRect(  102, 96, 14, 24 ) , ConstantGRect( 121, 96, 16, 24 ) }
                                         , { ConstantGRect( 16, 96, 17, 24 ) , ConstantGRect( 35, 96, 13, 24 ) , ConstantGRect( 51, 96, 13, 24 ) , ConstantGRect( 65, 96, 14, 24 ) , ConstantGRect( 81, 96, 15, 24 ) , ConstantGRect(  96, 96, 14, 24 ) , ConstantGRect( 114, 96, 16, 24 ) }
                                         };

static const GRect highlight_rect2[][7] = { { ConstantGRect( 16, 96, 18, 24 ) , ConstantGRect( 35, 96, 15, 24 ) , ConstantGRect( 54, 96, 18, 24 ) , ConstantGRect( 73, 96, 16, 24 ) , ConstantGRect( 94, 96, 14, 24 ) , ConstantGRect( 111, 96, 16, 24 ) , ConstantGRect( 126, 96, 17, 24 ) }
                                         , { ConstantGRect( 16, 96, 17, 24 ) , ConstantGRect( 37, 96, 13, 24 ) , ConstantGRect( 52, 96, 18, 24 ) , ConstantGRect( 73, 96, 15, 24 ) , ConstantGRect( 93, 96, 15, 24 ) , ConstantGRect( 110, 96, 14, 24 ) , ConstantGRect( 124, 96, 16, 24 ) }
                                         , { ConstantGRect( 16, 96, 17, 24 ) , ConstantGRect( 37, 96, 14, 24 ) , ConstantGRect( 52, 96, 15, 24 ) , ConstantGRect( 70, 96, 15, 24 ) , ConstantGRect( 90, 96, 14, 24 ) , ConstantGRect(  107, 96, 14, 24 ) , ConstantGRect( 122, 96, 16, 24 ) }
                                         , { ConstantGRect( 16, 96, 15, 24 ) , ConstantGRect( 34, 96, 16, 24 ) , ConstantGRect( 52, 96, 17, 24 ) , ConstantGRect( 73, 96, 15, 24 ) , ConstantGRect( 91, 96, 15, 24 ) , ConstantGRect( 109, 96, 15, 24 ) , ConstantGRect( 126, 96, 16, 24 ) }
                                         , { ConstantGRect( 16, 96, 15, 24 ) , ConstantGRect( 34, 96, 13, 24 ) , ConstantGRect( 50, 96, 14, 24 ) , ConstantGRect( 67, 96, 15, 24 ) , ConstantGRect( 87, 96, 16, 26 ) , ConstantGRect(  106, 96, 14, 24 ) , ConstantGRect( 119, 96, 18, 24 ) }
                                         , { ConstantGRect( 16, 96, 15, 24 ) , ConstantGRect( 34, 96, 16, 24 ) , ConstantGRect( 53, 96, 15, 24 ) , ConstantGRect( 71, 96, 15, 24 ) , ConstantGRect( 90, 96, 14, 24 ) , ConstantGRect(  103, 96, 15, 24 ) , ConstantGRect( 122, 96, 16, 24 ) }
                                         , { ConstantGRect( 16, 96, 15, 24 ) , ConstantGRect( 33, 96, 16, 24 ) , ConstantGRect( 53, 96, 18, 24 ) , ConstantGRect( 74, 96, 15, 24 ) , ConstantGRect( 91, 96, 15, 24 ) , ConstantGRect( 106, 96, 18, 24 ) , ConstantGRect( 126, 96, 16, 24 ) }
                                         , { ConstantGRect( 16, 96, 17, 24 ) , ConstantGRect( 36, 96, 13, 24 ) , ConstantGRect( 52, 96, 15, 24 ) , ConstantGRect( 70, 96, 15, 24 ) , ConstantGRect( 89, 96, 14, 24 ) , ConstantGRect(  106, 96, 14, 24 ) , ConstantGRect( 121, 96, 16, 24 ) }
                                         , { ConstantGRect( 16, 96, 17, 24 ) , ConstantGRect( 36, 96, 13, 24 ) , ConstantGRect( 52, 96, 15, 24 ) , ConstantGRect( 70, 96, 15, 24 ) , ConstantGRect( 87, 96, 14, 24 ) , ConstantGRect(  104, 96, 14, 24 ) , ConstantGRect( 120, 96, 16, 24 ) }
                                         , { ConstantGRect( 16, 96, 17, 24 ) , ConstantGRect( 36, 96, 13, 24 ) , ConstantGRect( 51, 96, 16, 24 ) , ConstantGRect( 69, 96, 15, 24 ) , ConstantGRect( 87, 96, 15, 24 ) , ConstantGRect(  104, 96, 14, 24 ) , ConstantGRect( 121, 96, 16, 24 ) }
                                         , { ConstantGRect( 16, 96, 17, 24 ) , ConstantGRect( 36, 96, 13, 24 ) , ConstantGRect( 51, 96, 16, 24 ) , ConstantGRect( 69, 96, 15, 24 ) , ConstantGRect( 87, 96, 15, 24 ) , ConstantGRect(  104, 96, 14, 24 ) , ConstantGRect( 121, 96, 16, 24 ) }
                                         , { ConstantGRect( 16, 96, 17, 24 ) , ConstantGRect( 36, 96, 13, 24 ) , ConstantGRect( 51, 96, 16, 24 ) , ConstantGRect( 69, 96, 15, 24 ) , ConstantGRect( 89, 96, 15, 24 ) , ConstantGRect(  106, 96, 14, 24 ) , ConstantGRect( 122, 96, 16, 24 ) }
                                         , { ConstantGRect( 16, 96, 17, 24 ) , ConstantGRect( 36, 96, 13, 24 ) , ConstantGRect( 51, 96, 16, 24 ) , ConstantGRect( 68, 96, 15, 24 ) , ConstantGRect( 87, 96, 15, 24 ) , ConstantGRect(  103, 96, 14, 24 ) , ConstantGRect( 121, 96, 16, 24 ) }
                                         , { ConstantGRect( 16, 96, 17, 24 ) , ConstantGRect( 36, 96, 13, 24 ) , ConstantGRect( 52, 96, 15, 24 ) , ConstantGRect( 69, 96, 15, 24 ) , ConstantGRect( 84, 96, 14, 24 ) , ConstantGRect(  99, 96, 12, 24 ) , ConstantGRect( 114, 96, 16, 24 ) }
                                         };




// Month names
static const char *month_names_arr[][12] = { { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" }
                                           , { "Jan", "Feb", "Mrt", "Apr", "Mei", "Jun", "Jul", "Aug", "Sep", "Okt", "Nov", "Dec" }
                                           , { "Jan", "Feb", "Mär", "Apr", "Mai", "Jun", "Jul", "Aug", "Sep", "Okt", "Nov", "Dez" }
                                           , { "Jan", "Fév", "Mar", "Avr", "Mai", "Jun", "Jui", "Aoû", "Sep", "Oct", "Nov", "Déc" }
                                           , { "Sij", "Vel", "Ožu", "Tra", "Svi", "Lip", "Srp", "Kol", "Ruj", "Lis", "Stu", "Pro" }
                                           , { "Ene", "Feb", "Mar", "Abr", "May", "Jun", "Jul", "Ago", "Sep", "Oct", "Nov", "Dic" }
                                           , { "Gen", "Feb", "Mar", "Apr", "Mag", "Giu", "Lug", "Ago", "Set", "Ott", "Nov", "Dic" }
                                           , { "Jan", "Feb", "Mar", "Apr", "Mai", "Jun", "Jul", "Aug", "Sep", "Okt", "Nov", "Des" }
                                           , { "Jan", "Feb", "Mar", "Apr", "Maj", "Jun", "Jul", "Aug", "Sep", "Okt", "Nov", "Dec" }
                                           , { "Tam", "Hel", "Maa", "Huh", "Tou", "Kes", "Hei", "Elo", "Syy", "Lok", "Mar", "Jou" }
                                           , { "Jan", "Feb", "Mar", "Apr", "Maj", "Jun", "Jul", "Aug", "Sep", "Okt", "Nov", "Dec" }
										   , { "Oca", "Şub", "Mar", "Nis", "May", "Haz", "Tem", "Ağu", "Eyl", "Eki", "Kas", "Ara" }
										   , { "Gen", "Feb", "Mar", "Abr", "Mai", "Jun", "Jul", "Ago", "Set", "Oct", "Nov", "Des" }
										   , { "Jan", "Feb", "Mar", "Apr", "Máj", "Jún", "Júl", "Aug", "Set", "Okt", "Nov", "Dec" }
                                           };


// Format week
static const char *week_formats[] = { "Week %V"
                                    , "Week %V"
                                    , "Woche %V"
                                    , "Semaine %V"
                                    , "%V. Tjedan"
                                    , "Semana %V"
                                    , "%V. Setti."
                                    , "Uke %V"
                                    , "Vecka %V"
                                    , "VKO %V"
                                    , "Uge %V"
                                    , "%V. Hafta"
                                    , "Setmana %V"
                                    , "Týžden %V"
                                    };


// Format date
static const char *date_formats[] = { "%b %e"
                                    , "%e "
                                    , "%e. "
                                    , "%e "
                                    , "%e. "
                                    , "%e "
                                    , "%e. "
                                    , "%e. "
                                    , "%e. "
                                    , "%e. "
                                    , "%e. "
                                    , "%e "
                                    , "%e "
                                    , "%e "
                                    };



// Formats for second line
static const char *alt_formats[] = { "Week %V"
                                   , "%Y.%j"
                                   , "%d/%m/%y"
                                   , "%m/%d/%y"
                                   , "W%V D%j"
								   , "%Y %m %d"
                                   };


static char week_text[] = "               ";
static char date_text[] = "               ";
static char alt_text[]  = "               ";


// Ordinal numbers
static const char *ordinal_numbers[] = { "st", "nd", "rd", "th", "th", "th", "th", "th", "th", "th"
                                       , "th", "th", "th", "th", "th", "th", "th", "th", "th", "th"
                                       , "st", "nd", "rd", "th", "th", "th", "th", "th", "th", "th"
                                       , "st" };