// 函数名称: sub_46c7f0
// 虚拟地址: 0x46c7f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_46c7f0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* eax = sub_46b2b0(arg2)
    void* eax = sub_46b2b0(arg2)
    int32_t eax_1 = *(eax + 0x550)
    
    if (eax_1 == 0 && *(eax + 0xa94) == eax_1)
        int32_t var_18 = 1
        sub_469e10(arg1, arg2, 8, 0xffffffff, eax_1, eax_1, eax_1, eax_1)
        sub_469ff0(arg2)
        return 0
    
    if (eax_1 == 1 && *(eax + 0xa94) == eax_1)
        int32_t eax_3 = sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, *(eax + 0x574))
        int32_t var_18_1 = 1
        sub_469e10(arg1, arg2, 8, 
            *(sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, *(eax + 0x30)) + 0x7c), 0, 0, eax_3 + 0x7c, 
            1)
        sub_46bf90()
        sub_469ff0(arg2)
        return 0
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGShared.cpp", 0x5b7, "RFTGHandleTakeoverConfirm")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
