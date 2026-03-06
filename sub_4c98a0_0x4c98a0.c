// 函数名称: sub_4c98a0
// 虚拟地址: 0x4c98a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4c98a0()
{
    // 第一条实际指令: int32_t result = data_27e7fcc
    int32_t result = data_27e7fcc
    
    if (result != 0)
        return result
    
    sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
