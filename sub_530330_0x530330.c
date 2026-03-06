// 函数名称: sub_530330
// 虚拟地址: 0x530330
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_530330()
{
    // 第一条实际指令: if (data_be1ed8 == 0)
    if (data_be1ed8 == 0)
        data_be1ed8 = sub_4cce80(0x6780000)
        data_be1ee0 = 0x4000
        data_be1ef0 = "ui2 elements"
        data_be1eec = 0xd928
        return 0xd928
    
    sub_4c5870("mpBlock == NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0xa7, 
        "DataArray<struct UI2>::DataArrayInitialize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
