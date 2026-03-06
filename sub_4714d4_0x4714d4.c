// 函数名称: sub_4714d4
// 虚拟地址: 0x4714d4
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4714d4(int32_t arg1, char arg2, int32_t arg3, int32_t* arg4 @ ebp, void* arg5 @ edi)
{
    // 第一条实际指令: char* entry_ebx
    char* entry_ebx
    *entry_ebx
    *entry_ebx = arg2
    char temp1 = *(arg5 - 0x2affb8ec)
    *(arg5 - 0x2affb8ec) += arg1:1.b
    int32_t eax = adc.d(arg1, *(arg5 + 1), temp1 + arg1:1.b u< temp1)
    
    if (eax == 0 || arg3 == 1)
        eax:1.b += (arg3 - 1).b
        breakpoint
    
    int128_t* var_44
    int32_t eax_2 = __security_cookie ^ &var_44
    void* eax_3 = arg4[2]
    int32_t* edx = arg4[8]
    char* var_48 = entry_ebx
    int32_t* ebx = arg4[6]
    uint32_t esi = arg4[3]
    int32_t* var_50 = arg5 + 1
    int32_t* edi_2 = arg4[5]
    var_44 = arg4[7]
    void* eax_4
    int32_t edx_1
    eax_4, edx_1 = sub_46b2b0(esi)
    *(eax_4 + 0x1a08) = 0
    int32_t eax_5 = arg4[4]
    
    if (eax_5 u> 0x18)
        char const* const var_54_25 = "Unknown choice type!\n"
        sub_4c5680("error %s")
        _exit(1)
        noreturn
    
    char eax_7
    
    switch (eax_5)
        case 0
            int32_t eax_6 = *ebx
            sub_46e310(eax_6, esi, arg4[9], eax_3, edi_2, eax_6)
        label_471565:
            *(eax_4 + 8) = 1
            sub_4b2040()
            eax_7 = sub_406ad0()
        case 1
            int128_t* edx_3 = var_44
            sub_46e430(eax_5, edx_3, esi, edx, edi_2, edx_3)
            goto label_471565
        case 2
            int32_t eax_8 = arg4[0xb]
            sub_46f430(eax_8, ebx, arg4[9], esi, edi_2, arg4[0xa], eax_8)
            goto label_471565
        case 3
            int32_t var_54_4 = arg4[9]
            eax_7 = sub_46f540(eax_5, esi, ebx, eax_3, edi_2)
        label_4717d4:
            
            if (eax_7 == 0)
                if (arg4[4] != 6 || *(eax_4 + 0x558) != 0)
                    goto label_471565
                
                goto label_4717fe
        case 4
            int32_t eax_9 = arg4[0xa]
            int32_t var_54_5 = eax_9
            sub_46f620(eax_9, edx_1, esi, ebx, edi_2, arg4[9])
            goto label_471565
        case 5
            int32_t eax_10 = *ebx
            sub_46f700(eax_10, esi, eax_3, edi_2, eax_10, arg4[0xa])
            goto label_471565
        case 6
            int128_t* eax_11 = var_44
            sub_470090(eax_11, eax_3, edx, esi, arg4[9], edi_2, ebx, eax_11, arg4[0xa], arg4[0xb])
            
            if (*(eax_4 + 0x558) != 0)
                goto label_471565
            
        label_4717fe:
            
            if (*(eax_4 + 0x1f30) != 0)
                goto label_471565
            
            int32_t eax_21 = sub_46c040(eax_3, esi)
            void* esi_1 = *(data_27e7a40 + 0x548)
            
            if (*(esi_1 + 0x2c078) == 1 && *(esi_1 + 0x210) == 0)
                sub_4d6480(data_307bef0)
                void var_34
                eax_21 = sub_4d66f0(&var_34)
            
            *(esi_1 + 0x210) = 6
            *(esi_1 + 0x2c078) = 0
            *(esi_1 + 0x214) = 0
            sub_5a6aba(eax_2 ^ &var_44)
            *arg4
            return eax_21
        case 7
            sub_470330(eax_5, var_44, esi, ebx, edi_2)
            goto label_471565
        case 8
            sub_471000(eax_5, esi, ebx, edx, edi_2, var_44)
            goto label_471565
        case 9
            int128_t* eax_12 = var_44
            sub_4711a0(eax_12, esi, ebx, edx, arg4[0xb], arg4[0xc], edi_2, eax_12)
            goto label_471565
        case 0xa
            int128_t* eax_13 = var_44
            sub_4710e0(eax_13, esi, ebx, edx, edi_2, eax_13)
            goto label_471565
        case 0xb
            sub_4703f0(eax_5, esi, ebx, edx, edi_2, var_44)
            goto label_471565
        case 0xc
            sub_4704c0(ebx, edi_2, arg4[9])
            goto label_471565
        case 0xd
            int32_t eax_14 = arg4[9]
            eax_7 = sub_470620(eax_14, eax_3, var_44, esi, edi_2, edx, eax_14)
            goto label_4717d4
        case 0xe
            int32_t eax_15 = arg4[0xa]
            int32_t var_54_15 = arg4[0xb]
            sub_4707b0(eax_15, esi, ebx, 0, arg4[9], eax_15, edi_2)
            goto label_471565
        case 0xf
            int128_t* eax_17 = var_44
            sub_4708d0(eax_17, eax_3, esi, *(eax_17 + 4), eax_3, *eax_17, edi_2, ebx, arg4[9], 
                arg4[0xa])
            goto label_471565
        case 0x10
            sub_470a60()
            goto label_471565
        case 0x11
            sub_470a80(eax_5, edx_1, esi, *ebx, edi_2)
            goto label_471565
        case 0x12
            sub_470b40(eax_5, edx_1, esi, *ebx, edi_2)
            goto label_471565
        case 0x13
            sub_470c00(eax_5, edx_1, esi, ebx, edi_2)
            goto label_471565
        case 0x14
            sub_470cb0(eax_5, edx_1, esi, *ebx, edi_2)
            goto label_471565
        case 0x15
            int32_t eax_18 = arg4[9]
            int32_t var_54_21 = eax_18
            sub_470d30(eax_18, esi, ebx, edx, edi_2, var_44)
            goto label_471565
        case 0x16
            sub_470e10(esi)
            goto label_471565
        case 0x17
            int32_t var_54_22 = arg4[9]
            sub_470e70(esi)
            goto label_471565
        case 0x18
            int32_t eax_19 = arg4[0xa]
            int32_t var_54_23 = eax_19
            eax_7 = sub_470f20(eax_19, esi, eax_3, arg4[9])
            goto label_4717d4
    
    sub_5a6aba(eax_2 ^ &var_44)
    *arg4
    return eax_7
}
