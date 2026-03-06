// 函数名称: sub_46d260
// 虚拟地址: 0x46d260
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_46d260(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_2 = sub_46b2b0(arg1)
    void* eax_3 = *(eax_2 + 0x550)
    
    if (eax_3 s> *(eax_2 + 0x558))
        sub_4c5870("pgui.numCurrentDiscards <= pgui.numToChooseMax", &data_83f3d3, 
            "..\code\RFTGShared.cpp", 0x6df, "RFTGHandleConsumeHandConfirm")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (eax_3 s>= *(eax_2 + 0x554))
        void var_52c
        sub_469fa0(eax_3, eax_2 + 0x30, &var_52c)
        int32_t var_538 = 1
        void* entry_ebx
        sub_469e10(entry_ebx, arg1, 0xe, 0, &var_52c, *(eax_2 + 0x550), 0, 0)
        sub_469ff0(arg1)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0
    
    sub_4c5870("pgui.numCurrentDiscards >= pgui.numToChooseMin", &data_83f3d3, 
        "..\code\RFTGShared.cpp", 0x6e0, "RFTGHandleConsumeHandConfirm")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
