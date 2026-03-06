// 函数名称: sub_4d3000
// 虚拟地址: 0x4d3000
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4d3000()
{
    // 第一条实际指令: char const* const var_14
    char const* const var_14
    int32_t var_8
    
    if (data_be1a70 u< data_be1a68)
        int32_t edx_1 = data_be1a6c
        int32_t eax_1 = data_be1a64
        
        if (edx_1 u<= eax_1)
            int32_t ecx = data_be1a60
            int32_t eax_2
            
            if (edx_1 != eax_1)
                eax_2 = *(ecx + edx_1 * 0x24 + 0x20)
            else
                edx_1 = eax_1
                eax_2 = eax_1 + 1
                data_be1a64 = eax_2
            
            data_be1a6c = eax_2
            void* result = ecx + edx_1 * 0x24
            __builtin_memset(result, 0, 0x20)
            *(result + 0x20) = data_be1a74 << 0x10 | edx_1
            int32_t ecx_5 = data_be1a74 + 1
            data_be1a74 = ecx_5
            
            if (ecx_5 == 0x10000)
                data_be1a74 = 1
            
            data_be1a70 += 1
            return result
        
        char const* const var_4_1 = "DataArray<struct VoipServerBounceClient>::DataArrayAlloc"
        var_8 = 0xce
        char const* const var_c_1 = "c:\ax2010\engine\DataArray.h"
        char* const var_10_1 = &data_83f3d3
        var_14 = "mFreeListHead <= mMaxUsedCount"
    else
        char const* const var_4 = "DataArray<struct VoipServerBounceClient>::DataArrayAlloc"
        var_8 = 0xcd
        char const* const var_c = "c:\ax2010\engine\DataArray.h"
        char* const var_10 = &data_83f3d3
        var_14 = "mUsedCount < mMaxSize"
    
    sub_4c5870(var_14, &data_83f3d3, "c:\ax2010\engine\DataArray.h", var_8, 
        "DataArray<struct VoipServerBounceClient>::DataArrayAlloc")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
