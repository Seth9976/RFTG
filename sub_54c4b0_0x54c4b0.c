// 函数名称: sub_54c4b0
// 虚拟地址: 0x54c4b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_54c4b0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
            "DataArray<struct MaterialCacheItem>::DataArrayGet")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    uint32_t eax_2 = zx.d(arg2.w)
    
    if (eax_2 u< data_be1f14)
        int32_t esi_1 = data_be1f10
        
        if (*(eax_2 * 0xf88 + esi_1 + 0xf84) == arg2)
            return eax_2 * 0xf88 + esi_1
    
    sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x46, 
        "DataArray<struct MaterialCacheItem>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
