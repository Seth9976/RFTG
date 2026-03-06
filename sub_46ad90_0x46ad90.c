// 函数名称: sub_46ad90
// 虚拟地址: 0x46ad90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_46ad90(int32_t arg1, void* arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: void var_aa4
    void var_aa4
    int32_t eax_1 = __security_cookie ^ &var_aa4
    void* var_a9c = arg2
    void* eax_3 = sub_46b2b0(arg3)
    void* var_ab4_1
    void var_a80
    
    if (sub_46abc0(arg2) == 0)
        if (sub_46ac30(arg2) == 0)
            sub_4d6480(data_307bf64)
            var_ab4_1 = &var_a80
        else
            sub_4d6480(data_307bf60)
            var_ab4_1 = &var_a80
    else
        sub_4d6480(data_307bf44)
        var_ab4_1 = &var_a80
    
    sub_4d66f0(var_ab4_1)
    int32_t ebx_1
    
    if (arg3 != 0xffffffff)
        ebx_1 = *sub_46b2b0(arg3)
    else
        ebx_1 = &var_a80 | arg3
    
    int32_t ecx_3 = data_315fba4
    int32_t var_a8c = ebx_1
    void* ebx_2 = var_a9c
    int32_t var_a88 = 3
    int32_t var_a84 = ecx_3
    data_315fba4 = ecx_3 + 1
    sub_46b1d0(ebx_2, &var_a8c)
    int32_t eax_8
    
    if (arg3 != 0xffffffff)
        eax_8 = *sub_46b2b0(arg3)
    else
        eax_8 = ebx_2 | arg3
    
    *((eax_8 << 2) + &data_c020d8) -= 1
    *(ebx_2 + 0x74) = 5
    void* var_ad4
    int32_t var_ad0
    int32_t var_ac8
    void* var_ac4
    void* var_abc_1
    int32_t var_aa0
    int32_t var_a94
    void var_a50
    void var_530
    
    if (sub_46abc0(ebx_2) == 0)
        sub_4a53a0(*(ebx_2 + 0x7c), arg4, arg3, *(eax_3 + 0x28), &var_530, &var_a94, &var_a50, &var_a9c)
        int32_t eax_20 = sub_4a1730(1, arg3, arg4, *(ebx_2 + 0x7c), 0, 0, 0, 0)
        var_aa0 = eax_20
        int32_t eax_21 = sub_49c8f0(eax_20, arg4, arg3, 2)
        int32_t ecx_20 = var_aa0
        
        if (ecx_20 s> eax_21)
            var_aa0 = 0xffffffff
        label_46b06d:
            int32_t ecx_21 = var_a94
            void* edx_13 = var_a9c
            
            if (ecx_21 != 0 || edx_13 != 0)
                *(eax_3 + 0xaa1) = 1
                *(eax_3 + 0x1c) = 0xb
                *(eax_3 + 0x24) = *(ebx_2 + 0x7c)
                *(eax_3 + 0x1f34) = edx_13
                int32_t edx_16 = sub_46fb60(eax_3 + 0x1f34, arg3, &var_a9c, *(ebx_2 + 0x7c), 0, 0, 
                    &var_a50, ecx_21, eax_3 + 0x1f34)
                int32_t esi_3 = var_a94
                int32_t edx_17 = sub_46aca0(eax_3 + 0xaa4, edx_16, &var_530, esi_3)
                int32_t eax_25 = *(eax_3 + 0x1f34)
                *(eax_3 + 0x1a08) = esi_3
                sub_46aca0(eax_3 + 0x1a10, edx_17, &var_a50, eax_25)
                int32_t eax_27 = var_aa0
                void* edx_18 = data_27e7a40
                *(eax_3 + 0x1f30) = var_a9c
                *(eax_3 + 0x28) = 0
                *(eax_3 + 0x2c) = 0
                *(eax_3 + 0x558) = eax_27
                *(eax_3 + 0x554) = eax_27
                *(eax_3 + 0x550) = 0
                *(eax_3 + 0xa94) = 0
                void* esi_4 = *(edx_18 + 0x548)
                
                if (*(esi_4 + 0x2c078) == 1 && *(esi_4 + 0x210) == 0)
                    sub_4d6480(data_307bef0)
                    eax_27 = sub_4d66f0(&var_a80)
                
                *(esi_4 + 0x210) = 4
                *(esi_4 + 0x2c078) = 0
                *(esi_4 + 0x214) = 0
                sub_5a6aba(eax_1 ^ &var_aa4)
                return eax_27
        else if (ecx_20 != 0)
            goto label_46b06d
        
        int32_t var_ab4_13 = 1
        int32_t var_ab8_4 = 0
        var_abc_1 = &var_a50
        int32_t var_ac0_3 = 0
        var_ac4 = &var_530
        var_ac8 = *(ebx_2 + 0x7c)
        int32_t var_acc_3 = 5
        var_ad0 = arg3
        var_ad4 = arg4
    else
        var_a94 = 0
        var_aa0 = 0
        int32_t eax_11 = *(ebx_2 + 0x7c)
        sub_49ff40(eax_11, &var_a50, &var_a94, arg4, arg3, eax_11, &var_530, &var_aa0)
        int32_t edx_3 = *(ebx_2 + 0x7c)
        int32_t eax_12
        int32_t edx_4
        eax_12, edx_4 = sub_49f150(1, edx_3, arg3, edx_3, 0, 0)
        
        if (eax_12 != 0)
            int32_t ebx_4 = var_a94
            
            if (ebx_4 != 0 || var_aa0 != ebx_4)
                *(eax_3 + 0x1f34) = var_aa0
                *(eax_3 + 0xaa2) = 1
                *(eax_3 + 0x1c) = 7
                int32_t edx_5 = sub_46aca0(eax_3 + 0xaa4, edx_4, &var_530, ebx_4)
                int32_t ecx_9 = *(eax_3 + 0x1f34)
                *(eax_3 + 0x1a08) = ebx_4
                sub_46aca0(eax_3 + 0x1a10, edx_5, &var_a50, ecx_9)
                void* eax_16 = var_a9c
                *(eax_3 + 0x1f30) = var_aa0
                void* edx_7 = data_27e7a40
                int32_t eax_17 = 0
                *(eax_3 + 0x24) = *(eax_16 + 0x7c)
                *(eax_3 + 0x28) = 0
                *(eax_3 + 0x2c) = 0
                *(eax_3 + 0x558) = eax_12
                *(eax_3 + 0x554) = eax_12
                *(eax_3 + 0x550) = 0
                void* esi_2 = *(edx_7 + 0x548)
                
                if (*(esi_2 + 0x2c078) == 1 && *(esi_2 + 0x210) == 0)
                    sub_4d6480(data_307bef0)
                    eax_17 = sub_4d66f0(&var_a80)
                
                *(esi_2 + 0x210) = 4
                *(esi_2 + 0x2c078) = 0
                *(esi_2 + 0x214) = 0
                sub_5a6aba(eax_1 ^ &var_aa4)
                return eax_17
        
        int32_t var_ab4_8 = 1
        int32_t var_ab8_1 = 0
        var_abc_1 = &var_a50
        int32_t var_ac0_1 = 0
        var_ac4 = &var_530
        var_ac8 = *(var_a9c + 0x7c)
        int32_t var_acc_1 = 5
        var_ad0 = arg3
        var_ad4 = arg4
    sub_469e10(var_ad4, var_ad0, 5, var_ac8, var_ac4, 0, var_abc_1, 0)
    sub_469ff0(arg3)
    sub_5a6aba(eax_1 ^ &var_aa4)
    return 0
}
