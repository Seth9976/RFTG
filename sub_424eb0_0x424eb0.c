// 函数名称: sub_424eb0
// 虚拟地址: 0x424eb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_424eb0(int32_t arg1)
{
    // 第一条实际指令: if (arg1 == 0x10)
    if (arg1 == 0x10)
        return "ALIEN"
    
    if (arg1 == 0x200)
        return "REBEL"
    
    if (arg1 == 8)
        return "GENES"
    
    if (arg1 == 2)
        return "NOVELTY"
    
    if (arg1 == 4)
        return "RARE"
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1554, "GetSpecificMilitaryName")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
