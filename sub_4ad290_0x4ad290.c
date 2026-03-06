// 函数名称: sub_4ad290
// 虚拟地址: 0x4ad290
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4ad290(void* arg1 @ esi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t result = __security_cookie ^ &__saved_ebp
    int32_t result_1 = result
    char* edi = nullptr
    char* var_734 = nullptr
    
    if (*(arg1 + 0x458) s> 0)
        int32_t* var_730_1 = arg1 + 0x20
        
        do
            void var_72c
            void* var_750_1 = &var_72c
            int32_t var_754_1 = 5
            int32_t eax_3
            void* ecx
            int32_t* edx
            eax_3, ecx, edx = sub_49dea0(edi, edx, ecx, arg1)
            int32_t ebx_1 = 0
            int32_t var_740_1 = eax_3
            int32_t var_738_1 = 0
            
            if (eax_3 s> 0)
                do
                    void var_728
                    ecx = *(*(&var_728 + (ebx_1 << 3)) + 8) & 0x20000000
                    
                    if (ecx != 0)
                        edx = var_730_1
                        int32_t i = sx.d(edx[0xa].w)
                        
                        if (i != 0xffffffff)
                            do
                                int32_t eax_4 = i * 5
                                int32_t edx_1 = sx.d(*(arg1 + (eax_4 << 2) + 0x470))
                                int32_t ecx_4 = edx_1 * 5
                                ecx = arg1 + (ecx_4 << 2) + 0x464
                                
                                if (*(*(arg1 + (ecx_4 << 2) + 0x46c) + 0xe) == 3)
                                    int16_t eax_7 = *(&var_72c + (var_738_1 << 3))
                                    int32_t eax_8 = sx.d(eax_7)
                                    
                                    if (edx_1 != eax_8)
                                        int32_t edx_2 = eax_8 * 5
                                        *(ecx + 0xe) = 0
                                        *(arg1 + (edx_2 << 2) + 0x472) += 1
                                        void* eax_9 = arg1 + (edx_2 << 2)
                                        edx_2.w = eax_7
                                        *(arg1 + (eax_4 << 2) + 0x470) = edx_2.w
                                        
                                        if (*(arg1 + 0x18) == 0)
                                            int32_t var_750_2 = **(eax_9 + 0x46c)
                                            int32_t var_754_2 = **(ecx + 8)
                                            int32_t var_758_2 = *var_730_1
                                            char var_40c[0x404]
                                            sub_5a733b(&var_40c, "%s shifts good from %s to %s.\n")
                                            char (* var_750_4)[0x404] = &var_40c
                                            ecx = sub_4591b0(&var_40c, sub_4c5680(&var_40c), arg1, 
                                                var_734)
                                
                                edx = i * 5 + 0x11d
                                i = sx.d(*(arg1 + (edx << 2)))
                            while (i != 0xffffffff)
                            
                            eax_3 = var_740_1
                            ebx_1 = var_738_1
                    
                    ebx_1 += 1
                    var_738_1 = ebx_1
                while (ebx_1 s< eax_3)
                
                edi = var_734
            
            result = sx.d(*(arg1 + 0x458))
            var_730_1 = &var_730_1[0x2d]
            edi = &edi[1]
            var_734 = edi
        while (edi s< result)
    
    sub_5a6aba(result_1 ^ &__saved_ebp)
    return result
}
