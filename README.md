# fbstdc
Fallbacks of standard macros and functions (Work in progress)

# About
I often run into differences in various standard headers and am tired of re-wrapping around them,
to avoid this problem I'm doing these headers from the ground up while defaulting to what is already
provided and just adding in fallbacks for anything not defined, my projects will be adapted to use
these headers instead so that I may stop thinking about if something is defined and simply use it,
the only exceptions being ones like int8_t which depend on exact width, I typically use flexible
width integers like intptr_t so those will not be an issue to me.
