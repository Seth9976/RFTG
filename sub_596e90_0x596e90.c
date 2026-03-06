// 函数名称: sub_596e90
// 虚拟地址: 0x596e90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_596e90(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx = 0
    uint32_t i = arg1[0xda8]
    arg1[0xda0] = 0
    arg1[0xd9f] = 0
    arg1[0xda2] = 0
    arg1[0xd89] = 0
    arg1[0xd7b] = 0
    arg1[0xd6d] = 0
    arg1[0xda1].b = 0xff
    
    if (i == 0)
        i = 0x7fffffff
    
    bool cond:0 = arg1[0xda3] != 1
    arg1[0xda9] = i
    void var_88
    
    if (cond:0)
        uint32_t i_3 = 0
        
        if (arg1[0xd64] s> 0)
            do
                uint32_t i_2 = 0
                
                if (arg1[0xd63] s> 0)
                    do
                        uint32_t i_1 = 0
                        
                        if (arg1[0xda3] s> 0)
                            void* var_9c_1 = &arg1[0xda4]
                            
                            do
                                int32_t eax_16 = *var_9c_1
                                void* edi_2 = &arg1[eax_16 * 0xe]
                                int32_t var_a0_1 = 0
                                
                                if (*(edi_2 + 0x35a4) s> 0)
                                    int32_t eax_30
                                    
                                    do
                                        int32_t eax_28 = *(edi_2 + 0x35a0)
                                        int32_t var_8c_2 = 0
                                        
                                        if (eax_28 s> 0)
                                            int32_t ecx_14
                                            
                                            do
                                                void* ecx_11 = *(edi_2 + 0x35b0) * 0x690
                                                int32_t var_b8_4 = eax_16
                                                int16_t* var_bc_3 = ecx_11 + arg1 + 0x1a44
                                                int32_t ebx_5 = (*(edi_2 + 0x35a4) * i_3 + var_a0_1) * 4
                                                
                                                if (sub_596470(&arg1[*(edi_2 + 0x35ac) * 0x1a4 + 1], 
                                                        arg1, ecx_11 + arg1 + 0x1a44, ecx_11, &var_88) == 0)
                                                    goto label_5972da
                                                
                                                int32_t ecx_12 = *(edi_2 + 0x35c0)
                                                void* eax_27 = &arg1[*(edi_2 + 0x35a8) * 0x10 + 0xd21]
                                                sub_596770(eax_27, &var_88, ecx_12, 
                                                    ecx_12 * ebx_5 * 2 + *(edi_2 + 0x35c8)
                                                        + (eax_28 * i_2 + var_8c_2) * 8, 
                                                    eax_27)
                                                eax_28 = *(edi_2 + 0x35a0)
                                                ecx_14 = var_8c_2 + 1
                                                var_8c_2 = ecx_14
                                            while (ecx_14 s< eax_28)
                                        
                                        eax_30 = var_a0_1 + 1
                                        var_a0_1 = eax_30
                                    while (eax_30 s< *(edi_2 + 0x35a4))
                                
                                var_9c_1 += 4
                                i = i_1 + 1
                                i_1 = i
                            while (i s< arg1[0xda3])
                        
                        arg1[0xda9] -= 1
                        
                        if (arg1[0xda9] s<= 0)
                            if (arg1[0xda0] s< 0x18)
                                sub_596320(arg1)
                            
                            i.b = arg1[0xda1].b
                            
                            if (i.b u< 0xd0)
                                goto label_59707b
                            
                            if (i.b u> 0xd7)
                                goto label_59707b
                            
                            int32_t eax_32 = arg1[0xda8]
                            arg1[0xda0] = 0
                            arg1[0xd9f] = 0
                            arg1[0xda2] = 0
                            arg1[0xd89] = 0
                            arg1[0xd7b] = 0
                            arg1[0xd6d] = 0
                            arg1[0xda1].b = 0xff
                            
                            if (eax_32 == 0)
                                eax_32 = 0x7fffffff
                            
                            arg1[0xda9] = eax_32
                        
                        i = i_2 + 1
                        i_2 = i
                    while (i s< arg1[0xd63])
                
                i = i_3 + 1
                i_3 = i
            while (i s< arg1[0xd64])
    else
        int32_t eax_2 = arg1[0xda4]
        void* edi_1 = &arg1[eax_2 * 0xe]
        int32_t eax_5 = (*(edi_1 + 0x35bc) + 7) s>> 3
        int32_t ecx_4 = (*(edi_1 + 0x35b8) + 7) s>> 3
        int32_t var_90 = ecx_4
        int32_t var_94_1 = eax_5
        int32_t var_8c_1 = 0
        
        if (eax_5 s> 0)
            int32_t edx_12
            
            do
                if (ecx_4 s> 0)
                    do
                        int32_t var_b8_1 = eax_2
                        int16_t* edx_3 = *(edi_1 + 0x35ac) * 0x690
                        void* ecx_5 = &arg1[*(edi_1 + 0x35b0) * 0x1a4 + 0x691]
                        void* var_bc_1 = ecx_5
                        
                        if (sub_596470(edx_3 + arg1 + 4, arg1, edx_3, ecx_5, &var_88) == 0)
                        label_5972da:
                            sub_5a6aba(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        int32_t ecx_6 = *(edi_1 + 0x35c0)
                        int32_t eax_11 = *(edi_1 + 0x35c8)
                        sub_596770(eax_11, &var_88, ecx_6, eax_11 + ((ecx_6 * var_8c_1 + ebx) << 3), 
                            &arg1[*(edi_1 + 0x35a8) * 0x10 + 0xd21])
                        arg1[0xda9] -= 1
                        
                        if (arg1[0xda9] s<= 0)
                            if (arg1[0xda0] s< 0x18)
                                sub_596320(arg1)
                            
                            char eax_12 = arg1[0xda1].b
                            
                            if (eax_12 u< 0xd0)
                                goto label_59707b
                            
                            if (eax_12 u> 0xd7)
                                goto label_59707b
                            
                            int32_t eax_13 = arg1[0xda8]
                            arg1[0xda0] = 0
                            arg1[0xd9f] = 0
                            arg1[0xda2] = 0
                            arg1[0xd89] = 0
                            arg1[0xd7b] = 0
                            arg1[0xd6d] = 0
                            arg1[0xda1].b = 0xff
                            
                            if (eax_13 == 0)
                                eax_13 = 0x7fffffff
                            
                            arg1[0xda9] = eax_13
                        
                        ebx += 1
                    while (ebx s< var_90)
                    
                    eax_5 = var_94_1
                    ecx_4 = var_90
                    ebx = 0
                
                edx_12 = var_8c_1 + 1
                var_8c_1 = edx_12
            while (edx_12 s< eax_5)
    label_59707b:
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 1
}
