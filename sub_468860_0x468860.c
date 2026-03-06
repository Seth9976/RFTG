// 函数名称: sub_468860
// 虚拟地址: 0x468860
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_468860()
{
    // 第一条实际指令: int32_t esi
    int32_t esi
    void* result = sub_468810(esi)
    
    if (result != 0)
        return result
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGServer.cpp", 0x52, "SAsyncGameLookup")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
