// 函数名称: sub_404690
// 虚拟地址: 0x404690
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_404690(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax_8 = arg1[1]
    int32_t eax_8 = arg1[1]
    
    if (eax_8 == 2)
        return *arg1 * 0x1f8 + data_27e7a40 + 0xad8
    
    if (eax_8 == 5)
        return *arg1 * 0x1f8 + data_27e7a40 + 0x2c9050
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\CClient.cpp", 0x6a9, "GameSetupNetwork")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
