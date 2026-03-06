// 函数名称: sub_4714f0
// 虚拟地址: 0x4714f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4714f0(void* arg1, uint32_t arg2, int32_t arg3, int32_t* arg4, int32_t* arg5, int128_t* arg6, int32_t* arg7, int32_t arg8, int32_t arg9, int32_t arg10, int32_t arg11)
{
    // 第一条实际指令: int128_t* var_4c
    int128_t* var_4c
    int32_t eax_1 = __security_cookie ^ &var_4c
    var_4c = arg6
    void* eax_3
    int32_t edx_1
    eax_3, edx_1 = sub_46b2b0(arg2)
    *(eax_3 + 0x1a08) = 0
    
    if (arg3 u> 0x18)
        char const* const var_5c_25 = "Unknown choice type!\n"
        sub_4c5680("error %s")
        _exit(1)
        noreturn
    
    char eax_6
    
    switch (arg3)
        case 0
            int32_t eax_5 = *arg5
            sub_46e310(eax_5, arg2, arg8, arg1, arg4, eax_5)
        label_471565:
            *(eax_3 + 8) = 1
            sub_4b2040()
            eax_6 = sub_406ad0()
        case 1
            int128_t* edx_3 = var_4c
            sub_46e430(arg3, edx_3, arg2, arg7, arg4, edx_3)
            goto label_471565
        case 2
            sub_46f430(arg10, arg5, arg8, arg2, arg4, arg9, arg10)
            goto label_471565
        case 3
            int32_t var_5c_4 = arg8
            eax_6 = sub_46f540(arg3, arg2, arg5, arg1, arg4)
        label_4717d4:
            
            if (eax_6 == 0)
                if (arg3 != 6 || *(eax_3 + 0x558) != 0)
                    goto label_471565
                
                goto label_4717fe
        case 4
            int32_t var_5c_5 = arg9
            sub_46f620(arg9, edx_1, arg2, arg5, arg4, arg8)
            goto label_471565
        case 5
            int32_t eax_9 = *arg5
            sub_46f700(eax_9, arg2, arg1, arg4, eax_9, arg9)
            goto label_471565
        case 6
            int128_t* eax_10 = var_4c
            sub_470090(eax_10, arg1, arg7, arg2, arg8, arg4, arg5, eax_10, arg9, arg10)
            
            if (*(eax_3 + 0x558) != 0)
                goto label_471565
            
        label_4717fe:
            
            if (*(eax_3 + 0x1f30) != 0)
                goto label_471565
            
            int32_t eax_20 = sub_46c040(arg1, arg2)
            void* esi_1 = *(data_27e7a40 + 0x548)
            
            if (*(esi_1 + 0x2c078) == 1 && *(esi_1 + 0x210) == 0)
                sub_4d6480(data_307bef0)
                void var_3c
                eax_20 = sub_4d66f0(&var_3c)
            
            *(esi_1 + 0x210) = 6
            *(esi_1 + 0x2c078) = 0
            *(esi_1 + 0x214) = 0
            sub_5a6aba(eax_1 ^ &var_4c)
            return eax_20
        case 7
            sub_470330(arg3, var_4c, arg2, arg5, arg4)
            goto label_471565
        case 8
            sub_471000(arg3, arg2, arg5, arg7, arg4, var_4c)
            goto label_471565
        case 9
            int128_t* eax_11 = var_4c
            sub_4711a0(eax_11, arg2, arg5, arg7, arg10, arg11, arg4, eax_11)
            goto label_471565
        case 0xa
            int128_t* eax_12 = var_4c
            sub_4710e0(eax_12, arg2, arg5, arg7, arg4, eax_12)
            goto label_471565
        case 0xb
            sub_4703f0(arg3, arg2, arg5, arg7, arg4, var_4c)
            goto label_471565
        case 0xc
            sub_4704c0(arg5, arg4, arg8)
            goto label_471565
        case 0xd
            eax_6 = sub_470620(arg8, arg1, var_4c, arg2, arg4, arg7, arg8)
            goto label_4717d4
        case 0xe
            int32_t var_5c_15 = arg10
            sub_4707b0(arg9, arg2, arg5, 0, arg8, arg9, arg4)
            goto label_471565
        case 0xf
            int128_t* eax_16 = var_4c
            sub_4708d0(eax_16, arg1, arg2, *(eax_16 + 4), arg1, *eax_16, arg4, arg5, arg8, arg9)
            goto label_471565
        case 0x10
            sub_470a60()
            goto label_471565
        case 0x11
            sub_470a80(arg3, edx_1, arg2, *arg5, arg4)
            goto label_471565
        case 0x12
            sub_470b40(arg3, edx_1, arg2, *arg5, arg4)
            goto label_471565
        case 0x13
            sub_470c00(arg3, edx_1, arg2, arg5, arg4)
            goto label_471565
        case 0x14
            sub_470cb0(arg3, edx_1, arg2, *arg5, arg4)
            goto label_471565
        case 0x15
            int32_t var_5c_21 = arg8
            sub_470d30(arg8, arg2, arg5, arg7, arg4, var_4c)
            goto label_471565
        case 0x16
            sub_470e10(arg2)
            goto label_471565
        case 0x17
            int32_t var_5c_22 = arg8
            sub_470e70(arg2)
            goto label_471565
        case 0x18
            int32_t var_5c_23 = arg9
            eax_6 = sub_470f20(arg9, arg2, arg1, arg8)
            goto label_4717d4
    
    sub_5a6aba(eax_1 ^ &var_4c)
    return eax_6
}
