// 函数名称: sub_426510
// 虚拟地址: 0x426510
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_426510(int32_t arg1)
{
    // 第一条实际指令: if (arg1 - 1 u<= 9)
    if (arg1 - 1 u<= 9)
        switch (arg1)
            case 1
                return &data_85d24c
            case 2
                return &data_85d250
            case 3
                return "III:"
            case 4
                return &data_85d25c
            case 5
                return &data_85d260
            case 7
                return &data_85d264
            case 0xa
                return &data_85d248
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1640, "PhaseNumeral")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
