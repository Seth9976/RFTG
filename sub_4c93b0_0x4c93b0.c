// 函数名称: sub_4c93b0
// 虚拟地址: 0x4c93b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __fastcallsub_4c93b0(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[4] u>= arg1[2])
    if (arg1[4] u>= arg1[2])
        sub_4c5870("mUsedCount < mMaxSize", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0xcd, 
            "DataArray<struct NetListen>::DataArrayAlloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_1 = arg1[3]
    int32_t edx = arg1[1]
    
    if (eax_1 u> edx)
        sub_4c5870("mFreeListHead <= mMaxUsedCount", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 
            0xce, "DataArray<struct NetListen>::DataArrayAlloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_3
    
    if (eax_1 != edx)
        edx = eax_1
        eax_3 = *(*arg1 + eax_1 * 0xc + 8)
    else
        eax_3 = edx + 1
        arg1[1] = eax_3
    
    int32_t esi_2 = *arg1
    arg1[3] = eax_3
    int32_t* result = esi_2 + edx * 0xc
    *result = 0
    result[1] = 0
    result[2] = arg1[5] << 0x10 | edx
    arg1[5] += 1
    
    if (arg1[5] == 0x10000)
        arg1[5] = 1
    
    arg1[4] += 1
    return result
}
