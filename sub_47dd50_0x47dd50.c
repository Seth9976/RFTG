// 函数名称: sub_47dd50
// 虚拟地址: 0x47dd50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_47dd50(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ecx = *(arg1 + 4)
    int32_t var_24 = 0
    int32_t var_20 = 2
    int32_t var_1c = 3
    int32_t var_18 = 4
    int32_t eax_3 = (&var_24)[ecx]
    data_307d964 = eax_3
    int32_t eax_4
    
    switch (eax_3)
        case 0
            eax_4 = 0
        label_47ddb1:
            data_307d968 = eax_4
            data_307d8cc = 1
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 0
        case 2
            eax_4 = 0xb
            goto label_47ddb1
        case 3
            eax_4 = 0xc
            goto label_47ddb1
        case 4
            eax_4 = 0xe
            goto label_47ddb1
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RulesDlg.cpp", 0x64, "GetExpansionRulesPages")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
