// 函数名称: sub_510b30
// 虚拟地址: 0x510b30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_510b30(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
            "DataArray<struct FabState>::DataArrayGet")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    uint32_t eax_2 = zx.d(arg2.w)
    
    if (eax_2 u< data_be1e7c)
        int32_t esi_1 = data_be1e78
        
        if (*(eax_2 * 0x4d0 + esi_1 + 0x4cc) == arg2)
            return eax_2 * 0x4d0 + esi_1
    
    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x46, 
        "DataArray<struct FabState>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
