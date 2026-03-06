// 函数名称: sub_4f3760
// 虚拟地址: 0x4f3760
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_4f3760(int32_t* arg1 @ esi)
{
    // 第一条实际指令: if (arg1[4] u>= arg1[2])
    if (arg1[4] u>= arg1[2])
        sub_4c5870("mUsedCount < mMaxSize", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0xcd, 
            "DataArray<struct ParticleSystem>::DataArrayAlloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_2 = arg1[3]
    int32_t ecx = arg1[1]
    
    if (eax_2 u> ecx)
        sub_4c5870("mFreeListHead <= mMaxUsedCount", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 
            0xce, "DataArray<struct ParticleSystem>::DataArrayAlloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ebx
    
    if (eax_2 != ecx)
        ebx = eax_2
        arg1[3] = *(eax_2 * 0x7c + *arg1 + 0x78)
    else
        ebx = ecx
        arg1[1] = ecx + 1
        arg1[3] = ecx + 1
    
    int128_t* result = ebx * 0x7c + *arg1
    sub_5abfc0(result, 0, 0x78)
    
    if (result != 0)
        *(result + 8) = 0
        *(result + 0xc) = 0
        result[1].d = 0
    
    *(result + 0x78) = arg1[5] << 0x10 | ebx
    arg1[5] += 1
    
    if (arg1[5] == 0x10000)
        arg1[5] = 1
    
    arg1[4] += 1
    return result
}
