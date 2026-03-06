// 函数名称: sub_4bb100
// 虚拟地址: 0x4bb100
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __fastcallsub_4bb100(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?do_put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MBE?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AAVios_base@2@_W_N@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_ac = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ecx = data_307c740
    data_27e7aa4 = arg1
    int32_t eax_3
    int32_t ecx_1
    int80_t st0
    st0, eax_3, ecx_1 = sub_4f6f00(ecx)
    void* esi = data_27e7aa4
    ecx_1.b = 0
    *(arg1 + 0x18) = eax_3
    sub_4ba4f0(ecx_1, esi)
    int32_t eax_4
    int80_t st0_1
    st0_1, eax_4 = sub_4f6f00(data_307c744)
    data_27e7aa4
    *(arg1 + 0x34) = eax_4
    sub_4ba5d0(0)
    *(sub_4fc3d0(&data_be1cb8, *(arg1 + 0x34)) + 0x2c) = sub_4bad40
    void* eax_6 = sub_4fc3d0(&data_be1cb8, *(arg1 + 0x18))
    bool cond:0 = (data_316697c & 1) != 0
    *(eax_6 + 0x2c) = sub_4bae20
    
    if (not(cond:0))
        data_316697c.d |= 1
        int32_t var_8_1 = 0
        data_3166978 = sub_4f5220(data_307c740, "tblPages")
        int32_t var_8_2 = 0xffffffff
    
    int128_t* eax_10 = sub_4f6e90(data_3166978, sub_4fc3d0(&data_be1cb8, *(arg1 + 0x18)), &data_83f3d3)
    bool cond:1 = (data_316697c & 2) != 0
    *(eax_10 + 0x11c) = sub_4bac90
    
    if (not(cond:1))
        data_316697c.d |= 2
        int32_t var_8_3 = 1
        data_3166974 = sub_4f5220(data_307c740, "tblFilters")
        int32_t var_8_4 = 0xffffffff
    
    *(sub_4f6e90(data_3166974, sub_4fc3d0(&data_be1cb8, *(arg1 + 0x18)), &data_83f3d3) + 0x11c) =
        sub_4bacb0
    
    if ((data_316697c & 4) == 0)
        data_316697c.d |= 4
        int32_t var_8_5 = 2
        data_3166970 = sub_4f5220(data_307c740, "tblStatsFull")
        int32_t var_8_6 = 0xffffffff
    
    *(sub_4f6e90(data_3166970, sub_4fc3d0(&data_be1cb8, *(arg1 + 0x18)), &data_83f3d3) + 0x11c) =
        sub_4bac00
    
    for (int32_t i = 0; i s< 9; i += 1)
        if (i != 8)
            int32_t* ecx_4 = data_307c628
            *(arg1 + i * 0x1c + 0x3ec) = ecx_4
            *(arg1 + (i + 0x24) * 0x1c) = sub_4f5220(ecx_4, "btnFrame")
        else
            int32_t* eax_17 = data_307c624
            *(arg1 + 0x4cc) = eax_17
            *(arg1 + 0x4d0) = sub_4f5220(eax_17, "BtnBack")
    
    for (int32_t i_1 = 0; i_1 s< 9; i_1 += 1)
        if (i_1 != 8)
            int32_t* ecx_6 = data_307c630
            char const* const var_b0_1
            void* eax_23
            
            if (i_1 s> 3)
                eax_23 = arg1 + i_1 * 0x1c + 0x2f0
                var_b0_1 = "btnTrash"
            else
                eax_23 = arg1 + i_1 * 0x1c + 0x2f0
                var_b0_1 = "ProfileTab"
            
            *eax_23 = ecx_6
            *(arg1 + (i_1 + 0x1b) * 0x1c) = sub_4f5220(ecx_6, var_b0_1)
        else
            int32_t* eax_21 = data_307c62c
            *(arg1 + 0x3d0) = eax_21
            *(arg1 + 0x3d4) = sub_4f5220(eax_21, "BtnBack")
    
    int32_t* esi_9 = data_307c620
    sub_505790(arg1 + 0x194, 0x879728, 9)
    *(arg1 + 0x1f1) = 0
    
    if ((data_316697c & 8) == 0)
        data_316697c.d |= 8
        int32_t var_8_7 = 3
        data_316696c = sub_4f5220(esi_9, "Name")
        int32_t var_8_8 = 0xffffffff
    
    void var_9c
    int32_t eax_28
    int32_t edx_10
    int80_t result
    result, eax_28, edx_10 = sub_40a930(&var_9c)
    int32_t eax_29 = data_316696c
    void var_54
    __builtin_memcpy(&var_54, eax_28, 0x40)
    sub_4bb000(eax_29, edx_10, esi_9, arg1 + 0x290, &var_54)
    sub_4c4590(data_27e7a54)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
