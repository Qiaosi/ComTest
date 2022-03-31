// Jisuanqi.cpp: CJisuanqi 的实现

#include "pch.h"
#include "Jisuanqi.h"


// CJisuanqi

STDMETHODIMP CJisuanqi::Number(LONG __num, LONG* __result) {

	*__result = __num * 8;

	return  S_OK;
}

