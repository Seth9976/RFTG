// 函数名称: sub_506850
// 虚拟地址: 0x506850
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __fastcallsub_506850(int32_t arg1, int32_t* arg2 @ edi)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d158
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* ecx = *arg2
    char* const eax_3 = &data_83f3d3
    
    if (ecx != 0)
        eax_3 = ecx
    
    eax_3.b = eax_3[arg1]
    
    if (eax_3.b u>= 0x80 && (eax_3.b & 0xe0) != 0xc0 && (eax_3.b & 0xf0) != 0xe0)
        eax_3.b &= 0xf8
        
        if (eax_3.b != 0xf0)
            sub_4c5870("!Xutf8_is_invalid_lead_char(mText + charIndex)", &data_83f3d3, "UITextBox.cpp", 
                0x212, "UITextBox::GetCharacterX")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    char* const var_14 = &data_83f3d3
    int32_t var_8_1 = 0
    
    if (ecx == 0)
        ecx = &data_83f3d3
    
    sub_4c4690(&var_14, ecx)
    
    switch (arg2[0x15] - 1)
        case 0, 3, 6
            char* const ecx_1 = var_14
            
            if (ecx_1 == 0)
                ecx_1 = &data_83f3d3
            
            int32_t var_30_1 = arg2[0xc]
            int32_t var_8_2 = 0xffffffff
            float var_18 = fconvert.s(sub_4cb0b0(ecx_1) * fconvert.t(arg2[0xe]) + fconvert.t(arg2[8])
                + fconvert.t(arg2[4]))
            sub_4c43d0(&var_14)
            fsbase->NtTib.ExceptionList = ExceptionList
            return fconvert.t(var_18)
        case 1, 4, 7
            char* const ecx_5 = *arg2
            
            if (ecx_5 == 0)
                ecx_5 = &data_83f3d3
            
            int32_t var_30_2 = arg2[0xc]
            long double x87_r7_5 = sub_4cb0b0(ecx_5) * fconvert.t(arg2[0xe])
            char* const ecx_6 = var_14
            
            if (ecx_6 == 0)
                ecx_6 = &data_83f3d3
            
            int32_t var_30_3 = arg2[0xc]
            float var_1c = fconvert.s(sub_4cb0b0(ecx_6) * fconvert.t(arg2[0xe]))
            long double x87_r6_2 = fconvert.t(0.5)
            int32_t var_8_3 = 0xffffffff
            float var_1c_1 = fconvert.s(fconvert.t(arg2[6]) * x87_r6_2 + fconvert.t(arg2[4])
                + fconvert.t(arg2[8]) - x87_r6_2 * fconvert.t(fconvert.s(x87_r7_5))
                + fconvert.t(var_1c))
            sub_4c43d0(&var_14)
            fsbase->NtTib.ExceptionList = ExceptionList
            return fconvert.t(var_1c_1)
    
    sub_4c5870("Halt", &data_83f3d3, "UITextBox.cpp", 0x226, "UITextBox::GetCharacterX")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
