// 函数名称: sub_4c91b0
// 虚拟地址: 0x4c91b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_4c91b0()
{
    // 第一条实际指令: int32_t* esi = data_27e7bb8
    int32_t* esi = data_27e7bb8
    
    if (esi[4] u>= esi[2])
        sub_4c5870("mUsedCount < mMaxSize", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0xcd, 
            "DataArray<struct NetLoc>::DataArrayAlloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_2 = esi[3]
    int32_t ecx = esi[1]
    
    if (eax_2 u> ecx)
        sub_4c5870("mFreeListHead <= mMaxUsedCount", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 
            0xce, "DataArray<struct NetLoc>::DataArrayAlloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ebx
    
    if (eax_2 != ecx)
        ebx = eax_2
        esi[3] = *(eax_2 * 0x4c + *esi + 0x48)
    else
        ebx = ecx
        esi[1] = ecx + 1
        esi[3] = ecx + 1
    
    int128_t* result = ebx * 0x4c + *esi
    sub_5abfc0(result, 0, 0x48)
    
    if (result != 0)
        __builtin_memset(&result[3], 0, 0x18)
    
    *(result + 0x48) = esi[5] << 0x10 | ebx
    esi[5] += 1
    
    if (esi[5] == 0x10000)
        esi[5] = 1
    
    esi[4] += 1
    return result
}
