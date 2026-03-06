// 函数名称: sub_435a40
// 虚拟地址: 0x435a40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_435a40(int32_t arg1, char* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?_RunAndWait@_StructuredTaskCollection@details@Concurrency@@QAG?AW4_TaskCollectionStatus@23@PAV_UnrealizedChore@23@@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_80 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_13
    
    if (arg3 != 0)
        data_3092a04
        
        if ((data_3166024 & 8) == 0)
            data_3166024.d |= 8
            int32_t var_8_7 = 3
            char const* const var_84_4 = "players"
            data_3166014 = sub_510710(data_307ca3c, arg2)
            int32_t var_8_8 = 0xffffffff
        
        int32_t eax_16 = sub_50eb00(data_3166014, 0)
        int32_t eax_19 = sub_487cf0(arg3, sx.d(*(sub_418a10() + 0x458)))
        
        if ((data_3166024 & 0x10) == 0)
            data_3166024.d |= 0x10
            int32_t var_8_9 = 4
            data_3166010 = sub_4f5220(data_307ca64, "tbl_opponentIcons")
            int32_t var_8_10 = 0xffffffff
        
        if ((data_3166024 & 0x20) == 0)
            data_3166024.d |= 0x20
            int32_t var_8_11 = 5
            data_316600c = sub_4f5220(data_307c5cc, "ico_vpChit")
            int32_t var_8_12 = 0xffffffff
        
        float eax_23
        int32_t edx_7
        eax_23, edx_7 = sub_418560(data_307c78c)
        float var_28 = eax_23
        int32_t var_24_1 = edx_7
        int32_t ebx_2 = 4
        int32_t eax_24
        
        if (arg3 != 0xffffffff)
            eax_24 = sub_46b360(arg3)
        
        int32_t eax_26
        
        if (arg3 != 0xffffffff && eax_24 != 0xffffffff)
            eax_26 = *sub_46b2b0(eax_24)
        else
            eax_26 = 0xffffffff
        
        if (*((eax_26 << 2) + &data_c020f8) s> 0)
            ebx_2 = 3
        
        int32_t edx_8 = data_3166010
        int32_t var_2c_1 = 0
        int32_t ecx_5 = data_316600c
        int32_t var_30 = ebx_2
        float var_70[0x8]
        int80_t st0_1
        st0_1, eax_13 =
            sub_50fd20(eax_19, eax_16, ecx_5, &var_70, eax_19, edx_8, &var_30, &var_28, nullptr, 0)
    else
        data_3092a04
        
        if ((data_3166024 & 1) == 0)
            data_3166024.d |= 1
            int32_t var_8_1 = arg3
            char const* const var_84_1 = "players"
            data_3166020 = sub_510710(data_307ca3c, arg2)
            int32_t var_8_2 = 0xffffffff
        
        int32_t eax_5
        char* edx_1
        eax_5, edx_1 = sub_50eb00(data_3166020, 0)
        
        if ((data_3166024 & 2) == 0)
            data_3166024.d |= 2
            int32_t var_8_3 = 1
            char const* const var_84_2 = "ui_console"
            data_316601c = sub_510710(data_307ca78, edx_1)
            int32_t var_8_4 = 0xffffffff
        
        if ((data_3166024 & 4) == 0)
            data_3166024.d |= 4
            int32_t var_8_5 = 2
            data_3166018 = sub_4f5220(data_307ca40, "img_vp_chits")
            int32_t var_8_6 = 0xffffffff
        
        float eax_11
        int32_t edx_2
        eax_11, edx_2 = sub_418560(data_307c78c)
        int32_t ecx_1 = data_3166018
        int32_t var_1c = edx_2
        int32_t edx_3 = data_316601c
        float var_20 = eax_11
        float var_50[0x8]
        int80_t st0
        st0, eax_13 = sub_50fbc0(&var_50, eax_5, &var_20, &var_50, edx_3, ecx_1)
    
    __builtin_memcpy(arg4, eax_13, 0x20)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg4
}
