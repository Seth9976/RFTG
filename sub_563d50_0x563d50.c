// 函数名称: sub_563d50
// 虚拟地址: 0x563d50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_563d50(int32_t* arg1 @ esi)
{
    // 第一条实际指令: if (*arg1 == 0)
    if (*arg1 == 0)
        *arg1 = sub_4cce80(0x24c000)
        arg1[2] = 0x1000
        arg1[6] = "dx11buffers"
        arg1[5] = 0xd60c
        return 0xd60c
    
    sub_4c5870("mpBlock == NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0xa7, 
        "DataArray<struct Dx11BufferData>::DataArrayInitialize")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
