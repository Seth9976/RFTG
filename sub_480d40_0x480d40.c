// 函数名称: sub_480d40
// 虚拟地址: 0x480d40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_480d40(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_699112
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_90 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool cond:0 = (data_31668e0 & 1) != 0
    int32_t eax_3 = data_307d0ac
    data_307d0ac = arg1
    
    if (not(cond:0))
        data_31668e0.d |= 1
        int32_t var_8_1 = 0
        data_31668dc = sub_4f5220(data_307c740, "rgnGraph")
        int32_t var_8_2 = 0xffffffff
    
    int128_t* eax_6 = sub_4f6e90(data_31668dc, sub_4fc3d0(&data_be1cb8, data_307d0ac), &data_83f3d3)
    *(eax_6 + 0x13c) = *eax_6 + 1
    eax_6[0x14].d = sub_4bfc40
    void* eax_7 = sub_4fc3d0(&data_be1cb8, data_307d0ac)
    bool cond:2 = (data_31668e0 & 2) != 0
    *(eax_7 + 0x2c) = sub_4bae20
    
    if (not(cond:2))
        data_31668e0.d |= 2
        int32_t var_8_3 = 1
        data_31668d8 = sub_4f5220(data_307c740, "tblPages")
        int32_t var_8_4 = 0xffffffff
    
    int128_t* eax_10 = sub_4f6e90(data_31668d8, sub_4fc3d0(&data_be1cb8, data_307d0ac), &data_83f3d3)
    bool cond:1 = (data_31668e0 & 4) != 0
    *(eax_10 + 0x11c) = sub_4bac90
    
    if (not(cond:1))
        data_31668e0.d |= 4
        int32_t var_8_5 = 2
        data_31668d4 = sub_4f5220(data_307c740, "tblFilters")
        int32_t var_8_6 = 0xffffffff
    
    *(sub_4f6e90(data_31668d4, sub_4fc3d0(&data_be1cb8, data_307d0ac), &data_83f3d3) + 0x11c) =
        sub_4bacb0
    
    if ((data_31668e0 & 8) == 0)
        data_31668e0.d |= 8
        int32_t var_8_7 = 3
        data_31668d0 = sub_4f5220(data_307c740, "tblStatsFull")
        int32_t var_8_8 = 0xffffffff
    
    *(sub_4f6e90(data_31668d0, sub_4fc3d0(&data_be1cb8, data_307d0ac), &data_83f3d3) + 0x11c) =
        sub_4bac00
    sub_4c27e0(&data_307d094)
    data_307d0ac = eax_3
    int32_t i
    int32_t ecx_4
    i, ecx_4 = sub_47bef0(&data_3092a08)
    data_30d6f08 = i
    int32_t i_1 = 0
    
    if (i s> 0)
        void* ebx_1 = &data_3092a08
        
        do
            if ((data_31668e0 & 0x10) == 0)
                data_31668e0.d |= 0x10
                int32_t var_8_9 = 4
                data_31668cc = sub_4f5220(data_307c740, "tblStatsFull")
                int32_t var_8_10 = 0xffffffff
            
            char eax_20 = sub_47c480(ecx_4, ebx_1)
            
            if ((data_31668e0 & 0x20) == 0)
                data_31668e0.d |= 0x20
                int32_t var_8_11 = 5
                char const* const var_94_1 = "players"
                data_31668c8 = sub_510710(data_307ca3c, ebx_1)
                int32_t var_8_12 = 0xffffffff
            
            data_3092a04
            int32_t eax_23
            char* edx_6
            eax_23, edx_6 = sub_50eb00(data_31668c8, 0)
            int32_t esi_9 = eax_23
            
            if ((data_31668e0 & 0x40) == 0)
                data_31668e0.d |= 0x40
                int32_t var_8_13 = 6
                char const* const var_94_2 = "dlgUISub"
                eax_23 = sub_510710(data_307ca78, edx_6)
                data_31668c4 = eax_23
                int32_t var_8_14 = 0xffffffff
            
            void var_80
            float var_58[0x10]
            sub_50d8d0(eax_23, esi_9, &var_58, data_31668c4, &var_80)
            unimplemented  {call 0x50d8d0}
            ecx_4 = sub_4bc5a0(arg1, data_31668cc, &var_58, 0x307d0b8, ebx_1 + 0x888c, eax_20)
            int16_t top = top - 2
            unimplemented  {call 0x4bc5a0}
            i = i_1 + 1
            ebx_1 += 0x88a0
            i_1 = i
        while (i s< data_30d6f08)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return i
}
