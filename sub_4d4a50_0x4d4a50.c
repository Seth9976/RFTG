// 函数名称: sub_4d4a50
// 虚拟地址: 0x4d4a50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4d4a50(int32_t* arg1 @ esi)
{
    // 第一条实际指令: sub_4d3c40(arg1[0x1a])
    sub_4d3c40(arg1[0x1a])
    int32_t* eax_1 = arg1[0xb]
    
    if (eax_1 != 0)
        sub_515650(eax_1)
    
    void* eax_2 = data_27e7fcc
    
    if (eax_2 != 0)
        return sub_4d58f0(*(eax_2 + 4), arg1)
    
    sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
