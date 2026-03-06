// 函数名称: ___std_atomic_wait_indirect@24
// 虚拟地址: 0x41d740
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t___std_atomic_wait_indirect@24(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_696ec8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3166370 & 1) == 0)
        data_3166370.d |= 1
        int32_t var_8_1 = 0
        data_316636c = sub_4f5220(data_307c5a4, "btn_phaseButtonSelected")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3166370 & 2) == 0)
        data_3166370.d |= 2
        int32_t var_8_3 = 1
        data_3166368 = sub_4f5220(data_307c5a4, "btn_phaseButton")
        int32_t var_8_4 = 0xffffffff
    
    if ((data_3166370 & 4) == 0)
        data_3166370.d |= 4
        int32_t var_8_5 = 2
        data_3166364 = sub_4f5220(data_307c5a4, "btn_PrestigeOff")
        int32_t var_8_6 = 0xffffffff
    
    if ((data_3166370 & 8) == 0)
        data_3166370.d |= 8
        int32_t var_8_7 = 3
        data_3166360 = sub_4f5220(data_307c5a4, "img_PrestigeOn")
        int32_t var_8_8 = 0xffffffff
    
    int32_t* arg_8
    int32_t eax_9 = arg_8[1]
    int32_t edx_3 = data_27e7fd0
    int32_t esi = *(*(data_27e7a40 + 0x548) + (eax_9 << 2) + 0x188)
    
    if (*(edx_3 + 0x27) != 0)
        esi = eax_9
    
    if (*arg2 == 1)
        sub_41d430(sub_41d560())
        fsbase->NtTib.ExceptionList = ExceptionList
        return 1
    
    if (arg1 == data_316636c || arg1 == data_3166368)
        if (sub_419400(&arg_8) == 0)
        label_41d971:
            int32_t var_1c = 0
            int32_t var_18 = 0
            int32_t var_14 = 0
            var_1c = 1
            int32_t var_14_1 = sub_41cc90(esi)
            char eax_27
            int32_t edx_4
            eax_27, edx_4 = sub_419400(&arg_8)
            
            if (eax_27 != 0)
                int32_t eax_29 = *arg_8
                
                if (eax_29 == 0x18 || eax_29 == 0x1b || eax_29 == 0x19 || eax_29 == 0x1a
                        || eax_29 == 0x45 || eax_29 == 0x46)
                    edx_4 = sub_419340()
            
            void* eax_30 = data_27e7a40
            sub_472e60(*(eax_30 + 0x74), edx_4, &var_1c, *(eax_30 + 0x548))
            fsbase->NtTib.ExceptionList = ExceptionList
            return 1
        
        switch (*arg_8 - 0x18)
            case 0
                if (esi == 5)
                    goto label_41d971
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0
            case 1
                if (esi == 3)
                    goto label_41d971
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0
            case 2
                if (esi == 9)
                    goto label_41d971
            case 3
                if (esi == 1)
                    goto label_41d971
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0
            case 0x2d
                if (esi == 7)
                    goto label_41d971
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0
            case 0x2e, 0x2f
                goto label_41d971
    else if (arg1 == data_3166364 || arg1 == data_3166360)
        sub_41cf80(sub_41cc90(esi), edx_3, *(data_27e7a40 + 0x74))
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
