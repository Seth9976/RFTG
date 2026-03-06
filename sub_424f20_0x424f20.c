// 函数名称: sub_424f20
// 虚拟地址: 0x424f20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_424f20(int32_t arg1)
{
    // 第一条实际指令: if (arg1 == 0x10)
    if (arg1 == 0x10)
        return data_307c400
    
    if (arg1 == 0x200)
        return data_307c438
    
    if (arg1 == 8)
        return data_307c3f8
    
    if (arg1 == 2)
        return data_307c3ec
    
    if (arg1 == 4)
        return data_307c3f0
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1562, "GetSpecificMilitaryTexture")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
