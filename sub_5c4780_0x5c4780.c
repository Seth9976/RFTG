// 函数名称: sub_5c4780
// 虚拟地址: 0x5c4780
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5c4780(int32_t* arg1, int32_t* arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_14_4
    int32_t var_14_4
    void* ecx_11
    int32_t* edx_21
    
    if (arg5 u> 0xf)
        int32_t __saved_ebx_11 = 0
        var_14_4 = 0x1c
    else
        switch (arg5)
            case 0
                void* eax_7 = arg1[6]
                *(eax_7 + 0x28) = 0
                *(eax_7 + 0x2c) = 0
                return 0
            case 1
                if (arg4 u< 0x7fffffff || (arg4 u<= 0x7fffffff && arg3 u<= 0xffffffff))
                    return sub_5c43f0(arg1[6], arg2, arg3, arg4)
                
                zip_error_set(arg1, 0x12, 0)
                return 0xffffffff
            case 2
                return 0
            case 3
                if (arg4 u<= 0 && (arg4 u< 0 || arg3 u< 0x40))
                    zip_error_set(arg1, 0x12, 0)
                    return 0xffffffff
                
                zip_stat_init(arg2)
                arg2[0xa] = arg1[4]
                arg2[0xb] = arg1[5]
                void* eax_25 = arg1[6]
                int32_t edx_18 = *(eax_25 + 0x20)
                arg2[6] = edx_18
                int32_t eax_26 = *(eax_25 + 0x24)
                arg2[7] = eax_26
                arg2[9] = eax_26
                arg2[0xd] = 0
                arg2[1] = 0
                arg2[8] = edx_18
                *arg2 = 0xdc
                return 0x40
            case 4
                return zip_error_to_data(arg1, arg2, arg3, arg4)
            case 5
                sub_5c4280(arg1[6])
                sub_5c4280(arg1[7])
                __free_base(arg1)
                return 0
            case 6
                int32_t __saved_ebx_5 = arg4
                int32_t* var_14_2 = arg3
                int32_t eax_19
                int32_t edx_13
                edx_13:eax_19 = sx.q(sub_5c4500(arg1, arg1[6], arg3, arg4, arg2))
                return eax_19
            case 7
                edx_21 = arg1
                ecx_11 = edx_21[6]
            label_5c49cc:
                int32_t eax_29 = *(ecx_11 + 0x28)
                int32_t ecx_12 = *(ecx_11 + 0x2c)
                
                if (ecx_12 u< 0x7fffffff || (ecx_12 u<= 0x7fffffff && eax_29 u<= 0xffffffff))
                    return eax_29
                
                zip_error_set(edx_21, 0x1e, 0x84)
                return 0xffffffff
            case 8
                int32_t* eax_1 = sub_5c4370(0x10000, 0)
                arg1[7] = eax_1
                
                if (eax_1 != 0)
                    return 0
                
                zip_error_set(arg1, 0xe, eax_1)
                return 0xffffffff
            case 9
                sub_5c4280(arg1[6])
                arg1[6] = arg1[7]
                arg1[7] = 0
                return 0
            case 0xa
                sub_5c4280(arg1[7])
                arg1[7] = 0
                return 0
            case 0xb
                if (arg4 u< 0x7fffffff)
                    return sub_5c4550(arg1[7], arg2, arg3, arg4, arg1)
                
                if (arg4 u<= 0x7fffffff && arg3 u<= 0xffffffff)
                    return sub_5c4550(arg1[7], arg2, arg3, arg4, arg1)
                
                int32_t __saved_ebx_9 = 0
                var_14_4 = 0x12
            case 0xc
                int32_t __saved_ebx_6 = arg4
                int32_t* var_14_3 = arg3
                int32_t eax_23
                int32_t edx_15
                edx_15:eax_23 = sx.q(sub_5c4500(arg1, arg1[7], arg3, arg4, arg2))
                return eax_23
            case 0xd
                edx_21 = arg1
                ecx_11 = edx_21[7]
                goto label_5c49cc
            case 0xe
                int32_t __saved_ebx_8 = 0xffffffff
                int32_t var_44
                __builtin_memcpy(&var_44, 
                    "\x02\x00\x00\x00\x03\x00\x00\x00\x04\x00\x00\x00\x05\x00\x00\x00\x06\x00\x00\x00\x07\x"
                "00\x00\x00\x08\x00\x00\x00\x09\x00\x00\x00\x0f\x00\x00\x00\x0a\x00\x00\x00\x0c\x00\x00"
                "00\x0d\x00\x00\x00\x0b\x00\x00\x00", 
                    0x34)
                return zip_source_make_command_bitmap(0, 1)
            case 0xf
                int32_t* eax_12 = sub_5c42e0(0, 0, 0, 0)
                
                if (eax_12 == 0)
                    zip_error_set(arg1, 0xe, eax_12)
                    return 0xffffffff
                
                sub_5c4280(arg1[6])
                arg1[6] = eax_12
                return 0
    zip_error_set(arg1, var_14_4, 0)
    return 0xffffffff
}
