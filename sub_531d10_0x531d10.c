// 函数名称: sub_531d10
// 虚拟地址: 0x531d10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_531d10(int32_t* arg1, int32_t arg2 @ esi)
{
    // 第一条实际指令: char const* const var_14
    char const* const var_14
    int32_t var_8
    
    if (arg2 != 0)
        uint32_t eax_3 = zx.d(arg2.w)
        
        if (eax_3 u< arg1[1])
            int32_t ecx = *arg1
            
            if (*(ecx + eax_3 * 0x14 + 0x10) == arg2)
                return ecx + eax_3 * 0x14
        
        char const* const var_4_1 = "DataArray<struct World>::DataArrayGet"
        var_8 = 0x46
        char const* const var_c_1 = "c:\ax2010\engine\DataArray.h"
        char* const var_10_1 = &data_83f3d3
        var_14 = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_4 = "DataArray<struct World>::DataArrayGet"
        var_8 = 0x45
        char const* const var_c = "c:\ax2010\engine\DataArray.h"
        char* const var_10 = &data_83f3d3
        var_14 = "id != DATAID_NULL"
    
    sub_4c5870(var_14, &data_83f3d3, "c:\ax2010\engine\DataArray.h", var_8, 
        "DataArray<struct World>::DataArrayGet")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
