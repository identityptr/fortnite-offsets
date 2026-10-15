#pragma once
#include <cstddef>
#include <cstdint>

struct FName { std::uint32_t ComparisonIndex; std::int32_t Number; };
struct FString { wchar_t* Data; std::int32_t Count; std::int32_t Max; };
struct FText { std::uint8_t Data[0x18]; };
struct FScriptDelegate { std::uint8_t Data[0x10]; };
struct FMulticastScriptDelegate { std::uint8_t Data[0x10]; };
struct FMulticastInlineDelegate { std::uint8_t Data[0x10]; };
struct FMulticastSparseDelegate { std::uint8_t Data[0x10]; };

template<class T> struct TArray { T* Data; std::int32_t Count; std::int32_t Max; };
template<class K, class V> struct TMap { std::uint8_t Data[0x10]; };
template<class T> struct TSet { std::uint8_t Data[0x50]; };
template<class T> struct TSubclassOf { T* Class; };
template<class T> struct TWeakObjectPtr { std::int32_t Index; std::int32_t Serial; };
template<class T> struct TLazyObjectPtr { std::uint8_t Data[0x1C]; };
template<class T> struct TSoftObjectPtr { std::uint8_t Data[0x28]; };
template<class T> struct TSoftClassPtr { std::uint8_t Data[0x28]; };
template<class T> struct TScriptInterface { T* Object; void* Interface; };
template<class T> struct TFieldPath { std::uint8_t Data[0x20]; };
