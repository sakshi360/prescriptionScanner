//  Copyright (c) 2020 John Maddock
//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_MATH_TOOLS_CXX03_WARN_HPP
#define BOOST_MATH_TOOLS_CXX03_WARN_HPP

#include <boost/config/pragma_message.hpp>

#if defined(BOOST_NO_CXX11_NOEXCEPT)
#  define BOOST_MATH_SHOW_CXX03_WARNING
#  define BOOST_MATH_CXX03_WARN_REASON "BOOST_NO_CXX11_NOEXCEPT"
#endif
#if defined(BOOST_NO_CXX11_NOEXCEPT) && !defined(BOOST_MATH_SHOW_CXX03_WARNING)
#  define BOOST_MATH_SHOW_CXX03_WARNING
#  define BOOST_MATH_CXX03_WARN_REASON "BOOST_NO_CXX11_NOEXCEPT"
#endif
#if defined(BOOST_NO_CXX11_NOEXCEPT) && !defined(BOOST_MATH_SHOW_CXX03_WARNING)
#  define BOOST_MATH_SHOW_CXX03_WARNING
#  define BOOST_MATH_CXX03_WARN_REASON "BOOST_NO_CXX11_NOEXCEPT"
#endif
#if defined(BOOST_NO_CXX11_RVALUE_REFERENCES) && !defined(BOOST_MATH_SHOW_CXX03_WARNING)
#  define BOOST_MATH_SHOW_CXX03_WARNING
#  define BOOST_MATH_CXX03_WARN_REASON "BOOST_NO_CXX11_RVALUE_REFERENCES"
#endif
#if defined(BOOST_NO_SFINAE_EXPR) && !defined(BOOST_MATH_SHOW_CXX03_WARNING)
#  define BOOST_MATH_SHOW_CXX03_WARNING
#  define BOOST_MATH_CXX03_WARN_REASON "BOOST_NO_SFINAE_EXPR"
#endif
#if defined(BOOST_NO_CXX11_AUTO_DECLARATIONS) && !defined(BOOST_MATH_SHOW_CXX03_WARNING)
#  define BOOST_MATH_SHOW_CXX03_WARNING
#  define BOOST_MATH_CXX03_WARN_REASON "BOOST_NO_CXX11_AUTO_DECLARATIONS"
#endif
#if defined(BOOST_NO_CXX11_LAMBDAS) && !defined(BOOST_MATH_SHOW_CXX03_WARNING)
#  define BOOST_MATH_SHOW_CXX03_WARNING
#  define BOOST_MATH_CXX03_WARN_REASON "BOOST_NO_CXX11_LAMBDAS"
#endif
#if defined(BOOST_NO_CXX11_UNIFIED_INITIALIZATION_SYNTAX) && !defined(BOOST_MATH_SHOW_CXX03_WARNING)
#  define BOOST_MATH_SHOW_CXX03_WARNING
#  define BOOST_MATH_CXX03_WARN_REASON "BOOST_NO_CXX11_UNIFIED_INITIALIZATION_SYNTAX"
#endif
#if defined(BOOST_NO_CXX11_HDR_TUPLE) && !defined(BOOST_MATH_SHOW_CXX03_WARNING)
#  define BOOST_MATH_SHOW_CXX03_WARNING
#  define BOOST_MATH_CXX03_WARN_REASON "BOOST_NO_CXX11_HDR_TUPLE"
#endif
#if defined(BOOST_NO_CXX11_HDR_INITIALIZER_LIST) && !defined(BOOST_MATH_SHOW_CXX03_WARNING)
#  define BOOST_MATH_SHOW_CXX03_WARNING
#  define BOOST_MATH_CXX03_WARN_REASON "BOOST_NO_CXX11_HDR_INITIALIZER_LIST"
#endif
#if defined(BOOST_NO_CXX11_HDR_CHRONO) && !defined(BOOST_MATH_SHOW_CXX03_WARNING)
#  define BOOST_MATH_SHOW_CXX03_WARNING
#  define BOOST_MATH_CXX03_WARN_REASON "BOOST_NO_CXX11_HDR_CHRONO"
#endif
#if defined(BOOST_NO_CXX11_THREAD_LOCAL) && !defined(BOOST_MATH_SHOW_CXX03_WARNING)
#  define BOOST_MATH_SHOW_CXX03_WARNING
#  define BOOST_MATH_CXX03_WARN_REASON "BOOST_NO_CXX11_THREAD_LOCAL"
#endif
#if defined(BOOST_NO_CXX11_CONSTEXPR) && !defined(BOOST_MATH_SHOW_CXX03_WARNING)
#  define BOOST_MATH_SHOW_CXX03_WARNING
#  define BOOST_MATH_CXX03_WARN_REASON "BOOST_NO_CXX11_CONSTEXPR"
#endif
#if defined(BOOST_NO_CXX11_NULLPTR) && !defined(BOOST_MATH_SHOW_CXX03_WARNING)
#  define BOOST_MATH_SHOW_CXX03_WARNING
#  define BOOST_MATH_CXX03_WARN_REASON "BOOST_NO_CXX11_NULLPTR"
#endif
#if defined(BOOST_NO_CXX11_NUMERIC_LIMITS) && !defined(BOOST_MATH_SHOW_CXX03_WARNING)
#  define BOOST_MATH_SHOW_CXX03_WARNING
#  define BOOST_MATH_CXX03_WARN_REASON "BOOST_NO_CXX11_NUMERIC_LIMITS"
#endif
#if defined(BOOST_NO_CXX11_DECLTYPE) && !defined(BOOST_MATH_SHOW_CXX03_WARNING)
#  define BOOST_MATH_SHOW_CXX03_WARNING
#  define BOOST_MATH_CXX03_WARN_REASON "BOOST_NO_CXX11_DECLTYPE"
#endif
#if defined(BOOST_NO_CXX11_HDR_ARRAY) && !defined(BOOST_MATH_SHOW_CXX03_WARNING)
#  define BOOST_MATH_SHOW_CXX03_WARNING
#  define BOOST_MATH_CXX03_WARN_REASON "BOOST_NO_CXX11_HDR_ARRAY"
#endif
#if defined(BOOST_NO_CXX11_HDR_ATOMIC) && !defined(BOOST_MATH_SHOW_CXX03_WARNING)
#  define BOOST_MATH_SHOW_CXX03_WARNING
#  define BOOST_MATH_CXX03_WARN_REASON "BOOST_NO_CXX11_HDR_ATOMIC"
#endif
#if defined(BOOST_NO_CXX11_ALLOCATOR) && !defined(BOOST_MATH_SHOW_CXX03_WARNING)
#  define BOOST_MATH_SHOW_CXX03_WARNING
#  define BOOST_MATH_CXX03_WARN_REASON "BOOST_NO_CXX11_ALLOCATOR"
#endif
#if defined(BOOST_NO_CXX11_EXPLICIT_CONVERSION_OPERATORS) && !defined(BOOST_MATH_SHOW_CXX03_WARNING)
#  define BOOST_MATH_SHOW_CXX03_WARNING
#  define BOOST_MATH_CXX03_WARN_REASON "BOOST_NO_CXX11_EXPLICIT_CONVERSION_OPERATORS"
#endif

#ifdef BOOST_MATH_SHOW_CXX03_WARNING
//
// The above list includes everything we use, plus a few we're likely to use soon.
// As from March 2020, C++03 support is deprecated, and as from March 2021 will be removed,
// so mark up as such:
//
#if (defined(_MSC_VER) || defined(__GNUC__)) && !defined(BOOST_MATH_DISABLE_DEPRECATED_03_WARNING)
BOOST_PRAGMA_MESSAGE("CAUTION: One or more C++11 features were found to be unavailable")
BOOST_PRAGMA_MESSAGE("CAUTION: Compiling Boost.Math in pre-C++11 conformance modes is now deprecated and will be removed from March 2021.")
BOOST_PRAGMA_MESSAGE("CAUTION: Define BOOST_MATH_DISABLE_DEPRECATED_03_WARNING to suppress this message.")
BOOST_PRAGMA_MESSAGE("CAUTION: This message was generated due to the define: " BOOST_MATH_CXX03_WARN_REASON)
#endif
#endif

#endif
