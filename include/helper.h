#pragma once
#define DEBUG 1

#include "pch.h"
#include "SDK.h"

extern DWORD WINAPI MainThread_Initialize(LPVOID dwModule);

namespace DX11Base
{
	using namespace std::chrono_literals;
	inline HMODULE g_hModule{};
	inline std::atomic_bool g_Running{};
	inline std::atomic_bool g_KillSwitch = FALSE;
	inline const char* FStringToCStr(const UC::FString& str)
	{
		static std::string buffer;     // temporary storage for c_str()
		buffer = str.ToString();       // convert UC::FString  std::string safely
		return buffer.c_str();         // return const char* for logging
	}


	struct Vector2 
	{
		float x, y;
	};


	struct Vector3 
	{
		float x, y, z;
	};

	struct Vector4 
	{
		float x, y, z, w;
	};

	struct FVector
	{
		float X, Y, Z;

		FVector() = default;
		FVector(const DX11Base::FVector& other) : X(other.X), Y(other.Y), Z(other.Z) {}
		FVector& operator=(const DX11Base::FVector& other) { X = other.X; Y = other.Y; Z = other.Z; return *this; }
	};

	struct DVector2 
	{
		double x, y;
	};

	struct DVector3 
	{
		double x, y, z;
	};

	struct DVector4 
	{
		double x, y, z, w;
	};

	struct FString
	{
		wchar_t* Data;
		int32_t Count;
	};


}