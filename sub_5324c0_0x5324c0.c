// 函数名称: sub_5324c0
// 虚拟地址: 0x5324c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_5324c0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: if (arg2[4] u>= arg2[2])
    if (arg2[4] u>= arg2[2])
        sub_4c5870("mUsedCount < mMaxSize", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0xcd, 
            "DataArray<struct MarkerSet>::DataArrayAlloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_1 = arg2[3]
    int32_t esi = arg2[1]
    
    if (eax_1 u> esi)
        sub_4c5870("mFreeListHead <= mMaxUsedCount", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 
            0xce, "DataArray<struct MarkerSet>::DataArrayAlloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_3
    
    if (eax_1 != esi)
        esi = eax_1
        eax_3 = *(eax_1 * 0x2c + *arg2 + 0x28)
    else
        eax_3 = esi + 1
        arg2[1] = eax_3
    
    arg2[3] = eax_3
    void* result = esi * 0x2c + *arg2
    __builtin_memset(result, 0, 0x28)
    *(result + 0x28) = arg2[5] << 0x10 | esi
    arg2[5] += 1
    
    if (arg2[5] == 0x10000)
        arg2[5] = 1
    
    arg2[4] += 1
    return result
}
