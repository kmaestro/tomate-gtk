#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.gdk"), aligned (8)))
#else
# define SECTION
#endif

static const SECTION union { const guint8 data[3829]; const double alignment; void * const ptr;}  _gdk_resource_data = {
  "\107\126\141\162\151\141\156\164\000\000\000\000\000\000\000\000"
  "\030\000\000\000\374\001\000\000\000\000\000\050\021\000\000\000"
  "\000\000\000\000\000\000\000\000\001\000\000\000\003\000\000\000"
  "\003\000\000\000\005\000\000\000\005\000\000\000\007\000\000\000"
  "\010\000\000\000\011\000\000\000\012\000\000\000\012\000\000\000"
  "\012\000\000\000\014\000\000\000\016\000\000\000\020\000\000\000"
  "\021\000\000\000\312\361\042\021\020\000\000\000\374\001\000\000"
  "\026\000\166\000\030\002\000\000\230\002\000\000\363\106\275\137"
  "\020\000\000\000\230\002\000\000\030\000\166\000\260\002\000\000"
  "\120\003\000\000\174\213\341\030\005\000\000\000\120\003\000\000"
  "\007\000\114\000\130\003\000\000\140\003\000\000\324\265\002\000"
  "\377\377\377\377\140\003\000\000\001\000\114\000\144\003\000\000"
  "\150\003\000\000\113\120\220\013\003\000\000\000\150\003\000\000"
  "\004\000\114\000\154\003\000\000\160\003\000\000\100\364\277\000"
  "\004\000\000\000\160\003\000\000\004\000\114\000\164\003\000\000"
  "\170\003\000\000\017\025\040\175\020\000\000\000\170\003\000\000"
  "\025\000\166\000\220\003\000\000\055\004\000\000\073\354\355\254"
  "\020\000\000\000\055\004\000\000\026\000\166\000\110\004\000\000"
  "\326\004\000\000\343\172\031\220\020\000\000\000\326\004\000\000"
  "\030\000\166\000\360\004\000\000\170\005\000\000\122\374\020\355"
  "\020\000\000\000\170\005\000\000\030\000\166\000\220\005\000\000"
  "\060\006\000\000\111\070\073\076\002\000\000\000\060\006\000\000"
  "\007\000\114\000\070\006\000\000\074\006\000\000\377\110\174\255"
  "\020\000\000\000\074\006\000\000\025\000\166\000\130\006\000\000"
  "\274\007\000\000\332\275\306\340\020\000\000\000\274\007\000\000"
  "\026\000\166\000\330\007\000\000\170\010\000\000\053\040\112\335"
  "\020\000\000\000\170\010\000\000\026\000\166\000\220\010\000\000"
  "\041\011\000\000\102\060\155\035\020\000\000\000\041\011\000\000"
  "\030\000\166\000\100\011\000\000\310\011\000\000\116\243\367\127"
  "\012\000\000\000\310\011\000\000\007\000\166\000\320\011\000\000"
  "\304\016\000\000\035\045\125\063\002\000\000\000\304\016\000\000"
  "\005\000\114\000\314\016\000\000\364\016\000\000\147\154\062\055"
  "\164\145\170\164\165\162\145\055\062\144\056\146\163\056\147\154"
  "\163\154\000\000\000\000\000\000\160\000\000\000\000\000\000\000"
  "\043\166\145\162\163\151\157\156\040\061\061\060\012\012\166\141"
  "\162\171\151\156\147\040\166\145\143\062\040\166\125\166\073\012"
  "\012\165\156\151\146\157\162\155\040\163\141\155\160\154\145\162"
  "\062\104\040\155\141\160\073\012\012\166\157\151\144\040\155\141"
  "\151\156\050\051\040\173\012\040\040\147\154\137\106\162\141\147"
  "\103\157\154\157\162\040\075\040\164\145\170\164\165\162\145\062"
  "\104\040\050\155\141\160\054\040\166\125\166\051\073\012\175\012"
  "\000\000\050\165\165\141\171\051\147\154\063\055\164\145\170\164"
  "\165\162\145\055\162\145\143\164\056\166\163\056\147\154\163\154"
  "\220\000\000\000\000\000\000\000\043\166\145\162\163\151\157\156"
  "\040\061\065\060\012\012\141\164\164\162\151\142\165\164\145\040"
  "\166\145\143\062\040\160\157\163\151\164\151\157\156\073\012\141"
  "\164\164\162\151\142\165\164\145\040\166\145\143\062\040\165\166"
  "\073\012\012\166\141\162\171\151\156\147\040\166\145\143\062\040"
  "\166\125\166\073\012\012\166\157\151\144\040\155\141\151\156\050"
  "\051\040\173\012\040\040\147\154\137\120\157\163\151\164\151\157"
  "\156\040\075\040\166\145\143\064\050\160\157\163\151\164\151\157"
  "\156\054\040\060\054\040\061\051\073\012\040\040\166\125\166\040"
  "\075\040\165\166\073\012\175\012\000\000\050\165\165\141\171\051"
  "\154\151\142\147\144\153\057\000\012\000\000\000\020\000\000\000"
  "\057\000\000\000\004\000\000\000\157\162\147\057\005\000\000\000"
  "\147\164\153\057\002\000\000\000\147\154\145\163\062\055\164\145"
  "\170\164\165\162\145\056\166\163\056\147\154\163\154\000\000\000"
  "\215\000\000\000\000\000\000\000\141\164\164\162\151\142\165\164"
  "\145\040\166\145\143\062\040\160\157\163\151\164\151\157\156\073"
  "\012\141\164\164\162\151\142\165\164\145\040\166\145\143\062\040"
  "\165\166\073\012\012\166\141\162\171\151\156\147\040\150\151\147"
  "\150\160\040\166\145\143\062\040\166\125\166\073\012\012\166\157"
  "\151\144\040\155\141\151\156\050\051\040\173\012\040\040\166\125"
  "\166\040\075\040\165\166\073\012\012\040\040\147\154\137\120\157"
  "\163\151\164\151\157\156\040\075\040\166\145\143\064\050\160\157"
  "\163\151\164\151\157\156\054\040\060\056\060\054\040\061\056\060"
  "\051\073\012\175\012\000\000\050\165\165\141\171\051\147\154\063"
  "\055\164\145\170\164\165\162\145\055\062\144\056\166\163\056\147"
  "\154\163\154\000\000\000\000\000\176\000\000\000\000\000\000\000"
  "\043\166\145\162\163\151\157\156\040\061\065\060\012\012\151\156"
  "\040\166\145\143\062\040\160\157\163\151\164\151\157\156\073\012"
  "\151\156\040\166\145\143\062\040\165\166\073\012\012\157\165\164"
  "\040\166\145\143\062\040\166\125\166\073\012\012\166\157\151\144"
  "\040\155\141\151\156\050\051\040\173\012\040\040\147\154\137\120"
  "\157\163\151\164\151\157\156\040\075\040\166\145\143\064\050\160"
  "\157\163\151\164\151\157\156\054\040\060\054\040\061\051\073\012"
  "\040\040\166\125\166\040\075\040\165\166\073\012\175\012\000\000"
  "\050\165\165\141\171\051\147\154\063\055\164\145\170\164\165\162"
  "\145\055\162\145\143\164\056\146\163\056\147\154\163\154\000\000"
  "\170\000\000\000\000\000\000\000\043\166\145\162\163\151\157\156"
  "\040\061\065\060\012\012\166\141\162\171\151\156\147\040\166\145"
  "\143\062\040\166\125\166\073\012\012\165\156\151\146\157\162\155"
  "\040\163\141\155\160\154\145\162\062\104\122\145\143\164\040\155"
  "\141\160\073\012\012\166\157\151\144\040\155\141\151\156\050\051"
  "\040\173\012\040\040\147\154\137\106\162\141\147\103\157\154\157"
  "\162\040\075\040\164\145\170\164\165\162\145\062\104\122\145\143"
  "\164\040\050\155\141\160\054\040\166\125\166\051\073\012\175\012"
  "\000\000\050\165\165\141\171\051\147\154\062\055\164\145\170\164"
  "\165\162\145\055\162\145\143\164\056\166\163\056\147\154\163\154"
  "\220\000\000\000\000\000\000\000\043\166\145\162\163\151\157\156"
  "\040\061\061\060\012\012\141\164\164\162\151\142\165\164\145\040"
  "\166\145\143\062\040\160\157\163\151\164\151\157\156\073\012\141"
  "\164\164\162\151\142\165\164\145\040\166\145\143\062\040\165\166"
  "\073\012\012\166\141\162\171\151\156\147\040\166\145\143\062\040"
  "\166\125\166\073\012\012\166\157\151\144\040\155\141\151\156\050"
  "\051\040\173\012\040\040\147\154\137\120\157\163\151\164\151\157"
  "\156\040\075\040\166\145\143\064\050\160\157\163\151\164\151\157"
  "\156\054\040\060\054\040\061\051\073\012\040\040\166\125\166\040"
  "\075\040\165\166\073\012\175\012\000\000\050\165\165\141\171\051"
  "\143\165\162\163\157\162\057\000\017\000\000\000\147\154\145\163"
  "\062\055\164\145\170\164\165\162\145\056\146\163\056\147\154\163"
  "\154\000\000\000\000\000\000\000\124\001\000\000\000\000\000\000"
  "\160\162\145\143\151\163\151\157\156\040\155\145\144\151\165\155"
  "\160\040\146\154\157\141\164\073\012\012\165\156\151\146\157\162"
  "\155\040\163\141\155\160\154\145\162\062\104\040\155\141\160\073"
  "\012\165\156\151\146\157\162\155\040\151\156\164\040\146\154\151"
  "\160\103\157\154\157\162\163\073\012\012\166\141\162\171\151\156"
  "\147\040\150\151\147\150\160\040\166\145\143\062\040\166\125\166"
  "\073\012\012\166\157\151\144\040\155\141\151\156\050\051\040\173"
  "\012\040\040\166\145\143\064\040\143\157\154\157\162\040\075\040"
  "\164\145\170\164\165\162\145\062\104\050\155\141\160\054\040\166"
  "\125\166\051\073\012\012\040\040\057\052\040\106\154\151\160\040"
  "\122\040\141\156\144\040\102\040\141\162\157\165\156\144\040\164"
  "\157\040\155\141\164\143\150\040\164\150\145\040\103\141\151\162"
  "\157\040\143\157\156\166\145\156\164\151\157\156\054\040\151\146"
  "\040\162\145\161\165\151\162\145\144\040\052\057\012\040\040\151"
  "\146\040\050\146\154\151\160\103\157\154\157\162\163\040\075\075"
  "\040\061\051\012\040\040\040\040\147\154\137\106\162\141\147\103"
  "\157\154\157\162\040\075\040\166\145\143\064\050\143\157\154\157"
  "\162\056\172\054\040\143\157\154\157\162\056\171\054\040\143\157"
  "\154\157\162\056\170\054\040\143\157\154\157\162\056\167\051\073"
  "\012\040\040\145\154\163\145\012\040\040\040\040\147\154\137\106"
  "\162\141\147\103\157\154\157\162\040\075\040\143\157\154\157\162"
  "\073\012\175\012\000\000\050\165\165\141\171\051\147\154\062\055"
  "\164\145\170\164\165\162\145\055\062\144\056\166\163\056\147\154"
  "\163\154\000\000\000\000\000\000\220\000\000\000\000\000\000\000"
  "\043\166\145\162\163\151\157\156\040\061\061\060\012\012\141\164"
  "\164\162\151\142\165\164\145\040\166\145\143\062\040\160\157\163"
  "\151\164\151\157\156\073\012\141\164\164\162\151\142\165\164\145"
  "\040\166\145\143\062\040\165\166\073\012\012\166\141\162\171\151"
  "\156\147\040\166\145\143\062\040\166\125\166\073\012\012\166\157"
  "\151\144\040\155\141\151\156\050\051\040\173\012\040\040\147\154"
  "\137\120\157\163\151\164\151\157\156\040\075\040\166\145\143\064"
  "\050\160\157\163\151\164\151\157\156\054\040\060\054\040\061\051"
  "\073\012\040\040\166\125\166\040\075\040\165\166\073\012\175\012"
  "\000\000\050\165\165\141\171\051\147\154\063\055\164\145\170\164"
  "\165\162\145\055\062\144\056\146\163\056\147\154\163\154\000\000"
  "\201\000\000\000\000\000\000\000\043\166\145\162\163\151\157\156"
  "\040\061\065\060\012\012\151\156\040\166\145\143\062\040\166\125"
  "\166\073\012\012\157\165\164\040\166\145\143\064\040\166\145\162"
  "\164\145\170\103\157\154\157\162\073\012\012\165\156\151\146\157"
  "\162\155\040\163\141\155\160\154\145\162\062\104\040\155\141\160"
  "\073\012\012\166\157\151\144\040\155\141\151\156\050\051\040\173"
  "\012\040\040\166\145\162\164\145\170\103\157\154\157\162\040\075"
  "\040\164\145\170\164\165\162\145\062\104\040\050\155\141\160\054"
  "\040\166\125\166\051\073\012\175\012\000\000\050\165\165\141\171"
  "\051\147\154\062\055\164\145\170\164\165\162\145\055\162\145\143"
  "\164\056\146\163\056\147\154\163\154\000\000\000\000\000\000\000"
  "\170\000\000\000\000\000\000\000\043\166\145\162\163\151\157\156"
  "\040\061\061\060\012\012\166\141\162\171\151\156\147\040\166\145"
  "\143\062\040\166\125\166\073\012\012\165\156\151\146\157\162\155"
  "\040\163\141\155\160\154\145\162\062\104\122\145\143\164\040\155"
  "\141\160\073\012\012\166\157\151\144\040\155\141\151\156\050\051"
  "\040\173\012\040\040\147\154\137\106\162\141\147\103\157\154\157"
  "\162\040\075\040\164\145\170\164\165\162\145\062\104\122\145\143"
  "\164\040\050\155\141\160\054\040\166\125\166\051\073\012\175\012"
  "\000\000\050\165\165\141\171\051\144\145\146\141\165\154\164\000"
  "\344\004\000\000\000\000\000\000\211\120\116\107\015\012\032\012"
  "\000\000\000\015\111\110\104\122\000\000\000\040\000\000\000\040"
  "\010\006\000\000\000\163\172\172\364\000\000\000\004\163\102\111"
  "\124\010\010\010\010\174\010\144\210\000\000\000\011\160\110\131"
  "\163\000\000\022\164\000\000\022\164\001\336\146\037\170\000\000"
  "\000\031\164\105\130\164\123\157\146\164\167\141\162\145\000\167"
  "\167\167\056\151\156\153\163\143\141\160\145\056\157\162\147\233"
  "\356\074\032\000\000\000\024\164\105\130\164\101\165\164\150\157"
  "\162\000\112\141\153\165\142\040\123\164\145\151\156\145\162\346"
  "\373\367\057\000\000\000\065\164\105\130\164\104\145\163\143\162"
  "\151\160\164\151\157\156\000\111\156\166\145\162\164\145\144\040"
  "\166\141\162\151\141\156\164\040\157\146\040\164\150\145\040\104"
  "\115\132\040\143\165\162\163\157\162\040\164\150\145\155\145\056"
  "\150\165\133\074\000\000\000\063\164\105\130\164\123\157\165\162"
  "\143\145\000\150\164\164\160\072\057\057\152\151\155\155\141\143"
  "\056\155\165\163\151\143\150\141\154\154\056\143\172\057\164\150"
  "\145\155\145\163\056\160\150\160\077\163\153\151\156\075\067\120"
  "\063\225\261\000\000\003\301\111\104\101\124\130\205\355\226\115"
  "\110\154\145\030\307\177\343\325\161\322\324\343\307\165\032\103"
  "\057\167\002\065\363\226\110\314\106\051\150\253\155\132\250\134"
  "\052\031\105\027\256\124\112\067\012\351\352\256\064\122\133\010"
  "\112\044\210\204\242\241\310\120\201\371\201\150\216\202\050\151"
  "\240\344\307\210\302\220\127\146\222\021\075\347\074\055\146\364"
  "\132\327\272\163\124\254\105\177\170\170\067\057\274\077\236\257"
  "\377\013\377\353\005\022\221\127\377\315\367\243\165\135\367\067"
  "\067\067\277\005\304\002\021\167\015\020\053\042\022\010\004\374"
  "\305\305\305\016\340\345\273\206\210\227\220\374\176\277\257\240"
  "\240\340\155\356\070\023\361\042\042\355\355\355\342\367\373\305"
  "\347\363\035\345\346\346\276\031\202\060\335\031\100\171\171\271"
  "\024\025\025\111\040\020\020\237\317\167\150\267\333\037\001\061"
  "\267\001\021\126\052\165\135\147\176\176\036\247\323\211\305\142"
  "\111\134\132\132\372\336\146\263\075\000\136\272\051\104\130\000"
  "\232\246\241\252\052\223\223\223\124\125\125\021\033\033\153\135"
  "\135\135\165\001\151\200\345\046\020\206\000\124\125\145\142\142"
  "\202\272\272\072\024\105\311\360\172\275\337\001\066\040\372\272"
  "\020\141\001\210\310\005\200\252\252\270\134\056\032\032\032\110"
  "\116\116\176\270\277\277\377\055\360\312\165\041\302\036\247\313"
  "\000\252\252\062\076\076\116\153\153\053\126\253\065\167\157\157"
  "\157\010\260\002\146\243\020\327\006\120\125\225\341\341\141\332"
  "\332\332\110\113\113\313\337\331\331\371\006\110\065\012\141\150"
  "\241\134\005\061\060\060\100\147\147\047\351\351\351\216\215\215"
  "\215\257\200\373\106\040\014\003\134\156\310\363\350\357\357\247"
  "\257\257\017\273\335\376\336\332\332\332\227\100\012\020\025\016"
  "\204\041\200\277\066\343\345\350\351\351\141\160\160\220\254\254"
  "\254\367\127\126\126\276\010\027\302\360\116\277\352\361\363\254"
  "\164\167\167\063\074\074\114\116\116\316\007\013\013\013\117\200"
  "\144\040\362\237\040\042\215\002\134\056\001\200\303\341\300\142"
  "\261\140\066\233\211\216\216\146\161\161\221\274\274\074\362\363"
  "\363\077\232\231\231\371\275\260\260\360\063\340\051\160\146\364"
  "\055\010\171\101\111\111\211\000\027\021\031\031\051\161\161\161"
  "\142\265\132\305\355\166\313\337\111\327\165\231\236\236\176\002"
  "\050\267\226\001\200\262\262\062\306\306\306\120\125\225\256\256"
  "\056\172\173\173\351\350\350\370\141\150\150\350\047\263\331\174"
  "\154\062\231\304\144\062\351\146\263\071\040\042\277\022\134\122"
  "\327\322\163\031\250\255\255\025\135\327\245\246\246\106\022\022"
  "\022\304\146\263\311\346\346\246\170\275\336\247\100\021\360\072"
  "\140\007\036\002\017\010\056\250\230\133\001\150\150\150\020\135"
  "\327\345\364\364\124\365\170\074\242\050\212\244\244\244\110\175"
  "\175\275\150\232\046\115\115\115\215\004\275\301\014\334\013\105"
  "\004\067\060\253\013\200\306\306\106\021\021\131\134\134\134\167"
  "\072\235\237\153\232\046\325\325\325\242\050\212\144\144\144\310"
  "\301\301\201\034\034\034\170\200\067\270\241\103\076\007\060\067"
  "\067\047\272\256\313\354\354\354\012\360\061\120\160\164\164\344"
  "\331\332\332\022\105\121\044\065\065\125\132\132\132\104\125\125"
  "\251\254\254\254\040\070\176\267\362\155\213\077\357\346\251\251"
  "\251\045\340\103\340\021\220\074\072\072\372\130\323\064\251\250"
  "\250\220\244\244\044\311\314\314\224\343\343\143\131\136\136\236"
  "\003\136\043\270\204\156\007\140\176\176\376\107\240\014\310\005"
  "\342\010\116\217\342\367\373\367\066\066\066\044\061\061\121\262"
  "\263\263\345\360\360\120\326\327\327\177\016\101\336\112\031\142"
  "\167\167\167\277\006\336\001\262\171\366\055\067\001\121\056\227"
  "\353\361\331\331\231\154\157\157\113\040\020\220\223\223\023\275"
  "\264\264\264\045\164\327\260\065\137\245\050\040\221\240\303\305"
  "\360\347\272\232\200\370\221\221\221\117\074\036\317\057\156\267"
  "\333\355\160\070\076\005\336\045\350\003\141\365\300\213\010\115"
  "\004\107\111\000\075\164\136\326\075\202\045\271\117\360\203\172"
  "\002\374\006\370\000\365\212\373\206\001\302\121\004\317\146\136"
  "\013\305\371\342\372\357\353\017\232\140\107\376\001\231\031\264"
  "\000\000\000\000\111\105\116\104\256\102\140\202\000\000\050\165"
  "\165\141\171\051\147\154\163\154\057\000\000\000\000\000\000\000"
  "\014\000\000\000\016\000\000\000\011\000\000\000\015\000\000\000"
  "\007\000\000\000\010\000\000\000\001\000\000\000\013\000\000\000"
  "\006\000\000\000" };

static GStaticResource static_resource = { _gdk_resource_data.data, sizeof (_gdk_resource_data.data) - 1 /* nul terminator */, NULL, NULL, NULL };

G_GNUC_INTERNAL
GResource *_gdk_get_resource (void);
GResource *_gdk_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}

G_GNUC_INTERNAL
void _gdk_unregister_resource (void);
void _gdk_unregister_resource (void)
{
  g_static_resource_fini (&static_resource);
}

G_GNUC_INTERNAL
void _gdk_register_resource (void);
void _gdk_register_resource (void)
{
  g_static_resource_init (&static_resource);
}