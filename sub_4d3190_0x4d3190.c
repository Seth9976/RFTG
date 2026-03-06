// 函数名称: sub_4d3190
// 虚拟地址: 0x4d3190
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4d3190(char** arg1)
{
    // 第一条实际指令: void* esi = data_27e7fcc
    void* esi = data_27e7fcc
    
    if (esi != 0)
        int32_t result = sub_531640(arg1)
        *(esi + 0x48) = result
        return result
    
    sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
