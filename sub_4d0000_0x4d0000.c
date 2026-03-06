// 函数名称: sub_4d0000
// 虚拟地址: 0x4d0000
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t** __convention("regparm")sub_4d0000(int32_t arg1, int32_t arg2, uint8_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d880
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_c0 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void var_6c
    int32_t** eax_3 = zip_open(arg3, 1, &var_6c)
    int32_t edi = 0
    
    if (eax_3 == 0)
        eax_3.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_3
    
    char var_15 = 1
    int32_t eax_4
    int32_t edx
    eax_4, edx = zip_get_num_entries(eax_3, 0)
    char* eax_5 = std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >()
    char* var_3c = eax_5
    char* ebx_1 = eax_5
    char i
    
    do
        i = *eax_5
        eax_5 = &eax_5[1]
    while (i != 0)
    void* eax_6 = eax_5 - &eax_5[1]
    int32_t var_30 = 0
    
    if (edx s>= 0 && (edx s> 0 || eax_4 u> 0))
        while (true)
            void var_b0
            char* var_a8
            
            if (zip_stat_index(eax_3, var_30, edi, 0, &var_b0) s>= 0
                    && sub_5a7934(ebx_1, var_a8, eax_6) == 0)
                char* eax_11 = sub_5a8f10(var_a8, 0x2e)
                
                if (eax_11 != 0 && sub_5a9697(eax_11, ".xbin") == 0)
                    char* eax_13 = var_a8
                    char i_1
                    
                    do
                        i_1 = *eax_13
                        eax_13 = &eax_13[1]
                    while (i_1 != 0)
                    char* var_1c
                    sub_4c4380(eax_6 + var_a8, var_a8, &var_1c)
                    int32_t var_8_1 = 0
                    char* eax_18 = var_1c
                    
                    if (eax_18 == 0)
                        eax_18 = &data_83f3d3
                    
                    char* eax_19 = sub_508bc0(eax_18)
                    
                    if (eax_19 == 0)
                        var_15 = 0
                        int32_t var_8_3 = 0xffffffff
                        sub_4c43d0(&var_1c)
                        break
                    
                    char* const var_68 = &data_83f3d3
                    var_8_1.b = 1
                    sub_4c4510(&var_1c)
                    char* var_64_1 = eax_19
                    int32_t var_50_1 = 0
                    int32_t var_4c_1 = 0
                    int32_t var_48_1 = 0
                    int32_t var_44_1 = 0
                    int32_t var_60_1 = 0
                    int32_t var_5c_1 = 0
                    int32_t var_58_1 = 0
                    sub_4d0640(&var_68)
                    var_8_1.b = 0
                    sub_505900(&var_68)
                    int32_t var_8_2 = 0xffffffff
                    sub_4c43d0(&var_1c)
                    int32_t temp1_1 = var_30
                    var_30 += 1
                    edi = adc.d(edi, 0, temp1_1 u>= 0xffffffff)
                    
                    if (edi s>= edx)
                        if (edi s> edx)
                            break
                        
                        if (var_30 u>= eax_4)
                            break
                    
                    ebx_1 = var_3c
                    continue
            
            var_15 = 0
            break
    
    if (zip_close(eax_3) == 0xffffffff)
        var_15 = 0
    
    int32_t eax_22
    eax_22.b = var_15
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_22
}
