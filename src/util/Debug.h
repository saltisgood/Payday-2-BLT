#pragma once

#include <memory>

#include "util.h"

extern "C"
{
	struct _EXCEPTION_POINTERS;
	typedef unsigned long DWORD;
	void * __cdecl _exception_info(void);
}

namespace pd2hook
{
DWORD DumpStackTrace(_EXCEPTION_POINTERS *ep);

template<typename T>
struct DebugDeleter : public std::default_delete<T>
{
	DebugDeleter() = default;
	template <class U, class = typename enable_if<is_convertible<U*, T*>::value>::type>
	DebugDeleter(const default_delete<U>& del) {}

	void operator()(T *ptr) const
	{
		PD2HOOK_LOG_LOG(__FUNCTION__ << " deleting @ " << ptr);
		std::default_delete<T>::operator()(ptr);
	}
};
}