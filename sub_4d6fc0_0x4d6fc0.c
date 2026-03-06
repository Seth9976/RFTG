// 函数名称: sub_4d6fc0
// 虚拟地址: 0x4d6fc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_4d6fc0()
{
    // 第一条实际指令: int32_t* esi = data_27e7fd4
    int32_t* esi = data_27e7fd4
    
    if (esi[4] u>= esi[2])
        sub_4c5870("mUsedCount < mMaxSize", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0xcd, 
            "DataArray<struct SoundInstance>::DataArrayAlloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_2 = esi[3]
    int32_t ebx = esi[1]
    
    if (eax_2 u> ebx)
        sub_4c5870("mFreeListHead <= mMaxUsedCount", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 
            0xce, "DataArray<struct SoundInstance>::DataArrayAlloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_4
    
    if (eax_2 != ebx)
        ebx = eax_2
        eax_4 = *(eax_2 * 0x60 + *esi + 0x5c)
    else
        eax_4 = ebx + 1
        esi[1] = eax_4
    
    int128_t* result = ebx * 0x60 + *esi
    esi[3] = eax_4
    sub_5abfc0(result, 0, 0x5c)
    *(result + 0x5c) = esi[5] << 0x10 | ebx
    esi[5] += 1
    
    if (esi[5] == 0x10000)
        esi[5] = 1
    
    esi[4] += 1
    return result
}
