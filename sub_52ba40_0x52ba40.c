// 函数名称: sub_52ba40
// 虚拟地址: 0x52ba40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_52ba40(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$___std_fs_get_file_id@8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_be1ef4 != 0)
        data_315f6a8
        sub_52b650()
        void* eax_4 = sub_52b9d0(data_be1ef4)
        data_315f6a8 = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_4
    
    data_be1ef4 = arg2
    int32_t ecx
    int32_t* eax_5 = sub_530500(ecx, arg2)
    
    if (eax_5[0x530] == 3 && eax_5[0x560].b != 0)
        if (*(eax_5 + 0x14b1) != 0)
            sub_4c5870("el.textBox.mHasFocus == false", &data_83f3d3, "UI2.cpp", 0x1368, "UI2SetFocus")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        float eax_7
        int32_t edx_1
        eax_7, edx_1 = sub_40af40(&eax_5[2])
        eax_5[0x51c] = eax_7
        eax_5[0x51d] = edx_1
        void* ebx_1 = &eax_5[0x518]
        long double x87_r7_4 = fconvert.t(eax_5[5]) - fconvert.t(eax_5[3])
        eax_5[0x51e] = fconvert.s(fconvert.t(eax_5[4]) - fconvert.t(eax_5[2]))
        char* var_14 = fconvert.s(x87_r7_4)
        long double x87_r7_5 = fconvert.t(eax_5[9])
        eax_5[0x51f] = var_14
        var_14 = fconvert.s(x87_r7_5)
        long double x87_r6_1 = fconvert.t(var_14)
        float var_20_1 = fconvert.s(fconvert.t(eax_5[0x55a]) * x87_r6_1)
        long double x87_r7_9 = x87_r6_1 * fconvert.t(eax_5[0x55b])
        eax_5[0x524] = eax_5[0x559]
        var_14 = fconvert.s(fconvert.t(eax_5[0x53d]))
        long double x87_r7_11 = fconvert.t(var_14)
        eax_5[0x520] = fconvert.s(x87_r7_11 * fconvert.t(var_20_1))
        var_14 = fconvert.s(x87_r7_11 * fconvert.t(fconvert.s(x87_r7_9)))
        eax_5[0x521] = var_14
        int32_t edx_4 = sub_4c4510(&eax_5[0x558])
        eax_5[0x51b] = 0
        char* eax_10 = *ebx_1
        int32_t eax_11
        
        if (eax_10 == 0 || *eax_10 == 0)
            eax_11 = 0
        else
            eax_11 = *(sub_4c4060(ebx_1) + 8)
        
        eax_5[0x519] = eax_11
        *(eax_5 + 0x14b1) = 1
        int32_t var_8_1 = 0
        char** var_34_3 = &var_14
        sub_528650(eax_5, 0xffffffff, sub_4c4330("text-active", edx_4, &var_14))
        int32_t var_8_2 = 0xffffffff
        sub_4c43d0(&var_14)
        eax_5 = arg3
        int80_t st0_1
        
        if (eax_5 != 0)
            st0_1, eax_5 = sub_506480(ebx_1, 1, eax_5)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5
}
