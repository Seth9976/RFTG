// 函数名称: sub_578f30
// 虚拟地址: 0x578f30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_578f30()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_ac[0x8]
    float* eax_2 = sub_575ca0(&var_ac)
    long double x87_r7 = fconvert.t(data_8c4d34)
    void var_4c
    int32_t ecx
    int32_t esi_2
    esi_2, ecx = __builtin_memcpy(&var_4c, eax_2, 0x40)
    int32_t var_c4 = ecx
    void var_6c
    sub_4f8710(esi_2, &var_6c, data_273ac24, &var_4c, &data_840a00, 0, fconvert.s(x87_r7), nullptr, 
        nullptr, nullptr)
    sub_5776e0()
    int80_t result
    int32_t var_54
    int32_t var_50
    int32_t* edi
    
    if (data_273bc30 != 0 || data_273bc31:1.b != 0)
        sub_4c6230(&var_54)
        int32_t var_b8_3 = var_50
        int32_t var_bc_2 = var_54
        int32_t eax_10 = sub_5781f0()
        
        if (eax_10 == 0xffffffff)
        label_5790d1:
            edi = &var_54
        label_5790d4:
            char eax_13
            int80_t result_5
            result_5, eax_13 = sub_4c6230(edi)
            result = result_5
            
            if (eax_13 != 0)
                SetCursor(LoadCursorA(nullptr, 0x7f00))
        else
            if (eax_10 u> 7)
                sub_4c5870("Halt", &data_83f3d3, "Editor\UIEditor.cpp", 0x45e, "UIEditorUpdate")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            switch (eax_10)
                case 0, 7
                label_578fe6:
                    char eax_5
                    int80_t result_1
                    result_1, eax_5 = sub_4c6230(&var_54)
                    result = result_1
                    
                    if (eax_5 != 0)
                        SetCursor(LoadCursorA(nullptr, 0x7f82))
                case 1, 6
                label_57908f:
                    char eax_11
                    int80_t result_4
                    result_4, eax_11 = sub_4c6230(&var_54)
                    result = result_4
                    
                    if (eax_11 != 0)
                        SetCursor(LoadCursorA(nullptr, 0x7f84))
                case 2, 5
                label_579000:
                    char eax_6
                    int80_t result_2
                    result_2, eax_6 = sub_4c6230(&var_54)
                    result = result_2
                    
                    if (eax_6 != 0)
                        SetCursor(LoadCursorA(nullptr, 0x7f83))
                case 3, 4
                label_57901a:
                    char eax_7
                    int80_t result_3
                    result_3, eax_7 = sub_4c6230(&var_54)
                    result = result_3
                    
                    if (eax_7 != 0)
                        SetCursor(LoadCursorA(nullptr, 0x7f85))
    else
        edi = &var_54
        
        if (data_273bc31.b == 0)
            goto label_5790d4
        
        sub_4c6230(edi)
        int32_t var_b8_1 = var_50
        int32_t var_bc_1 = var_54
        int32_t eax_4 = sub_578970()
        
        if (eax_4 == 0xffffffff)
            goto label_5790d1
        
        if (eax_4 u> 7)
            sub_4c5870("Halt", &data_83f3d3, "Editor\UIEditor.cpp", 0x484, "UIEditorUpdate")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        switch (eax_4)
            case 0, 7
                goto label_578fe6
            case 1, 6
                goto label_57908f
            case 2, 5
                goto label_579000
            case 3, 4
                goto label_57901a
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
