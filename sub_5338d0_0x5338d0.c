// 函数名称: sub_5338d0
// 虚拟地址: 0x5338d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_5338d0(int32_t* arg1 @ esi)
{
    // 第一条实际指令: if (arg1[4] u>= arg1[2])
    if (arg1[4] u>= arg1[2])
        sub_4c5870("mUsedCount < mMaxSize", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0xcd, 
            "DataArray<struct Light>::DataArrayAlloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_1 = arg1[3]
    int32_t ebx = arg1[1]
    
    if (eax_1 u> ebx)
        sub_4c5870("mFreeListHead <= mMaxUsedCount", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 
            0xce, "DataArray<struct Light>::DataArrayAlloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_3
    
    if (eax_1 != ebx)
        ebx = eax_1
        eax_3 = *(*arg1 + eax_1 * 0x30 + 0x2c)
    else
        eax_3 = ebx + 1
        arg1[1] = eax_3
    
    int128_t* result = ebx * 0x30 + *arg1
    arg1[3] = eax_3
    sub_5abfc0(result, 0, 0x2c)
    *(result + 0x2c) = arg1[5] << 0x10 | ebx
    arg1[5] += 1
    
    if (arg1[5] == 0x10000)
        arg1[5] = 1
    
    arg1[4] += 1
    return result
}
