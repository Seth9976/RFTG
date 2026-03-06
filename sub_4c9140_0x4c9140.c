// 函数名称: sub_4c9140
// 虚拟地址: 0x4c9140
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4c9140()
{
    // 第一条实际指令: int32_t* esi = data_27e7bb8
    int32_t* esi = data_27e7bb8
    
    if (*esi == 0)
        *esi = sub_4cce80(0x4b1c0)
        esi[2] = 0xfd0
        esi[6] = "NetLocs"
        esi[5] = 0xd49c
        return 0xd49c
    
    sub_4c5870("mpBlock == NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0xa7, 
        "DataArray<struct NetLoc>::DataArrayInitialize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
