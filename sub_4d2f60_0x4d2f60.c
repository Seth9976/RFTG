// 函数名称: sub_4d2f60
// 虚拟地址: 0x4d2f60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4d2f60()
{
    // 第一条实际指令: if (data_be1a60 == 0)
    if (data_be1a60 == 0)
        data_be1a60 = sub_4cce80(0x900)
        data_be1a68 = 0x40
        data_be1a78 = "voipbounceclients"
        data_be1a74 = 0xd320
        return 0xd320
    
    sub_4c5870("mpBlock == NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0xa7, 
        "DataArray<struct VoipServerBounceClient>::DataArrayInitialize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
