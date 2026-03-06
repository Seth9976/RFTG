// 函数名称: sub_6670a0
// 虚拟地址: 0x6670a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_6670a0(int32_t* arg1, int32_t arg2, uint32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t eax_2 = arg3
    int32_t* var_30 = arg1
    
    if (arg2 != 0 && arg1 != 0)
        void* ebx
        void* var_40_1 = ebx
        int32_t j_4 = *((eax_2 << 2) + &data_82f000)
        int32_t i = *arg1
        uint32_t esi_1 = zx.d(*(arg1 + 0xb))
        int32_t* ecx_2 = i * j_4
        int32_t* var_34_1 = ecx_2
        
        if (esi_1 == 1)
            char* edi_15 = ((ecx_2 - 1) u>> 3) + arg2
            char* var_24_3 = ((i - 1) u>> 3) + arg2
            void* var_28_3
            int32_t var_20_1
            int32_t var_18_3
            void* edx_11
            void* esi_25
            
            if ((arg4 & 0x10000) == 0)
                edx_11 = 7 - ((i - 1) & 7)
                esi_25 = 7 - ((ecx_2 - 1) & 7)
                var_28_3 = nullptr
                var_18_3 = 7
                var_20_1 = 1
            else
                edx_11 = (i - 1) & 7
                esi_25 = (ecx_2 - 1) & 7
                var_28_3 = 7
                var_18_3 = 0
                var_20_1 = 0xffffffff
            
            void* var_1c_3 = edx_11
            int32_t i_4 = 0
            
            if (i != 0)
                do
                    char* eax_9
                    eax_9.b = *var_24_3
                    ecx_2.b = edx_11.b
                    eax_9.b u>>= ecx_2.b
                    eax_9.b &= 1
                    
                    if (j_4 s> 0)
                        int32_t j_2 = j_4
                        int32_t j
                        
                        do
                            ebx.b = eax_9.b
                            ebx.b <<= esi_25.b
                            *edi_15 = ((0x7f7f s>> (7 - esi_25.b)).b & *edi_15) | ebx.b
                            
                            if (esi_25 != var_18_3)
                                esi_25 += var_20_1
                            else
                                esi_25 = var_28_3
                                edi_15 -= 1
                            
                            j = j_2
                            j_2 -= 1
                        while (j != 1)
                        edx_11 = var_1c_3
                    
                    if (edx_11 != var_18_3)
                        edx_11 += var_20_1
                    else
                        edx_11 = var_28_3
                        var_24_3 -= 1
                    
                    i = i_4 + 1
                    var_1c_3 = edx_11
                    i_4 = i
                while (i u< *var_30)
                
                ecx_2 = var_34_1
        else if (esi_1 == 2)
            char* edi_12 = ((ecx_2 - 1) u>> 2) + arg2
            char* var_24_2 = ((i - 1) u>> 2) + arg2
            void* var_28_2
            int32_t var_1c_2
            int32_t var_18_2
            void* edx_8
            void* esi_17
            
            if ((arg4 & 0x10000) == 0)
                edx_8 = (3 - ((i - 1) & 3)) * 2
                esi_17 = (3 - ((ecx_2 - 1) & 3)) * 2
                var_28_2 = nullptr
                var_18_2 = 6
                var_1c_2 = 2
            else
                edx_8 = (i * 2 - 1) & 6
                esi_17 = (ecx_2 * 2 - 1) & 6
                var_28_2 = 6
                var_18_2 = 0
                var_1c_2 = 0xfffffffe
            
            int32_t i_2 = 0
            
            if (i != 0)
                do
                    char* eax_7
                    eax_7.b = *var_24_2
                    ecx_2.b = edx_8.b
                    eax_7.b u>>= ecx_2.b
                    eax_7.b &= 3
                    char var_11_2 = eax_7.b
                    
                    if (j_4 s> 0)
                        int32_t j_5 = j_4
                        
                        while (true)
                            eax_7.b <<= esi_17.b
                            *edi_12 = ((0x3f3f s>> (6 - esi_17.b)).b & *edi_12) | eax_7.b
                            
                            if (esi_17 != var_18_2)
                                esi_17 += var_1c_2
                            else
                                esi_17 = var_28_2
                                edi_12 -= 1
                            
                            int32_t j_7 = j_5
                            j_5 -= 1
                            
                            if (j_7 == 1)
                                break
                            
                            eax_7.b = var_11_2
                    
                    if (edx_8 != var_18_2)
                        edx_8 += var_1c_2
                    else
                        edx_8 = var_28_2
                        var_24_2 -= 1
                    
                    i = i_2 + 1
                    i_2 = i
                while (i u< *var_30)
                
                ecx_2 = var_34_1
        else if (esi_1 == 4)
            char* edi_9 = ((ecx_2 - 1) u>> 1) + arg2
            char* var_28_1 = ((i - 1) u>> 1) + arg2
            int32_t var_24_1
            int32_t var_1c_1
            int32_t var_18_1
            int32_t edx_3
            int32_t esi_8
            
            if ((arg4 & 0x10000) == 0)
                edx_3 = 4 - ((i - 1) & 1) * 4
                esi_8 = 4 - ((ecx_2 - 1) & 1) * 4
                var_24_1 = 0
                var_1c_1 = 4
                var_18_1 = 4
            else
                edx_3 = (0xffffffff - (i << 2)) & 4
                esi_8 = (0xffffffff - (ecx_2 << 2)) & 4
                var_24_1 = 4
                var_1c_1 = 0
                var_18_1 = 0xfffffffc
            
            int32_t i_1 = 0
            
            if (i != 0)
                do
                    char* eax_5
                    eax_5.b = *var_28_1
                    ecx_2.b = edx_3.b
                    eax_5.b u>>= ecx_2.b
                    eax_5.b &= 0xf
                    char var_11_1 = eax_5.b
                    
                    if (j_4 s> 0)
                        int32_t j_6 = j_4
                        
                        while (true)
                            eax_5.b <<= esi_8.b
                            *edi_9 = ((0xf0f s>> (4 - esi_8.b)).b & *edi_9) | eax_5.b
                            
                            if (esi_8 != var_1c_1)
                                esi_8 += var_18_1
                            else
                                esi_8 = var_24_1
                                edi_9 -= 1
                            
                            int32_t j_8 = j_6
                            j_6 -= 1
                            
                            if (j_8 == 1)
                                break
                            
                            eax_5.b = var_11_1
                    
                    if (edx_3 != var_1c_1)
                        edx_3 += var_18_1
                    else
                        edx_3 = var_24_1
                        var_28_1 -= 1
                    
                    i = i_1 + 1
                    i_1 = i
                while (i u< *var_30)
                
                ecx_2 = var_34_1
        else
            uint32_t esi_2 = esi_1 u>> 3
            int128_t* ebx_3 = (i - 1) * esi_2 + arg2
            int32_t i_3 = 0
            
            if (i != 0)
                int128_t* edi_7 = (ecx_2 - 1) * esi_2 + arg2
                
                do
                    void var_10
                    sub_5ab990(&var_10, ebx_3, esi_2)
                    
                    if (j_4 s> 0)
                        int32_t j_3 = j_4
                        int32_t j_1
                        
                        do
                            sub_5ab990(edi_7, &var_10, esi_2)
                            edi_7 -= esi_2
                            j_1 = j_3
                            j_3 -= 1
                        while (j_1 != 1)
                    
                    i = i_3 + 1
                    ebx_3 -= esi_2
                    i_3 = i
                while (i u< *var_30)
                
                ecx_2 = var_34_1
        
        int32_t** edx_13 = var_30
        i.b = *(edx_13 + 0xb)
        *edx_13 = ecx_2
        uint32_t eax_11 = zx.d(i.b)
        
        if (i.b u>= 8)
            int32_t eax_13 = (eax_11 u>> 3) * ecx_2
            edx_13[1] = eax_13
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_13
        
        eax_2 = (eax_11 * ecx_2 + 7) u>> 3
        edx_13[1] = eax_2
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_2
}
