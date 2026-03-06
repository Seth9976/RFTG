// 函数名称: sub_5109b0
// 虚拟地址: 0x5109b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5109b0()
{
    // 第一条实际指令: if (data_be1e78 == 0)
    if (data_be1e78 == 0)
        data_be1e78 = sub_4cce80(0x1340000)
        data_be1e80 = 0x4000
        data_be1e90 = &data_83f3d3
        data_be1e8c = 0xd3d3
        return 0xd3d3
    
    sub_4c5870("mpBlock == NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0xa7, 
        "DataArray<struct FabState>::DataArrayInitialize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
