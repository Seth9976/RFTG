// 函数名称: sub_5339a0
// 虚拟地址: 0x5339a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5339a0(int32_t* arg1, int32_t arg2 @ esi)
{
    // 第一条实际指令: char const* const var_14
    char const* const var_14
    int32_t var_8
    
    if (arg2 != 0)
        uint32_t ecx_2 = zx.d(arg2.w)
        
        if (ecx_2 u< arg1[1])
            int32_t edx_1 = *arg1
            
            if (*(edx_1 + ecx_2 * 0x30 + 0x2c) == arg2)
                return ecx_2 * 0x30 + edx_1
        
        char const* const var_4_1 = "DataArray<struct Light>::DataArrayGet"
        var_8 = 0x46
        char const* const var_c_1 = "c:\ax2010\engine\DataArray.h"
        char* const var_10_1 = &data_83f3d3
        var_14 = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_4 = "DataArray<struct Light>::DataArrayGet"
        var_8 = 0x45
        char const* const var_c = "c:\ax2010\engine\DataArray.h"
        char* const var_10 = &data_83f3d3
        var_14 = "id != DATAID_NULL"
    
    sub_4c5870(var_14, &data_83f3d3, "c:\ax2010\engine\DataArray.h", var_8, 
        "DataArray<struct Light>::DataArrayGet")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
