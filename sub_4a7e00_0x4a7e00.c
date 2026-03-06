// 函数名称: sub_4a7e00
// 虚拟地址: 0x4a7e00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4a7e00(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_8 = eax_1
    void* edi = arg1
    int32_t edx = 0
    int32_t var_424[0x6]
    
    if (*(edi + 0x458) s> 0)
        arg1 = edi + 0x2c
        
        do
            *(edi + 0x1ec1) = edx.b
            *(arg1 + 0x34) = 0xffff
            int32_t eax_3 = sx.d(*(edi + 0x1ec0)) | 0x80
            var_424[edx] = 0
            
            if (eax_3 s>= 0)
                bool cond:1_1
                
                if (eax_3.b s< 0)
                    if (*arg1 != eax_3)
                        cond:1_1 = *(arg1 + 4) != eax_3
                        goto label_4a7e70
                    
                    *(arg1 + 0x36) += 2
                else if ((*arg1 & 0x7f) == eax_3)
                    *(arg1 + 0x36) += 2
                else
                    cond:1_1 = (*(arg1 + 4) & 0x7f) != eax_3
                label_4a7e70:
                    
                    if (not(cond:1_1))
                        *(arg1 + 0x36) += 2
            
            eax_1 = sx.d(*(edi + 0x458))
            edx += 1
            arg1 += 0xb4
        while (edx s< eax_1)
    
    int32_t var_948
    int32_t var_944[0x148]
    
    if (*(edi + 0x18) != 0)
        int32_t ebx_5 = 0
        
        if (*(edi + 0x458) s> 0)
            void* esi_1 = edi + 0x28
            
            do
                if (ebx_5 != sx.d(*(edi + 0x19)))
                    *(edi + 0x1ec1) = ebx_5.b
                    var_948 = 0
                    sub_49d720(edi, ebx_5)
                    int16_t eax_5
                    
                    if (*(esi_1 + 0xa0) s>= *(esi_1 + 0x9c))
                        (*(*esi_1 + 0xc))(edi, ebx_5, 5, &var_944, &var_948, 0, 0, 3, 0xffffffff, 0, 0)
                        
                        if (*(edi + 0x1ec3) == 0)
                            int32_t* eax_4 = *(*esi_1 + 0x10)
                            
                            if (eax_4 != 0)
                                eax_4 = eax_4(edi, ebx_5, 5)
                            
                            int32_t var_960_1 = 0
                            eax_5, arg1 =
                                sub_49d860(eax_4, 0, edi, ebx_5, 5, &var_944, &var_948, nullptr)
                        else
                            eax_5 = -1
                    else
                        eax_5, arg1 =
                            sub_49d860(&var_948, 0, edi, ebx_5, 5, &var_944, &var_948, nullptr)
                    
                    *(esi_1 + 0x38) = eax_5
                
                eax_1 = sx.d(*(edi + 0x458))
                ebx_5 += 1
                esi_1 += 0xb4
            while (ebx_5 s< eax_1)
    
    int32_t i = 0
    
    if (*(edi + 0x458) s> 0)
        int32_t* var_94c_1 = edi + 0xc8
        
        do
            if (*(edi + 0x18) == 0 || i == sx.d(*(edi + 0x19)))
                eax_1 = var_94c_1
                int32_t j = sx.d(*(eax_1 - 0x84))
                var_948 = 0
                
                if (j != 0xffffffff)
                    do
                        if (*(*(edi + j * 0x14 + 0x46c) + 6) == 1
                                && sub_4a1120(edi, j, 0, 0, 0, 0) != 0)
                            int32_t eax_8 = var_948
                            var_944[eax_8] = j
                            var_948 = eax_8 + 1
                        
                        eax_1 = j * 5 + 0x11d
                        j = sx.d(*(edi + (eax_1 << 2)))
                    while (j != 0xffffffff)
                    
                    if (var_948 != 0)
                        sub_49d720(edi, i)
                        int32_t ecx_5 = *var_94c_1
                        
                        if (ecx_5 s>= var_94c_1[-1])
                            (*(var_94c_1[-0x28] + 0xc))(edi, i, 5, &var_944, &var_948, 0, 0, 3, 
                                0xffffffff, 0, 0)
                            eax_1 = var_94c_1[-1]
                            var_94c_1[2] = eax_1
                        else
                            int32_t edx_8 = var_94c_1[-2]
                            int32_t eax_10 = *(edx_8 + (ecx_5 << 2) + 8)
                            
                            if (eax_10 s>= 0 && eax_10 s<= 0x64)
                                eax_1 = *(edx_8 + ((ecx_5 + eax_10 + 3) << 2))
                            
                            if (eax_10 s< 0 || eax_10 s> 0x64 || eax_1 s< 0 || eax_1 s> 0x64)
                                sub_49b2a0()
                                noreturn
                            
                            var_94c_1[2] = eax_1 + ecx_5 + eax_10 + 3 + 1
                        
                        bool cond:2_1 = *(edi + 0x1ec3) != 0
                        var_424[i] = 1
                        
                        if (cond:2_1)
                            goto label_4a8151
            
            var_94c_1 = &var_94c_1[0x2d]
            i += 1
        while (i s< sx.d(*(edi + 0x458)))
    
    int32_t esi_3 = 0
    
    if (*(edi + 0x458) s> 0)
        void* ebx_6 = edi + 0x28
        
        do
            int32_t eax_11 = *(*ebx_6 + 0x10)
            
            if (eax_11 != 0)
                eax_11(edi, esi_3, 0xffffffff)
            
            eax_1 = sx.d(*(edi + 0x458))
            esi_3 += 1
            ebx_6 += 0xb4
        while (esi_3 s< eax_1)
    
    int32_t esi_4 = 0
    char var_40c[0x404]
    
    if (*(edi + 0x458) s> 0)
        void* ebx_7 = edi + 0x20
        
        do
            if (var_424[esi_4] != 0)
                *(ebx_7 + 0x40) = sub_49d860(eax_1, 0, edi, esi_4, 5, &var_944, &var_948, nullptr)
            else if (*(edi + 0x18) == 0)
                int32_t var_960_2 = *ebx_7
                sub_5a733b(&var_40c, "%s does not place a world.\n")
                char const* const var_960_3 = "verbose"
                char (* var_964_4)[0x404] = &var_40c
                sub_4c5680("%s (%s)")
            
            eax_1 = sx.d(*(edi + 0x458))
            esi_4 += 1
            ebx_7 += 0xb4
        while (esi_4 s< eax_1)
    
    int32_t i_1 = 0
    
    if (*(edi + 0x458) s> 0)
        void* esi_5 = edi + 0x60
        
        do
            uint32_t eax_16 = zx.d(*esi_5)
            
            if (eax_16.w != 0xffff)
                if (*(edi + 0x18) == 0)
                    int32_t var_960_6 = **(edi + sx.d(eax_16.w) * 0x14 + 0x46c)
                    int32_t var_964_7 = *(esi_5 - 0x40)
                    sub_5a733b(&var_40c, "%s places %s.\n")
                    eax_16 = sub_4c5680(&var_40c)
                
                int32_t edx_13 = sx.d(*esi_5)
                *(esi_5 + 0x54) = 0
                sub_49f030(eax_16, edx_13, edi, i_1, 0)
            else
                if (*(edi + 0x18) == 0)
                    int32_t var_960_4 = *(esi_5 - 0x40)
                    sub_5a733b(&var_40c, "%s does not place a world.\n")
                    char const* const var_960_5 = "verbose"
                    char (* var_964_6)[0x404] = &var_40c
                    sub_4c5680("%s (%s)")
                
                *(esi_5 + 0x54) = 1
            
            i_1 += 1
            esi_5 += 0xb4
        while (i_1 s< sx.d(*(edi + 0x458)))
    
    int32_t i_2 = 0
    
    if (*(edi + 0x458) s> 0)
        void* ebx_8 = edi + 0x28
        
        do
            int32_t eax_17 = *(*ebx_8 + 8)
            
            if (eax_17 != 0)
                eax_17(edi, i_2, 3, sx.d(*(ebx_8 + 0x38)))
            
            i_2 += 1
            ebx_8 += 0xb4
        while (i_2 s< sx.d(*(edi + 0x458)))
    
    char* i_3 = nullptr
    
    if (*(edi + 0x458) s> 0)
        int16_t* esi_6 = edi + 0x60
        
        do
            *(edi + 0x1ec1) = i_3.b
            
            if (*esi_6 == 0xffff)
                sub_4a43c0(i_3, 0)
                
                if (*(edi + 0x1ec3) != 0)
                    goto label_4a8151
            
            int32_t eax_18 = sx.d(*esi_6)
            int32_t j_1 = sub_4a5400(eax_18, 0xffffffff, i_3, edi, eax_18, 0, 0)
            int32_t ecx_21 = sx.d(*esi_6)
            
            do
                j_1 = sub_4a5e70(j_1, i_3, edi, ecx_21)
            while (j_1 != 0)
            
            if (*(edi + 0x1ec3) != j_1.b)
                goto label_4a8151
            
            *esi_6 = 0xffff
            i_3 = &i_3[1]
            esi_6 = &esi_6[0x5a]
        while (i_3 s< sx.d(*(edi + 0x458)))
    
    sub_4a79a0(edi)
    
    if (*(edi + 0x1ec3) != 0)
    label_4a8151:
        sub_5a6aba(var_8 ^ &__saved_ebp)
        return 0
    
    sub_49d660(edi)
    sub_4ae980()
    sub_49d1f0()
    sub_5a6aba(var_8 ^ &__saved_ebp)
    return 1
}
