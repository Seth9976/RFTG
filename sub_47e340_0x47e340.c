// 函数名称: sub_47e340
// 虚拟地址: 0x47e340
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_47e340(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6941ca
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int128_t* i_1
    int32_t eax_2 = __security_cookie ^ &i_1
    int32_t __saved_edi
    int32_t var_64 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165b10 & 1) == 0)
        data_3165b10.d |= 1
        int32_t var_c_1 = 0
        data_3165b0c = sub_4f5220(data_307c69c, "tblRulesItem")
        int32_t var_c_2 = 0xffffffff
    
    void* eax_7 = sub_4fc3d0(&data_be1cb8, arg1)
    int32_t edi = data_3165b0c
    *(eax_7 + 0x2c) = sub_47de10
    int128_t* i = sub_4f6e90(edi, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    *(i + 0x11c) = sub_47dd50
    bool cond:0 = data_307d8cc == 1
    int32_t var_38 = 0
    int32_t var_34 = 2
    int32_t var_30 = 3
    int32_t var_2c = 4
    
    if (not(cond:0))
        if ((data_3165b10 & 2) == 0)
            data_3165b10.d |= 2
            int32_t var_c_3 = 1
            data_3165b08 = sub_4f5220(data_307c6e8, "expIcon")
            int32_t var_c_4 = 0xffffffff
        
        if ((data_3165b10 & 4) == 0)
            data_3165b10.d |= 4
            int32_t var_c_5 = 2
            data_3165b04 = sub_4f5220(data_307c6e8, "expName")
            int32_t var_c_6 = 0xffffffff
        
        int32_t var_44_1 = 4
        int128_t* eax_12 = sub_4f6e90(data_3165b0c, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
        eax_12[0x12].d = *eax_12 + 1
        *(eax_12 + 0x124) = 1
        *(eax_12 + 0x128) = var_44_1
        *(eax_12 + 0x12c) = 1
        eax_12[0x13].d = var_44_1
        i_1 = nullptr
        int32_t var_40_1 = 0
        
        do
            int128_t* i_2 = i_1
            int32_t ebx_1 = data_3165b0c
            int32_t var_48 = var_40_1
            int128_t* i_4 = i_2
            void* eax_13 = sub_4fc3d0(&data_be1cb8, arg1)
            int128_t* eax_14 = sub_4f6e90(ebx_1, eax_13, &data_83f3d3)
            void* eax_17 = sub_4f7720(&var_48, ebx_1 * 0x118 + *sub_4f4890(*(eax_13 + 4)), eax_14)
            int128_t* i_3 = i_1
            int32_t ebx_4 = *(eax_17 + 0x434)
            void* eax_18 = sub_4b9560(i_3, (&var_38)[i_3])
            int32_t eax_19 = **(eax_18 + 0x18)
            int128_t* eax_21 = sub_4f6e90(data_3165b08, sub_4fc3d0(&data_be1cb8, ebx_4), &data_83f3d3)
            int32_t edi_7 = data_3165b04
            *(eax_21 + 0x94) = *eax_21 + 1
            *(eax_21 + 0x98) = eax_19
            char* ecx_8 = *(eax_18 + 0x1c)
            int128_t* eax_24 = sub_4f6e90(edi_7, sub_4fc3d0(&data_be1cb8, ebx_4), &data_83f3d3)
            *(eax_24 + 0x64) = *eax_24 + 1
            sub_4c4590(ecx_8)
            i = i_1 + 1
            *(eax_24 + 0x151) = 1
            i_1 = i
        while (i s< 4)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &i_1)
    return i
}
