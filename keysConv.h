#pragma once

#include <Windows.h>
#include <unordered_map>

#include <qnamespace.h>

struct KeysConvector
{
private:
	std::unordered_map<Qt::Key, UINT> QKeyToSysKey;
	std::unordered_map<UINT, Qt::Key> SysKeyToQKey;

public:
	KeysConvector();

	UINT QtoSys(Qt::Key QKey) {

		auto it = QKeyToSysKey.find(QKey);

		if (it != QKeyToSysKey.end())
			return it->second;
		return 0;
	}

	Qt::Key SysToQ(UINT SysKey) {

		auto it = SysKeyToQKey.find(SysKey);

		if (it != SysKeyToQKey.end())
			return it->second;

		return Qt::Key_unknown;
	}

	UINT QModToSysMod(Qt::KeyboardModifiers mods);

	Qt::KeyboardModifiers SysModToQMod(UINT mods);
};



