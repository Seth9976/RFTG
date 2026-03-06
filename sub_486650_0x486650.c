// 函数名称: sub_486650
// 虚拟地址: 0x486650
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_486650(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6906c2
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = data_307ca58
    
    if ((data_31651fc & 1) == 0)
        data_31651fc.d |= 1
        int32_t var_8_1 = 0
        data_31651f8 = sub_4f5220(esi, "btnBack")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_31651fc & 2) == 0)
        data_31651fc.d |= 2
        int32_t var_8_3 = 1
        data_31651f4 = sub_4f5220(esi, "btnQuickplay")
        int32_t var_8_4 = 0xffffffff
    
    if ((data_31651fc & 4) == 0)
        data_31651fc.d |= 4
        int32_t var_8_5 = 2
        data_31651f0 = sub_4f5220(esi, "btnCustom")
        int32_t var_8_6 = 0xffffffff
    
    if ((data_31651fc & 8) == 0)
        data_31651fc.d |= 8
        int32_t var_8_7 = 3
        data_31651ec = sub_4f5220(esi, "btnYourPrev")
        int32_t var_8_8 = 0xffffffff
    
    if ((data_31651fc & 0x10) == 0)
        data_31651fc.d |= 0x10
        int32_t var_8_9 = 4
        data_31651e8 = sub_4f5220(esi, "btnYourNext")
        int32_t var_8_10 = 0xffffffff
    
    if ((data_31651fc & 0x20) == 0)
        data_31651fc.d |= 0x20
        int32_t var_8_11 = 5
        data_31651e4 = sub_4f5220(esi, "btnOpenPrev")
        int32_t var_8_12 = 0xffffffff
    
    if ((data_31651fc & 0x40) == 0)
        data_31651fc.d |= 0x40
        int32_t var_8_13 = 6
        data_31651e0 = sub_4f5220(esi, "btnOpenNext")
        int32_t var_8_14 = 0xffffffff
    
    if (arg1 == data_31651e8)
        data_307d9d0 += 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (arg1 == data_31651ec)
        data_307d9d0 -= 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (arg1 == data_31651e0)
        data_307d9cc += 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (arg1 == data_31651e4)
        data_307d9cc -= 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    if (arg1 == data_31651f8)
        sub_402180()
        int32_t eax_15 = data_307c76c
        data_30d7278 = 0
        data_30d6f38 = eax_15
    else
        void* eax_16
        
        if (arg1 == data_31651f4)
            data_307cd0c = 1
            data_307d080 = 1
            data_307d084 = 0
            data_307d088 = 0
            data_307d06d = 1
            data_307d051 = 0
            char* i = &data_307cdce
            
            do
                *i = 0
                i = &i[0x1c]
            while (i s< &data_307d088:2)
            
            eax_16 = sub_40c7a0(&data_307cd0c)
            *(eax_16 + 0x50) = 1
            *(eax_16 + 0x5c) = 1
            data_307cdea = 1
        label_486940:
            data_307cdce = 1
            sub_40c8b0(eax_16)
            data_30d6f38 = data_307c16c
        else if (arg1 == data_31651f0)
            data_307cd0c = 1
            data_307d080 = 2
            data_307d084 = 0
            data_307d088 = 0
            data_307d06d = 1
            data_307d051 = 0
            char* i_1 = &data_307cdce
            
            do
                *i_1 = 0
                i_1 = &i_1[0x1c]
            while (i_1 s< &data_307d088:2)
            
            eax_16 = sub_40c7a0(&data_307cd0c)
            *(eax_16 + 0x50) = 1
            goto label_486940
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
