// 函数名称: sub_4b0830
// 虚拟地址: 0x4b0830
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4b0830(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    *(arg1 + 0x1ec2) += 1
    *(arg1 + 0x1eb6) = 0
    *(arg1 + 0x1eba) = 0
    *(arg1 + 0x1ebe) = 0
    int32_t i = 0
    data_27e7aa0 = arg1
    
    if (arg1[0x116].b s> 0)
        void* ecx = &arg1[0xb]
        
        do
            *(ecx + 4) = 0xffffffff
            *ecx = 0xffffffff
            int32_t j
            int32_t edx_1
            
            if (i s>= 0)
                j = sx.d(*(ecx + 0x18))
                edx_1 = 0
            
            if (i s< 0 || j s< 0xffffffff)
            label_4b08ec:
                sub_49b2a0()
                noreturn
            
            while (j != 0xffffffff)
                j = sx.d(arg1[j * 5 + 0x11d].w)
                edx_1 += 1
            
            *(ecx + 0x89) = edx_1.b
            i += 1
            ecx += 0xb4
        while (i s< sx.d(arg1[0x116].b))
    
    arg1[0x7b0].b = 0xff
    
    if (*(arg1 + 0x1ec3) != 0)
    label_4b08e3:
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0
    
    if (arg1[6].b == 0)
        sub_49b390(0xffffffff)
        int32_t var_430_1 = sx.d(*(arg1 + 0x1ec2))
        void var_40c
        sub_5a733b(&var_40c, "=== Round %d begins ===\n")
        void* const var_430_2 = &data_8752c0
        void* var_434_1 = &var_40c
        sub_4c5680("%s (%s)")
    
    sub_49d290(arg1)
    int32_t i_1 = 0
    int32_t i_3 = 0
    
    if (arg1[0x116].b s> 0)
        void* edi = &arg1[0x32]
        
        do
            *(arg1 + 0x1ec1) = i_1.b
            int32_t j_1 = sx.d(*(edi - 0x72))
            int32_t ebx_1 = 0
            int32_t eax_6
            
            for (; j_1 != 0xffffffff; j_1 = sx.d(*(&arg1[eax_6] + 0x476)))
                eax_6 = j_1 * 5
                
                if ((*(arg1[eax_6 + 0x11b] + 0x10) & 0x40000) != 0)
                    ebx_1 += 1
            
            j_1.b = *(arg1 + 0x459)
            
            if (j_1.b != 0 || ebx_1.b == 0)
                int32_t var_414 = 2
                
                if (j_1.b == 0)
                    var_414 = 1
                
                int32_t var_41c = 0xffffffff
                int32_t var_418_1 = 0xffffffff
                sub_49d720(arg1, i_1)
                int32_t eax_8 = *edi
                
                if (eax_8 s>= *(edi - 4))
                    (*(*(edi - 0xa0) + 0xc))(arg1, i_3, 0, &var_41c, &var_414, 0, 0, sx.d(ebx_1.b), 0, 
                        0, 0)
                    *(edi + 8) = *(edi - 4)
                else
                    int32_t edx_3 = *(edi - 8)
                    int32_t ecx_7 = *(edx_3 + (eax_8 << 2) + 8)
                    
                    if (ecx_7 s< 0)
                        goto label_4b08ec
                    
                    if (ecx_7 s> 0x64)
                        goto label_4b08ec
                    
                    int32_t eax_9 = *(edx_3 + ((eax_8 + ecx_7 + 3) << 2))
                    
                    if (eax_9 s< 0)
                        goto label_4b08ec
                    
                    if (eax_9 s> 0x64)
                        goto label_4b08ec
                    
                    *(edi + 8) = eax_9 + eax_8 + ecx_7 + 3 + 1
                
                if (*(arg1 + 0x1ec3) != 0)
                    goto label_4b08e3
                
                i_1 = i_3
            
            i_1 += 1
            edi += 0xb4
            i_3 = i_1
        while (i_1 s< sx.d(arg1[0x116].b))
    
    int32_t i_2 = 0
    
    if (arg1[0x116].b s> 0)
        void* ebx_2 = &arg1[0xa]
        
        do
            int32_t eax_13 = *(*ebx_2 + 0x10)
            
            if (eax_13 != 0)
                eax_13(arg1, i_2, 0xffffffff)
            
            i_2 += 1
            ebx_2 += 0xb4
        while (i_2 s< sx.d(arg1[0x116].b))
    
    sub_4b0ae0(arg1)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 1
}
