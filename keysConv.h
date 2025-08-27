#pragma once

#include <Windows.h>
#include <unordered_map>

#include <qnamespace.h>

struct KeysConvector
{
	std::unordered_map<Qt::Key, UINT> QKeyToSysKey;
	std::unordered_map<UINT, Qt::Key> SysKeyToQKey;

	KeysConvector();

	UINT QtoSys(Qt::Key QKey) {
		return QKeyToSysKey[QKey];
	}

	Qt::Key SysToQ(UINT SysKey) {
		return SysKeyToQKey[SysKey];
	}
};