// 函数名称: sub_54c330
// 虚拟地址: 0x54c330
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_54c330()
{
    // 第一条实际指令: if (data_be1f10 == 0)
    if (data_be1f10 == 0)
        data_be1f10 = sub_4cce80(0x7c400)
        data_be1f18 = 0x80
        data_be1f28 = "materialcache"
        data_be1f24 = 0xd44c
        return 0xd44c
    
    sub_4c5870("mpBlock == NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0xa7, 
        "DataArray<struct MaterialCacheItem>::DataArrayInitialize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
