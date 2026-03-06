// 函数名称: sub_4b3660
// 虚拟地址: 0x4b3660
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __fastcallsub_4b3660(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* esi = arg1
    int32_t eax_2 = esi[3]
    int32_t i_1 = 0
    esi[5] = eax_2
    esi[4] = eax_2
    int32_t* eax_3 = *esi
    int32_t* result_1 = nullptr
    
    if (eax_3 != 0)
        if (*eax_3 != 0xffffffff)
            arg1.b = *eax_3
            *(esi + 0x45a) = arg1.b
        
        esi[0x116].b = eax_3[1].b
        arg1.b = eax_3[2].b
        *(esi + 0x459) = arg1.b
        
        if (eax_3[3] != 0xffffffff)
            *(esi + 0x45b) = eax_3[3].b
        
        eax_3.b = eax_3[4].b
        esi[0x117].b = eax_3.b
    
    eax_3.b = esi[0x116].b
    arg1.b = eax_3.b
    arg1.b *= 2
    eax_3.b += arg1.b
    eax_3.b *= 2
    eax_3.b *= 2
    esi[6].b = 0
    esi[0x781].b = eax_3.b
    
    if (*(esi + 0x45a) == 3)
        eax_3.b += 5
        esi[0x781].b = eax_3.b
    
    *(esi + 0x1ec2) = 0
    esi[0x7b0].w = 0xff
    *(esi + 0x1eb6) = 0
    *(esi + 0x1eba) = 0
    *(esi + 0x1ebe) = 0
    *(esi + 0x1ec3) = 0
    esi[0x118].w = 0
    void* eax_4 = esi + 0x1e2e
    int32_t i_8 = 0x14
    int32_t i
    
    do
        *(eax_4 - 0x28) = 0
        *eax_4 = 0
        eax_4 += 2
        i = i_8
        i_8 -= 1
    while (i != 1)
    int32_t* result = *esi
    *(esi + 0x1e6a) = 0
    esi[0x7ad].b = 1
    
    if (result == 0)
    label_4b378e:
        
        if (data_26a44ac s> 0)
            void* ebx_2 = &data_2691ca8
            
            do
                result = sub_4b3560(result, esi, 0, ebx_2)
                i_1 += 1
                ebx_2 += 0x128
            while (i_1 s< data_26a44ac)
    else
        result = result[6]
        
        if (result s<= 0)
            goto label_4b378e
        
        int32_t ebx_1 = 0x1c
        i_1 = 0
        
        do
            int32_t* eax_5 = *esi
            sub_4b3560(eax_5, esi, 1, *(eax_5 + ebx_1) * 0x128 + &data_2691ca8)
            i_1 += 1
            ebx_1 += 4
        while (i_1 s< *(*esi + 0x18))
    
    bool cond:1 = esi[0x116].b s<= 0
    int32_t var_60 = 0
    
    if (not(cond:1))
        result = &esi[0xb]
        int32_t ecx_5
        int32_t i_2
        
        do
            void* ecx_3 = result + 0x63
            int32_t j_2 = 0x14
            int32_t j
            
            do
                *(ecx_3 - 0x28) = 0
                *ecx_3 = 0
                *(ecx_3 - 0x14) = 0
                ecx_3 += 1
                j = j_2
                j_2 -= 1
            while (j != 1)
            result[4].w = j_2.w
            result[0xd].w = 0xffff
            result[2] = 0xffffffff
            *result = 0xffffffff
            result[3] = 0xffffffff
            result[1] = 0xffffffff
            void* ecx_4 = &result[9]
            int32_t j_3 = 8
            int32_t j_1
            
            do
                *(ecx_4 - 0x10) = 0xffff
                *ecx_4 = 0xffff
                ecx_4 += 2
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
            result[0x23] = 0
            result[0x24].w = 0
            *(result + 0x86) = 0
            *(result + 0x87) = 0
            ecx_5 = var_60
            *(result + 0x36) = j_3
            *(result + 0x3a) = j_3.b
            *(result + 0x77) = j_3.w
            result[0x1f] = j_3
            *(result + 0x7a) = j_3.w
            result[0x20].b = j_3.b
            *(result + 0x82) = j_3
            i_2 = sx.d(esi[0x116].b)
            result = &result[0x2d]
            var_60 = ecx_5 + 1
        while (ecx_5 + 1 s< i_2)
    
    if (*esi != 0)
        sub_4b33f0(esi)
    
    result.b = *(esi + 0x45a)
    
    if (result.b s> 0 && result.b s< 4 && *(esi + 0x45b) == 0)
        int32_t ecx_7 = 0
        int32_t eax_6
        
        if (result.b != 1)
            int32_t edx_4
            edx_4.b = result.b != 2
            eax_6 = ((edx_4 - 1) & 0xfffffffd) + 0xb
        else
            eax_6 = 5
        
        int32_t var_5c[0x15]
        
        if (eax_6 s>= 0)
            do
                var_5c[ecx_7] = ecx_7
                ecx_7 += 1
            while (ecx_7 s<= eax_6)
        
        void* eax_9 = *esi
        var_60 = 0
        int32_t* eax_10
        
        if (eax_9 == 0)
            eax_10 = nullptr
        else
            eax_10 = *(eax_9 + 0x2420)
            result_1 = eax_10
        
        if (eax_10 s> 0)
            int32_t* edx_5 = 0x2424
            int32_t* i_7 = eax_10
            int32_t* i_3
            
            do
                eax_10 = *(edx_5 + *esi)
                
                if (eax_10 s<= 0xb)
                    *(esi + (eax_10 << 1) + 0x1e06) = 1
                    *(esi + (*(*esi + edx_5) << 1) + 0x1e2e) = 1
                    eax_10 = nullptr
                    
                    if (ecx_7 s> 0)
                        int32_t edi_2 = *(edx_5 + *esi)
                        
                        do
                            if (var_5c[eax_10] == edi_2)
                                int32_t ebx_3 = (&var_60)[ecx_7]
                                ecx_7 -= 1
                                var_5c[eax_10] = ebx_3
                            
                            eax_10 += 1
                        while (eax_10 s< ecx_7)
                    
                    var_60 += 1
                
                edx_5 = &edx_5[1]
                i_3 = i_7
                i_7 -= 1
            while (i_3 != 1)
        
        if (var_60 s< 4)
            int32_t i_9 = 4 - var_60
            int32_t i_4
            
            do
                int32_t eax_16 = esi[3] * 0x19660d + 0x3c6ef35f
                esi[3] = eax_16
                int32_t temp1_1 = mods.dp.d(sx.q(eax_16 u>> 0x10 & 0x7fff), ecx_7)
                ecx_7 -= 1
                i_4 = i_9
                i_9 -= 1
                int32_t edx_8 = (&__saved_ebp)[temp1_1 - 0x16]
                *(esi + (edx_8 << 1) + 0x1e06) = 1
                *(esi + (edx_8 << 1) + 0x1e2e) = 1
                (&__saved_ebp)[temp1_1 - 0x16] = var_5c[ecx_7]
            while (i_4 != 1)
        
        eax_10.b = *(esi + 0x45a)
        int32_t ecx_8 = 0
        int32_t edx_10
        
        if (eax_10.b != 1)
            int32_t edx_11
            edx_11.b = eax_10.b != 2
            edx_10 = edx_11 * 2 + 0x11
        else
            edx_10 = 0xf
        
        if (edx_10 s>= 0xc)
            int32_t eax_20 = 0xc
            
            do
                var_5c[ecx_8] = eax_20
                eax_20 += 1
                ecx_8 += 1
            while (eax_20 s<= edx_10)
        
        result = result_1
        var_60 = 0
        
        if (result s> 0)
            int32_t** edx_12 = 0x2424
            int32_t* var_64_1 = result
            int32_t* i_5
            
            do
                result = *(edx_12 + *esi)
                
                if (result s>= 0xc)
                    *(esi + (result << 1) + 0x1e06) = 1
                    *(esi + (*(*esi + edx_12) << 1) + 0x1e2e) = 1
                    result = nullptr
                    
                    if (ecx_8 s> 0)
                        int32_t edi_4 = *(edx_12 + *esi)
                        
                        do
                            if (var_5c[result] == edi_4)
                                int32_t ebx_4 = (&var_60)[ecx_8]
                                ecx_8 -= 1
                                var_5c[result] = ebx_4
                            
                            result += 1
                        while (result s< ecx_8)
                    
                    var_60 += 1
                
                edx_12 = &edx_12[1]
                i_5 = var_64_1
                var_64_1 -= 1
            while (i_5 != 1)
        
        if (var_60 s< 2)
            int32_t i_10 = 2 - var_60
            int32_t i_6
            
            do
                int32_t eax_26 = esi[3] * 0x19660d + 0x3c6ef35f
                esi[3] = eax_26
                int32_t temp1_2 = mods.dp.d(sx.q(eax_26 u>> 0x10 & 0x7fff), ecx_8)
                ecx_8 -= 1
                i_6 = i_10
                i_10 -= 1
                result = &(&__saved_ebp)[temp1_2 - 0x16]
                int32_t edx_15 = *result
                *(esi + (edx_15 << 1) + 0x1e06) = 1
                *(esi + (edx_15 << 1) + 0x1e2e) = 1
                *result = var_5c[ecx_8]
            while (i_6 != 1)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
