// 函数名称: sub_5a0800
// 虚拟地址: 0x5a0800
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5a0800(void* arg1, uint32_t* arg2, uint32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: char* eax = *(arg1 + 0xa8)
    char* eax = *(arg1 + 0xa8)
    
    if (eax u< *(arg1 + 0xac))
    label_5a0864:
        uint32_t ecx_2 = zx.d(*eax)
        void* eax_6 = &eax[1]
        *(arg1 + 0xa8) = eax_6
        
        if (ecx_2 == 0x42)
            if (eax_6 u< *(arg1 + 0xac))
            label_5a08cc:
                ecx_2.b = *eax_6
                *(arg1 + 0xa8) = eax_6 + 1
                
                if (zx.d(ecx_2.b) == 0x4d)
                    int32_t eax_14
                    int32_t ecx_4
                    
                    if (*(arg1 + 0x10) != 0)
                        ecx_4 = *(arg1 + 0xac)
                        eax_14 = ecx_4 - *(arg1 + 0xa8)
                    
                    if (*(arg1 + 0x10) == 0 || eax_14 s>= 0xc)
                        *(arg1 + 0xa8) += 0xc
                    else
                        int32_t eax_15 = *(arg1 + 0x1c)
                        *(arg1 + 0xa8) = ecx_4
                        (*(arg1 + 0x14))(eax_15, 0xc - eax_14)
                    
                    uint32_t eax_16 = sub_595ac0(arg1)
                    uint32_t eax_19 = (sub_595ac0(arg1) << 0x10) + eax_16
                    uint32_t eax_22
                    
                    if (eax_19 == 0xc)
                        *arg2 = sub_595ac0(arg1)
                        eax_22 = sub_595ac0(arg1)
                    label_5a098b:
                        *arg3 = eax_22
                        
                        if (sub_595ac0(arg1) != 1)
                            *(arg1 + 0xa8) = *(arg1 + 0xb0)
                            return 0
                        
                        int32_t eax_34
                        int32_t edx_6
                        edx_6:eax_34 = sx.q(sub_595ac0(arg1))
                        *arg4 = (eax_34 + (edx_6 & 7)) s>> 3
                        return 1
                    
                    if (eax_19 == 0x28 || eax_19 == 0x38 || eax_19 == 0x6c)
                        uint32_t eax_23 = sub_595ac0(arg1)
                        *arg2 = (sub_595ac0(arg1) << 0x10) + eax_23
                        uint32_t eax_27 = sub_595ac0(arg1)
                        eax_22 = (sub_595ac0(arg1) << 0x10) + eax_27
                        goto label_5a098b
            else if (*(arg1 + 0x20) != 0)
                int32_t eax_8
                eax_8, ecx_2 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                
                if (eax_8 != 0)
                    *(arg1 + 0xa8) = arg1 + 0x28
                    *(arg1 + 0xac) = eax_8 + arg1 + 0x28
                else
                    *(arg1 + 0x20) = eax_8
                    char* eax_10 = *(arg1 + 0xac) - 1
                    *(arg1 + 0xa8) = eax_10
                    *eax_10 = 0
                
                eax_6 = *(arg1 + 0xa8)
                goto label_5a08cc
    else if (*(arg1 + 0x20) != 0)
        int32_t eax_2 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
        
        if (eax_2 != 0)
            *(arg1 + 0xa8) = arg1 + 0x28
            *(arg1 + 0xac) = eax_2 + arg1 + 0x28
        else
            *(arg1 + 0x20) = eax_2
            char* eax_4 = *(arg1 + 0xac) - 1
            *(arg1 + 0xa8) = eax_4
            *eax_4 = 0
        
        eax = *(arg1 + 0xa8)
        goto label_5a0864
    
    *(arg1 + 0xa8) = *(arg1 + 0xb0)
    return 0
}
