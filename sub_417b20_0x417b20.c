// 函数名称: sub_417b20
// 虚拟地址: 0x417b20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_417b20(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (arg1 u> 0xb)
        sub_4c5870("Halt", &data_83f3d3, "..\code\OptionsDlg.cpp", 0x2ae, "GetLanguageText")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    switch (arg1)
        case 0
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return "ENGLISH"
        case 1
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return "DEUTSCH"
        case 2
            int32_t var_14
            __builtin_strncpy(&var_14, "FRAN", 4)
            int32_t var_10 = 0x534941c7
            char var_c = 0
            sub_5abfc0(&data_315f9a0, 0, 0x80)
            int32_t* eax_5 = &var_14
            int32_t esi = 0
            char i
            
            do
                i = *eax_5
                eax_5 += 1
            while (i != 0)
            
            int32_t eax_6 = eax_5 - &var_14:1
            
            if (eax_6 s> 0)
                do
                    void* eax_7 = &data_315f9a0
                    
                    do
                        i = *eax_7
                        eax_7 += 1
                    while (i != 0)
                    
                    sub_4184d0(eax_7 - 1, 0x315f9a1, zx.d(*(&var_14 + esi)))
                    esi += 1
                while (esi s< eax_6)
            
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return &data_315f9a0
        case 3
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return "SPANISH"
        case 4
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return "PORTUGESE"
        case 5
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return "SWEDISH"
        case 6
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return "POLISH"
        case 7
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return "KOREAN"
        case 8
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return "DUTCH"
        case 9
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return "JAPANESE"
        case 0xa
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return "NORWEGIAN"
        case 0xb
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return "FINNISH"
}
