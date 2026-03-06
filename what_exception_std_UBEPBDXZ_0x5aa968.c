// 函数名称: ?what@exception@std@@UBEPBDXZ
// 虚拟地址: 0x5aa968
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char const* const __fastcall?what@exception@std@@UBEPBDXZ(void* arg1)
{
    // 第一条实际指令: char const* const result = *(arg1 + 4)
    char const* const result = *(arg1 + 4)
    
    if (result != 0)
        return result
    
    return "Unknown exception"
}
