// 函数名称: sub_581ef0
// 虚拟地址: 0x581ef0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_581ef0(WPARAM arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    LRESULT eax_3 = SendMessageA(*(data_26a6554 + 0x18), 0x199, arg1, 0)
    
    if (eax_3 == 0xffffffff || eax_3 == 0)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0xffffffff
    
    if (*(eax_3 + 0x14) != 0x63)
        data_3160b80 = *eax_3
        data_3160b84 = *(eax_3 + 4)
        char* ecx_2 = *(eax_3 + 8)
        data_3160b88 = ecx_2
        char* edx_2 = *(eax_3 + 0xc)
        data_3160b8c = edx_2
        int32_t eax_5 = *(eax_3 + 0x14)
        data_3160b94 = eax_5
        uint32_t eax_20
        
        switch (eax_5)
            case 0, 1, 2, 3, 7
                data_3160b90 = *(eax_3 + 0x10)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return &data_3160b80
            case 4
                data_3160b90 = sub_57ce70(*(eax_3 + 0x10))
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return &data_3160b80
            case 5
                int32_t var_28_1 = *(eax_3 + 0x10)
                sub_57e670(0x3160b40, edx_2)
                data_3160b90 = 0x3160b40
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return &data_3160b80
            case 6
                sub_57e740(ecx_2)
                data_3160b90 = &data_31605ec
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return &data_3160b80
            case 8
                uint32_t eax_11 = __Cnd_wait(&data_8954cc, *(eax_3 + 0x10))
                int32_t eax_12 = neg.d(eax_11)
                data_3160b90 = sbb.d(eax_12, eax_12, eax_11 != 0) + 1
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return &data_3160b80
            case 9
                int32_t var_c
                int32_t* var_28_4 = &var_c
                int32_t var_10
                int32_t* var_2c_1 = &var_10
                char* eax_17 = *(eax_3 + 0x10)
                int32_t var_14
                int32_t* var_30_1 = &var_14
                int32_t var_18
                int32_t* var_34_1 = &var_18
                var_18 = 0
                var_14 = 0
                var_10 = 0
                var_c = 0
                sub_5a957c(eax_17, "%hhd.%hhd.%hhd.%hhd")
                data_3160b90 = (((((var_18 << 8) + var_14) << 8) + var_10) << 8) + var_c
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return &data_3160b80
            case 0xa
                int32_t* var_28_5 = &data_316009c
                int32_t* var_2c_2 = &data_31600a0:2
                int32_t* var_30_2 = &data_316009c:2
                data_316009c = 0
                data_31600a0 = 0
                data_31600a4 = 0
                data_31600a8 = 0
                sub_5a957c(*(eax_3 + 0x10), "%hd/%hd/%hd")
                data_3160b90 = &data_316009c
            case 0xb
                data_316009c = 0
                data_31600a0 = 0
                data_31600a4 = 0
                data_31600a8 = 0
                sub_5abfc0(0x3160a38, 0, 0x104)
                int32_t var_34_2 = 0x3160a38
                int32_t* var_38_2 = &data_31600a8
                int32_t* var_3c_2 = &data_31600a4:2
                int32_t* var_40_1 = &data_31600a4
                sub_5a957c(*(eax_3 + 0x10), "%hd:%hd:%hd %2s")
                eax_20 = __Cnd_wait(0x895508, 0x3160a38)
            label_5821a4:
                
                if (eax_20 != 0)
                    data_3160b90 = &data_316009c
                else
                    if (data_31600a4.w != 0xc)
                        data_31600a4.w += 0xc
                    
                    data_3160b90 = &data_316009c
            case 0xc
                data_316009c = 0
                data_31600a0 = 0
                data_31600a4 = 0
                data_31600a8 = 0
                sub_5abfc0(0x3160a38, 0, 0x104)
                int32_t var_34_3 = 0x3160a38
                int32_t* var_38_3 = &data_31600a8
                int32_t* var_3c_3 = &data_31600a4:2
                int32_t* var_40_2 = &data_31600a4
                int32_t* var_44_1 = &data_316009c
                int32_t* var_48_2 = &data_31600a0:2
                int32_t* var_4c_1 = &data_316009c:2
                sub_5a957c(*(eax_3 + 0x10), "%hd/%hd/%hd %hd:%hd:%hd %2s")
                eax_20 = __Cnd_wait(0x895508, 0x3160a38)
                goto label_5821a4
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return &data_3160b80
}
