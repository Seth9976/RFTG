// 函数名称: sub_40c520
// 虚拟地址: 0x40c520
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_40c520(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69308e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ecx = data_307c1c0
    data_27e7a68 = arg1
    int32_t eax_3
    int80_t st0
    st0, eax_3 = sub_4f6f00(ecx)
    *(arg1 + 0x38) = eax_3
    *(sub_4fc3d0(&data_be1cb8, eax_3) + 0x2c) = sub_40bee0
    
    if ((data_31658f8 & 1) == 0)
        data_31658f8.d |= 1
        int32_t var_8_1 = 0
        data_31658f4 = sub_4f5220(data_307c1c0, "tblFriends")
        int32_t var_8_2 = 0xffffffff
    
    int128_t* eax_8 = sub_4f6e90(data_31658f4, sub_4fc3d0(&data_be1cb8, *(arg1 + 0x38)), &data_83f3d3)
    int32_t* ecx_1 = data_307c1b8
    *(eax_8 + 0x11c) = sub_40c220
    int32_t eax_9
    int80_t st0_1
    st0_1, eax_9 = sub_4f6f00(ecx_1)
    *(arg1 + 0x4c) = eax_9
    *(sub_4fc3d0(&data_be1cb8, eax_9) + 0x2c) = sub_40c400
    sub_40c060(arg1)
    sub_4c4590(&data_83f3d3)
    int32_t eax_11
    int80_t st0_3
    st0_3, eax_11 = sub_4f6f00(data_307c1bc)
    *(arg1 + 0xb4) = eax_11
    void* eax_12 = sub_4fc3d0(&data_be1cb8, eax_11)
    int32_t* ecx_3 = data_307c4f8
    *(eax_12 + 0x2c) = sub_40c330
    int32_t eax_13
    int80_t result
    result, eax_13 = sub_4f6f00(ecx_3)
    *(arg1 + 0x14) = eax_13
    void* esi_5 = arg1 + 0x198
    int32_t i_3 = 4
    int32_t i
    
    do
        int32_t* ecx_4 = data_307c190
        *esi_5 = ecx_4
        *(esi_5 + 4) = sub_4f5220(ecx_4, "btn_expansionPromoUnowned")
        esi_5 += 0x1c
        i = i_3
        i_3 -= 1
    while (i != 1)
    data_307c16c
    sub_505790(arg1 + 0xb8, 0x848a88, 0xd)
    int32_t i_1 = 0
    char const* const var_20 = "bgPlayer"
    char const* const var_18 = "btn_AIdifficultyEasy"
    
    do
        data_307c170
        int32_t var_1c_1 = i_1 + 4
        int32_t i_2 = i_1
        sub_505790(arg1 + 0xb8, &i_2, 2)
        i_1 += 1
    while (i_1 s< 4)
    
    *(arg1 + 0x22d) = 1
    *(arg1 + 0x249) = 1
    *(arg1 + 0x265) = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
