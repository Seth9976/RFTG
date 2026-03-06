// 函数名称: sub_4eb140
// 虚拟地址: 0x4eb140
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4eb140()
{
    // 第一条实际指令: void* eax = data_27e7fcc
    void* eax = data_27e7fcc
    
    if (eax != 0)
        return *(eax + 0x30)
    
    sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
