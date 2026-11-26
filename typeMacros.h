#pragma once

#define si16 short
#define ui16 unsigned short
#define si32 int
#define ui32 unsigned int
#define si64 long long
#define ui64 unsigned long long

#define f32 float
#define d64 double

#define string std::string // this include must be below <string> inclusion

#define any std::any // must include <any>
#define anyCast(type,value) std::any_cast<type>(value)

#define fixedArray std::array // below array, standard array class from std
#define dynamicArray std::vector // below <vector>; this is defined from vector, but they are pretty much dynamic arrays with extra safety and heap allocated, including methods such as push/pop_back
#define push push_back
#define pop pop_back

#define endl '\n' // endl also flushes the buffer which takes extra time, especially in loops, \n is fine to sub with
#define cout std::cout // this include must be below <iostream>
#define wcout std::wcout // cout for wide chars, wchar_t
#define wcin std::wcin // cin for wide chars, wchar_t
#define cin std::cin

#define uptr std::unique_ptr // must be below <memory>
#define sptr std::shared_ptr
#define wptr std::weak_ptr
#define makeuptr std::make_unique
#define makesptr std::make_shared
#define moveuptr std::move
