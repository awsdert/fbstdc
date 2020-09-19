# unic
Standard macros and functions prepended with unic_ (Work in progress).

# About
Originally named fbstdc (because I hadn't thought of a good name yet).

## Original Info
I often run into differences in various standard headers and am tired of re-wrapping around them,
to avoid this problem I'm doing these headers from the ground up while defaulting to what is already
provided and just adding in fallbacks for anything not defined, my projects will be adapted to use
these headers instead so that I may stop thinking about if something is defined and simply use it,
the only exceptions being ones like int8_t which depend on exact width, I typically use flexible
width integers like intptr_t so those will not be an issue to me.

## Modified Info
Similar to musl in purpose but with unic prepended to names, when in UNIC_FALLBACK is defined then
the headers will check if original macros and functions are defined, if they're not and unic has
the matching function/macro available then it will define them like this: #define name unic_name
having unic prepended to the names means unic headers can be included along side the original
stdc headers without issue, the only difference is inlcuding an extra libraries like this -l unic (or
for certain compilers /l unic). For system stuff like /proc unic will provide handles via it's own
api instead, the api is yet to be decided as gasp is currently the experimentation ground for that.
