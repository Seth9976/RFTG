// 函数名称: sub_4876c0
// 虚拟地址: 0x4876c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4876c0(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6959a2
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = data_307ca6c
    char* edx
    
    if ((data_3165f94 & 1) == 0)
        data_3165f94.d |= 1
        int32_t var_8_1 = 0
        int32_t eax_3
        eax_3, edx = sub_4f5220(esi, "BtnOptions")
        data_3165f90 = eax_3
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3165f94 & 2) == 0)
        data_3165f94.d |= 2
        int32_t var_8_3 = 1
        int32_t eax_4
        eax_4, edx = sub_4f5220(esi, "BtnLog")
        data_3165f8c = eax_4
        int32_t var_8_4 = 0xffffffff
    
    if ((data_3165f94 & 4) == 0)
        data_3165f94.d |= 4
        int32_t var_8_5 = 2
        int32_t eax_5
        eax_5, edx = sub_4f5220(esi, "BtnExit")
        data_3165f88 = eax_5
        int32_t var_8_6 = 0xffffffff
    
    if ((data_3165f94 & 8) == 0)
        data_3165f94.d |= 8
        int32_t var_8_7 = 3
        int32_t eax_6
        eax_6, edx = sub_4f5220(esi, "BtnResume")
        data_3165f84 = eax_6
        int32_t var_8_8 = 0xffffffff
    
    if ((data_3165f94 & 0x10) == 0)
        data_3165f94.d |= 0x10
        int32_t var_8_9 = 4
        int32_t eax_7
        eax_7, edx = sub_4f5220(esi, "BtnScreen")
        data_3165f80 = eax_7
        int32_t var_8_10 = 0xffffffff
    
    if ((data_3165f94 & 0x20) == 0)
        data_3165f94.d |= 0x20
        int32_t var_8_11 = 5
        int32_t eax_8
        eax_8, edx = sub_4f5220(esi, "BtnRules")
        data_3165f7c = eax_8
        int32_t var_8_12 = 0xffffffff
    
    if ((data_3165f94 & 0x40) == 0)
        data_3165f94.d |= 0x40
        int32_t var_8_13 = 6
        int32_t eax_9
        eax_9, edx = sub_4f5220(esi, "BtnForfeit")
        data_3165f78 = eax_9
        int32_t var_8_14 = 0xffffffff
    
    int32_t eax_11
    
    if (arg1 == data_3165f90)
        eax_11 = data_307c588
        data_30d6f40 = 0
        data_30d6f38 = eax_11
    else if (arg1 != data_3165f8c)
        if (arg1 == data_3165f88)
            if ((data_3165f94 & 0x80) == 0)
                data_3165f94.d |= 0x80
                int32_t var_8_15 = 7
                char const* const var_24_1 = "players"
                data_3165f74 = sub_510710(data_307ca3c, edx)
                int32_t var_8_16 = 0xffffffff
            
            data_3092a04
            int32_t eax_16
            int32_t ecx_3
            int32_t edx_3
            eax_16, ecx_3, edx_3 = sub_50eb00(data_3165f74, 0)
            sub_407670()
            sub_41a2c0(0, edx_3, ecx_3, 1)
            sub_4075c0()
            void* ecx_4 = data_27e7a40
            data_30d6f40 = 0
            *(ecx_4 + 0x528) = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return 0
        
        if (arg1 == data_3165f84)
            data_30d6f40 = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return 0
        
        if (arg1 != data_3165f80)
            if (arg1 == data_3165f7c)
                int32_t edx_4 = data_307c69c
                data_30d6f40 = 0
                data_30d6f38 = edx_4
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0
            
            if (arg1 == data_3165f78)
                eax_11 = data_307c1a0
                data_307db18 = 0
                data_30d6f38 = eax_11
    else
        data_30d6f40 = 0
        *(*(data_27e7a40 + 0x548) + 0x43350) = sx.d(*(sub_418a10() + 0x1ec2))
        data_30d6f38 = data_307c500
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
