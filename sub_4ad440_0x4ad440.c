// 函数名称: sub_4ad440
// 虚拟地址: 0x4ad440
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4ad440(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t result = sx.d(arg1[0x116].b)
    int32_t edi = 0
    int32_t var_b4[0x2]
    int32_t var_20[0x6]
    
    if (result s> 0)
        int32_t var_3d8_1 = 0
        void var_ac
        void* ecx = &var_ac
        void* var_3dc_1 = arg1 + 0x46
        
        do
            *ecx = 0
            *(ecx + 4) = 0
            *(ecx + 8) = 0
            var_20[edi] = 0
            *(ecx + 0xc) = 0
            
            for (int32_t i = sx.d(*var_3dc_1); i != 0xffffffff; i = sx.d(arg1[i * 5 + 0x11d].w))
                if ((arg1[i * 5 + 0x11a].w & 0xe000) != 0)
                    uint32_t edx_4 = zx.d(arg1[i * 5 + 0x11a].w)
                    var_20[edi] += 1
                    int32_t edx_6 = (edx_4 u>> 0xd) + var_3d8_1
                    var_b4[edx_6] += 1
            
            result = sx.d(arg1[0x116].b)
            var_3dc_1 += 0xb4
            var_3d8_1 += 6
            edi += 1
            ecx += 0x18
        while (edi s< result)
    
    int32_t i_1 = 0
    int32_t i_2 = 0
    void var_3d4
    void var_3d0
    
    if (result s> 0)
        void* j_2 = &arg1[8]
        void* var_3e0_1 = nullptr
        void* j_4 = j_2
        
        do
            void* j = 2
            void* j_1 = 2
            
            do
                int32_t edx_8 = sx.d(arg1[0x116].b)
                result = 0
                int32_t var_3e8_1 = 1
                
                if (edx_8 s> 0)
                    j_2 = &(&__saved_ebp)[j - 0x2c]
                    
                    while (true)
                        if (i_1 != result)
                            i_1 = i_2
                            
                            if (*j_2 s>= var_b4[var_3e0_1 + j])
                                var_3e8_1 = 0
                        
                        result += 1
                        j_2 += 0x18
                        
                        if (result s>= edx_8)
                            break
                        
                        j = j_1
                
                if (edx_8 s<= 0 || var_3e8_1 != 0)
                    void* var_400_1 = &var_3d4
                    int32_t var_404_1 = 5
                    j_2 = sub_49dea0(i_1, edx_8, j_2, arg1)
                    result = 0
                    void* j_3 = j_2
                    int32_t result_3 = 0
                    
                    if (j_2 s> 0)
                        do
                            j_2 = j_1
                            void* ebx_2 = *(&var_3d0 + (result << 3))
                            int32_t var_404_2
                            void* var_400_2
                            
                            if (j_2 == 2)
                                j_2 = *(ebx_2 + 8) & 0x40000
                                
                                if (j_2 != 0)
                                    var_400_2 = *arg1[sx.d(*(&var_3d4 + (result << 3))) * 5 + 0x11b]
                                    var_404_2 = sx.d(*(ebx_2 + 0x10))
                                label_4ad63f:
                                    sub_49cf20(arg1, i_1, var_404_2, var_400_2)
                                    j_2.w = sx.w(*(ebx_2 + 0x10))
                                    *(j_4 + 0x98) += j_2.w
                                    result = result_3
                            else
                                int32_t j_5
                                
                                if (j_2 == 3)
                                    j_5 = *(ebx_2 + 8) & 0x80000
                                label_4ad621:
                                    j_2 = j_5
                                    
                                    if (j_2 != 0)
                                        var_400_2 = *arg1[sx.d(*(&var_3d4 + (result << 3))) * 5 + 0x11b]
                                        var_404_2 = sx.d(*(ebx_2 + 0x10))
                                        goto label_4ad63f
                                else if (j_2 == 4)
                                    j_5 = *(ebx_2 + 8) & 0x100000
                                    goto label_4ad621
                            result += 1
                            result_3 = result
                        while (result s< j_3)
                
                j = j_1 + 1
                j_1 = j
            while (j s<= 5)
            
            j_4 += 0xb4
            var_3e0_1 += 6
            i_1 += 1
            i_2 = i_1
        while (i_1 s< sx.d(arg1[0x116].b))
    
    int32_t ecx_7 = sx.d(arg1[0x116].b)
    int32_t edi_3 = 0
    
    if (ecx_7 s> 0)
        void* result_2 = &arg1[8]
        
        do
            result = 0
            int32_t edx_13 = 1
            
            if (ecx_7 s> 0)
                do
                    if (edi_3 != result && var_20[result] s>= var_20[edi_3])
                        edx_13 = 0
                    
                    result += 1
                while (result s< ecx_7)
            
            if (ecx_7 s<= 0 || edx_13 != 0)
                void* var_400_3 = &var_3d4
                int32_t var_404_3 = 5
                result = sub_49dea0(edi_3, edx_13, ecx_7, arg1)
                int32_t ecx_8 = 0
                int32_t result_1 = result
                int32_t var_3e4_1 = 0
                
                if (result s> 0)
                    do
                        void* ebx_5 = *(&var_3d0 + (ecx_8 << 3))
                        result = *(ebx_5 + 8) & 0x10000
                        
                        if (result != 0)
                            sub_49cf20(arg1, edi_3, sx.d(*(ebx_5 + 0x10)), 
                                *arg1[sx.d(*(&var_3d4 + (ecx_8 << 3))) * 5 + 0x11b])
                            result = result_2
                            *(result + 0x98) += sx.w(*(ebx_5 + 0x10))
                            ecx_8 = var_3e4_1
                        
                        ecx_8 += 1
                        var_3e4_1 = ecx_8
                    while (ecx_8 s< result_1)
            
            ecx_7 = sx.d(arg1[0x116].b)
            result_2 += 0xb4
            edi_3 += 1
        while (edi_3 s< ecx_7)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
