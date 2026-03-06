// 函数名称: sub_4adac0
// 虚拟地址: 0x4adac0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4adac0(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = 0
    int32_t var_954 = 0
    int32_t var_95c = 0
    int32_t var_948 = 0
    int32_t var_94c
    int32_t var_944[0x148]
    
    if (*(arg1 + 0x458) s> 0)
        void* edi_1 = arg1 + 0x56
        void* var_958_1 = edi_1
        
        while (true)
            *(arg1 + 0x1ec1) = eax_2.b
            uint32_t edx_1 = 0
            (&__saved_ebp)[eax_2 - 0x108] = 0
            int32_t i = sx.d(*edi_1)
            int32_t ecx = 0
            var_94c = 0
            int32_t var_950_1 = 0xa
            
            if (i != 0xffffffff)
                do
                    int32_t eax_4 = i * 5
                    
                    if ((*(*(arg1 + (eax_4 << 2) + 0x46c) + 0x10) & 0x8000) != 0)
                        ecx += 1
                    
                    i = sx.d(*(arg1 + (eax_4 << 2) + 0x476))
                while (i != 0xffffffff)
                
                if (ecx != 0)
                    var_950_1 = 0xc
            
            int32_t i_1 = sx.d(*(edi_1 - 0x12))
            
            while (i_1 != 0xffffffff)
                var_944[edx_1] = i_1
                i_1 = sx.d(*(arg1 + ((i_1 * 5 + 0x11d) << 2)))
                edx_1 += 1
            
            bool cond:1_1 = *(arg1 + 0x18) == 0
            int32_t eax_6 = edx_1
            var_94c = eax_6
            
            if (not(cond:1_1))
                int32_t ecx_4 = sx.d(*(edi_1 + 0x58)) - sx.d(*(edi_1 + 0x5a))
                
                if (ecx_4 s> 0)
                    int32_t esi_5 = sx.d(*(edi_1 + 0x58)) - sx.d(*(edi_1 + 0x5a))
                    __builtin_memset(&(&__saved_ebp)[edx_1 - 0x250], 0xffffffff, esi_5 << 2)
                    edi_1 = var_958_1
                    eax_6 = esi_5 + edx_1
                    var_94c = eax_6
                
                if (*(edi_1 + 0x5a) s> *(edi_1 + 0x58))
                    int32_t temp0_1 = eax_6
                    eax_6 += ecx_4
                    var_94c = eax_6
                    
                    if (temp0_1 + ecx_4 s< 0)
                        sub_5a7d4b("Negative hand size\n")
                        sub_5a79f4()
                        noreturn
            
            int32_t ecx_6 = var_950_1
            *(edi_1 + 0x10) = 0
            
            if (eax_6 s> ecx_6)
                edx_1.b = eax_6.b
                edx_1.b -= ecx_6.b
                *(edi_1 + 0x10) = edx_1.b
                
                if (*(arg1 + 0x18) == 0)
                    if (var_95c == 0)
                        char const* const var_978_1 = "phase"
                        char const* const var_97c_1 = "--- End of round ---\n"
                        sub_4c5680("%s (%s)")
                        eax_6 = var_94c
                        ecx_6 = var_950_1
                        var_95c = 1
                    
                    if (*(arg1 + 0x18) == 0 || sx.d(*(arg1 + 0x19)) == var_948)
                        goto label_4adcbc
                    
                    *(edi_1 + 0x5a) += eax_6.w - ecx_6.w
                else if (sx.d(*(arg1 + 0x19)) == var_948)
                label_4adcbc:
                    sub_49da80(var_948, 2, &var_944, &var_94c, 0, 0, eax_6 - ecx_6, 1, 1)
                    bool cond:5_1 = *(arg1 + 0x1ec3) != 0
                    (&__saved_ebp)[eax_2 - 0x108] = 1
                    
                    if (cond:5_1)
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return 0
                    
                    edi_1 = var_958_1
                else
                    *(edi_1 + 0x5a) += eax_6.w - ecx_6.w
            
            eax_2 = var_948 + 1
            edi_1 += 0xb4
            var_948 = eax_2
            var_958_1 = edi_1
            
            if (eax_2 s>= sx.d(*(arg1 + 0x458)))
                break
            
            eax_2 = var_948
    
    int32_t esi_7 = 0
    
    if (*(arg1 + 0x458) s> 0)
        void* edi_4 = arg1 + 0x28
        
        do
            int32_t eax_11 = *(*edi_4 + 0x10)
            
            if (eax_11 != 0)
                eax_11(arg1, esi_7, 0xffffffff)
            
            eax_2 = sx.d(*(arg1 + 0x458))
            esi_7 += 1
            edi_4 += 0xb4
        while (esi_7 s< eax_2)
    
    int32_t i_2 = 0
    char var_40c[0x404]
    
    if (*(arg1 + 0x458) s> 0)
        void* edi_5 = arg1 + 0x20
        
        do
            int32_t var_424[0x6]
            
            if (var_424[i_2] != 0)
                sub_49d860(eax_2, 0, arg1, i_2, 2, &var_944, &var_94c, nullptr)
                int32_t eax_12 = var_94c
                eax_2 = sub_49dbf0(eax_12, &var_944, arg1, i_2, eax_12)
                
                if (*(arg1 + 0x18) == 0)
                    int32_t ecx_10 = var_94c
                    char* const eax_13 = &data_83f3d3
                    
                    if (ecx_10 != 1)
                        eax_13 = &data_85f840
                    
                    char* const var_978_3 = eax_13
                    int32_t var_97c_5 = ecx_10
                    int32_t var_980_4 = *edi_5
                    sub_5a733b(&var_40c, "%s discards %d card%s at end of round.\n")
                    sub_4c5680(&var_40c)
                    eax_2 = var_94c
                    *((i_2 + (sx.d(*(arg1 + 0x1ec2)) << 2)) * 0x1c0 + *(data_27e7a40 + 0x548)
                        + 0x2c264) = eax_2
            
            i_2 += 1
            edi_5 += 0xb4
        while (i_2 s< sx.d(*(arg1 + 0x458)))
    
    int32_t i_3 = 0
    int32_t i_4 = 0
    
    if (*(arg1 + 0x458) s> 0)
        void* edx_8 = arg1 + 0x28
        void* var_950_2 = edx_8
        
        do
            int32_t j = sx.d(*(edx_8 + 0x2e))
            int32_t ecx_15 = 0
            
            if (j != 0xffffffff)
                do
                    int32_t eax_15 = j * 5
                    
                    if ((*(*(arg1 + (eax_15 << 2) + 0x46c) + 0x10) & 0x20000) != 0)
                        ecx_15 += 1
                    
                    j = sx.d(*(arg1 + (eax_15 << 2) + 0x476))
                while (j != 0xffffffff)
                
                if (ecx_15 != 0)
                    if (*(arg1 + 0x18) == 0)
                        int32_t j_1 = 0
                        
                        if (0 s< *(arg1 + 0x460))
                            void* edi_6 = arg1 + 0x466
                            
                            do
                                j.b = *edi_6
                                
                                if (j.b s>= 0)
                                    int32_t ecx_19 = sx.d(j.b)
                                    
                                    if (ecx_19 != i_4 && j.b != *(edi_6 - 2))
                                        if (*(arg1 + 0x18) != 0)
                                            goto label_4adf19
                                        
                                        int32_t j_3 = j_1
                                        ecx_19 = sub_49b590(i_4, edx_8)
                                        
                                        if (*(arg1 + 0x18) != 0)
                                            edx_8 = var_950_2
                                        label_4adf19:
                                            
                                            if (*(*edx_8 + 0x20) != 0)
                                                int32_t var_978_5 = **(edi_6 + 6)
                                                int32_t var_97c_6 = *(edx_8 - 8)
                                                sub_5a733b(&var_40c, "%s takes %s.\n")
                                                ecx_19 =
                                                    (*(*var_950_2 + 0x20))(arg1, i_4, &var_40c, "draw")
                                        
                                        int32_t var_978_6 = 2
                                        sub_49cc30(arg1, j_1, ecx_19, i_4)
                                        var_954 += 1
                                        edx_8 = var_950_2
                                        *(edi_6 + 2) = (*(edi_6 + 2) & 0xffc0) | 1 << i_4.b
                                
                                j_1 += 1
                                edi_6 += 0x14
                            while (j_1 s< sx.d(*(arg1 + 0x460)))
                            
                            i_3 = i_4
                        
                        if (var_954 s> 0 && *(arg1 + 0x18) == 0)
                            char* const eax_25 = &data_83f3d3
                            
                            if (var_954 != 1)
                                eax_25 = &data_85f840
                            
                            char* const var_978_7 = eax_25
                            int32_t var_97c_8 = var_954
                            int32_t var_980_5 = *(edx_8 - 8)
                            sub_5a733b(&var_40c, "%s takes %d discard%s.\n")
                            sub_4c5680(&var_40c)
                            edx_8 = var_950_2
                            i_3 = i_4
                    else
                        int32_t j_2 = 0
                        
                        if (*(arg1 + 0x458) s> 0)
                            void* ecx_16 = arg1 + 0x66
                            
                            do
                                if (i_3 != j_2)
                                    int32_t esi_8
                                    esi_8.w = sx.w(*ecx_16)
                                    *(edx_8 + 0x86) += esi_8.w
                                
                                j_2 += 1
                                ecx_16 += 0xb4
                            while (j_2 s< sx.d(*(arg1 + 0x458)))
            
            i_3 += 1
            edx_8 += 0xb4
            i_4 = i_3
            var_950_2 = edx_8
        while (i_3 s< sx.d(*(arg1 + 0x458)))
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 1
}
