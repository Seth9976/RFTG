// 函数名称: sub_405670
// 虚拟地址: 0x405670
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_405670(int32_t* arg1 @ esi)
{
    // 第一条实际指令: if (*arg1 == 0)
    if (*arg1 == 0)
        *arg1 = sub_4cce80(0x24000)
        arg1[2] = 0x800
        arg1[6] = "effects"
        arg1[5] = 0xdefc
        return 0xdefc
    
    sub_4c5870("mpBlock == NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0xa7, 
        "DataArray<struct SimpleEffect>::DataArrayInitialize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
