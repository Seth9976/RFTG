// 函数名称: sub_4b8fc0
// 虚拟地址: 0x4b8fc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4b8fc0()
{
    // 第一条实际指令: int32_t* esi = data_27e7a44
    int32_t* esi = data_27e7a44
    
    if (*esi == 0)
        *esi = sub_4cce80(0x3f0)
        esi[2] = 2
        esi[6] = "games"
        esi[5] = 0xddfc
        return 0xddfc
    
    sub_4c5870("mpBlock == NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0xa7, 
        "DataArray<struct SGame>::DataArrayInitialize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
