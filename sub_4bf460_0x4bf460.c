// 函数名称: sub_4bf460
// 虚拟地址: 0x4bf460
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4bf460(void* arg1, char* arg2, char* arg3, char* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69044a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_31651a0 & 1) == 0)
        data_31651a0.d |= 1
        int32_t var_8_1 = 0
        data_316519c = sub_4f5220(data_307c740, "txtTitleCol0")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_31651a0 & 2) == 0)
        data_31651a0.d |= 2
        int32_t var_8_3 = 1
        data_3165198 = sub_4f5220(data_307c740, "txtTitleCol1")
        int32_t var_8_4 = 0xffffffff
    
    if ((data_31651a0 & 4) == 0)
        data_31651a0.d |= 4
        int32_t var_8_5 = 2
        data_3165194 = sub_4f5220(data_307c740, "txtTitleCol2")
        int32_t var_8_6 = 0xffffffff
    
    int32_t ebx = data_316519c
    char* const eax_18
    int128_t* esi_8
    
    if (*arg3 != 0)
        int32_t esi_9 = *(arg1 + 0x18)
        
        if (*arg4 != 0)
            int128_t* eax_31 = sub_4f6e90(ebx, sub_4fc3d0(&data_be1cb8, esi_9), &data_83f3d3)
            *(eax_31 + 0x64) = *eax_31 + 1
            sub_4c4590(arg4)
            int32_t ebx_10 = data_3165198
            *(eax_31 + 0x151) = 1
            int128_t* eax_36 =
                sub_4f6e90(ebx_10, sub_4fc3d0(&data_be1cb8, *(arg1 + 0x18)), &data_83f3d3)
            *(eax_36 + 0x64) = *eax_36 + 1
            sub_4c4590(arg3)
            int32_t ebx_12 = data_3165194
            *(eax_36 + 0x151) = 1
            esi_8 = sub_4f6e90(ebx_12, sub_4fc3d0(&data_be1cb8, *(arg1 + 0x18)), &data_83f3d3)
            eax_18 = arg2
        else
            int128_t* eax_20 = sub_4f6e90(ebx, sub_4fc3d0(&data_be1cb8, esi_9), &data_83f3d3)
            *(eax_20 + 0x64) = *eax_20 + 1
            sub_4c4590(arg3)
            int32_t ebx_6 = data_3165198
            *(eax_20 + 0x151) = 1
            int128_t* eax_25 = sub_4f6e90(ebx_6, sub_4fc3d0(&data_be1cb8, *(arg1 + 0x18)), &data_83f3d3)
            *(eax_25 + 0x64) = *eax_25 + 1
            sub_4c4590(arg2)
            int32_t ebx_8 = data_3165194
            *(eax_25 + 0x151) = 1
            esi_8 = sub_4f6e90(ebx_8, sub_4fc3d0(&data_be1cb8, *(arg1 + 0x18)), &data_83f3d3)
            eax_18 = &data_83f3d3
        
        *(esi_8 + 0x64) = *esi_8 + 1
    else
        int128_t* eax_9 = sub_4f6e90(ebx, sub_4fc3d0(&data_be1cb8, *(arg1 + 0x18)), &data_83f3d3)
        *(eax_9 + 0x64) = *eax_9 + 1
        sub_4c4590(arg2)
        int32_t ebx_2 = data_3165198
        *(eax_9 + 0x151) = 1
        int128_t* eax_13 = sub_4f6e90(ebx_2, sub_4fc3d0(&data_be1cb8, *(arg1 + 0x18)), &data_83f3d3)
        *(eax_13 + 0x64) = *eax_13 + 1
        sub_4c4590(&data_83f3d3)
        int32_t ebx_4 = data_3165194
        *(eax_13 + 0x151) = 1
        esi_8 = sub_4f6e90(ebx_4, sub_4fc3d0(&data_be1cb8, *(arg1 + 0x18)), &data_83f3d3)
        *(esi_8 + 0x64) = *esi_8 + 1
        eax_18 = &data_83f3d3
    
    int32_t* result = sub_4c4590(eax_18)
    *(esi_8 + 0x151) = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
