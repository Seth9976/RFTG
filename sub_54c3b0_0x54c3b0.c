// 函数名称: sub_54c3b0
// 虚拟地址: 0x54c3b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_54c3b0()
{
    // 第一条实际指令: if (data_be1f20 u>= data_be1f18)
    if (data_be1f20 u>= data_be1f18)
        sub_4c5870("mUsedCount < mMaxSize", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0xcd, 
            "DataArray<struct MaterialCacheItem>::DataArrayAlloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_1 = data_be1f1c
    int32_t ecx = data_be1f14
    
    if (eax_1 u> ecx)
        sub_4c5870("mFreeListHead <= mMaxUsedCount", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 
            0xce, "DataArray<struct MaterialCacheItem>::DataArrayAlloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx = data_be1f10
    int32_t ecx_1
    int32_t edi
    
    if (eax_1 != ecx)
        edi = eax_1
        ecx_1 = *(eax_1 * 0xf88 + edx + 0xf84)
    else
        edi = ecx
        ecx_1 = ecx + 1
        data_be1f14 = ecx_1
    
    int128_t* result = edi * 0xf88 + edx
    data_be1f1c = ecx_1
    sub_5abfc0(result, 0, 0xf84)
    *(result + 0xf84) = data_be1f24 << 0x10 | edi
    int32_t eax_5 = data_be1f24 + 1
    data_be1f24 = eax_5
    
    if (eax_5 == 0x10000)
        data_be1f24 = 1
    
    data_be1f20 += 1
    return result
}
