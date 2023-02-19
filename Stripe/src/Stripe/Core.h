#pragma once

#ifdef ST_PLATFORM_WINDOWS
	#ifdef ST_BUILD_DLL
		#define STRIPE_API __declspec(dllexport)
	#else
		#define STRIPE_API __declspec(dllimport)
	#endif // ST_BUILD_DLL
#else
	#error Stripe is currently only in development for Win64 Platforms!
#endif // ST_PLATFORM_WINDOWS

#ifdef ST_ENABLE_ASSERTS
	#define ST_ASSERT(x, ...) {if(!(x)) { HZ_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); }}
	#define ST_CORE_ASSERT(x, ...) {if(!(x)) { HZ_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); }}
#else
	#define ST_ASSERT(x, ...)
	#define ST_CORE_ASSERT(x, ...)
#endif // ST_ENABLE_ASSERTS


#define BIT(x) (1 << x)