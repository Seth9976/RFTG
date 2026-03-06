// 函数名称: sub_4c92a0
// 虚拟地址: 0x4c92a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4c92a0(int32_t arg1 @ esi)
{
    // 第一条实际指令: int32_t* ecx_2 = data_27e7bb8
    int32_t* ecx_2 = data_27e7bb8
    char const* const var_14
    int32_t var_8
    
    if (arg1 != 0)
        uint32_t eax_3 = zx.d(arg1.w)
        
        if (eax_3 u< ecx_2[1])
            int32_t edx_1 = *ecx_2
            
            if (*(eax_3 * 0x4c + edx_1 + 0x48) == arg1)
                return eax_3 * 0x4c + edx_1
        
        char const* const var_4_1 = "DataArray<struct NetLoc>::DataArrayGet"
        var_8 = 0x46
        char const* const var_c_1 = "c:\ax2010\engine\DataArray.h"
        char* const var_10_1 = &data_83f3d3
        var_14 = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_4 = "DataArray<struct NetLoc>::DataArrayGet"
        var_8 = 0x45
        char const* const var_c = "c:\ax2010\engine\DataArray.h"
        char* const var_10 = &data_83f3d3
        var_14 = "id != DATAID_NULL"
    
    sub_4c5870(var_14, &data_83f3d3, "c:\ax2010\engine\DataArray.h", var_8, 
        "DataArray<struct NetLoc>::DataArrayGet")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
