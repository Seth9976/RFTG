// 函数名称: sub_423a30
// 虚拟地址: 0x423a30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_423a30(int32_t arg1)
{
    // 第一条实际指令: if (arg1 u> 9)
    if (arg1 u> 9)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0xb46, "PhaseButtonToRole")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t ecx
    
    switch (arg1)
        case 0
            ecx = 0
        case 1
            ecx = 1
        case 2
            ecx = 2
        case 3
            ecx = 3
        case 4
            ecx = 4
        case 5
            ecx = 5
        case 6
            ecx = 6
        case 7
            ecx = 7
        case 8
            ecx = 8
        case 9
            ecx = 9
    
    void* esi = *(data_27e7a40 + 0x548)
    
    if ((*(esi + 0x438ad) == 0 || ecx != 3) && (*(esi + 0x438af) == 0 || ecx != 5)
            && (*(esi + 0x438b2) == 0 || ecx != 7) && (*(esi + 0x438b1) == 0 || ecx != 2)
            && (*(esi + 0x438b0) == 0 || ecx != 9) && (*(esi + 0x438ae) == 0 || ecx != 1)
            && *(esi + 0x438ac) == 0)
        arg1 = sub_41d4c0(arg1)
        
        if (*(esi + 0x438b4) == 0 || arg1 != 4)
            arg1.b = 0
            return arg1
    
    arg1.b = 1
    return arg1
}
