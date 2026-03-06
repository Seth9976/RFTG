// 函数名称: sub_531c40
// 虚拟地址: 0x531c40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __fastcallsub_531c40(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[4] u>= arg1[2])
    if (arg1[4] u>= arg1[2])
        sub_4c5870("mUsedCount < mMaxSize", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0xcd, 
            "DataArray<struct World>::DataArrayAlloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_1 = arg1[3]
    int32_t esi = arg1[1]
    
    if (eax_1 u> esi)
        sub_4c5870("mFreeListHead <= mMaxUsedCount", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 
            0xce, "DataArray<struct World>::DataArrayAlloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (eax_1 != esi)
        esi = eax_1
        arg1[3] = *(*arg1 + eax_1 * 0x14 + 0x10)
    else
        arg1[1] = esi + 1
        arg1[3] = esi + 1
    
    int32_t* result = *arg1 + esi * 0x14
    *result = 0
    result[1] = 0
    result[2] = 0
    result[3] = 0
    result[4] = arg1[5] << 0x10 | esi
    arg1[5] += 1
    
    if (arg1[5] == 0x10000)
        arg1[5] = 1
    
    arg1[4] += 1
    return result
}
