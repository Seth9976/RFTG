// 函数名称: sub_4fc0d0
// 虚拟地址: 0x4fc0d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_4fc0d0()
{
    // 第一条实际指令: if (data_be1cac u>= data_be1ca4)
    if (data_be1cac u>= data_be1ca4)
        sub_4c5870("mUsedCount < mMaxSize", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0xcd, 
            "DataArray<struct UIStateElement>::DataArrayAlloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_1 = data_be1ca8
    int32_t ecx = data_be1ca0
    
    if (eax_1 u> ecx)
        sub_4c5870("mFreeListHead <= mMaxUsedCount", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 
            0xce, "DataArray<struct UIStateElement>::DataArrayAlloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx = data_be1c9c
    int32_t ecx_1
    int32_t esi
    
    if (eax_1 != ecx)
        esi = eax_1
        ecx_1 = *(eax_1 * 0x1c0 + edx + 0x1bc)
    else
        esi = ecx
        ecx_1 = ecx + 1
        data_be1ca0 = ecx_1
    
    int128_t* result = esi * 0x1c0 + edx
    data_be1ca8 = ecx_1
    sub_5abfc0(result, 0, 0x1bc)
    
    if (result != 0)
        sub_4fc450(result)
    
    *(result + 0x1bc) = data_be1cb0 << 0x10 | esi
    int32_t eax_5 = data_be1cb0 + 1
    data_be1cb0 = eax_5
    
    if (eax_5 == 0x10000)
        data_be1cb0 = 1
    
    data_be1cac += 1
    return result
}
