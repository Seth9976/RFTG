// 函数名称: sub_510a30
// 虚拟地址: 0x510a30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_510a30()
{
    // 第一条实际指令: if (data_be1e88 u>= data_be1e80)
    if (data_be1e88 u>= data_be1e80)
        sub_4c5870("mUsedCount < mMaxSize", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0xcd, 
            "DataArray<struct FabState>::DataArrayAlloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_1 = data_be1e84
    int32_t ecx = data_be1e7c
    
    if (eax_1 u> ecx)
        sub_4c5870("mFreeListHead <= mMaxUsedCount", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 
            0xce, "DataArray<struct FabState>::DataArrayAlloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx = data_be1e78
    int32_t ecx_1
    int32_t edi
    
    if (eax_1 != ecx)
        edi = eax_1
        ecx_1 = *(eax_1 * 0x4d0 + edx + 0x4cc)
    else
        edi = ecx
        ecx_1 = ecx + 1
        data_be1e7c = ecx_1
    
    int128_t* result = edi * 0x4d0 + edx
    data_be1e84 = ecx_1
    sub_5abfc0(result, 0, 0x4cc)
    *(result + 0x4cc) = data_be1e8c << 0x10 | edi
    int32_t eax_5 = data_be1e8c + 1
    data_be1e8c = eax_5
    
    if (eax_5 == 0x10000)
        data_be1e8c = 1
    
    data_be1e88 += 1
    return result
}
