// 函数名称: sub_49b2a0
// 虚拟地址: 0x49b2a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_49b2a0() __noreturn
{
    // 第一条实际指令: void* eax = data_27e7aa0
    void* eax = data_27e7aa0
    
    if (eax != 0)
        *(eax + 0x1ec4) = 1
        sub_406ad0()
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\rftg\engine.cpp", 0x25, "in_game_halt")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
