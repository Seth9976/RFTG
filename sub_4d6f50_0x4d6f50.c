// 函数名称: sub_4d6f50
// 虚拟地址: 0x4d6f50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4d6f50()
{
    // 第一条实际指令: int32_t* esi = data_27e7fd4
    int32_t* esi = data_27e7fd4
    
    if (*esi == 0)
        *esi = sub_4cce80(0x6000)
        esi[2] = 0x100
        esi[6] = "SoundInstances"
        esi[5] = 0xde0c
        return 0xde0c
    
    sub_4c5870("mpBlock == NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0xa7, 
        "DataArray<struct SoundInstance>::DataArrayInitialize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
