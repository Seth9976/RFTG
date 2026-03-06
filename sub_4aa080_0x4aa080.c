// 函数名称: sub_4aa080
// 虚拟地址: 0x4aa080
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4aa080(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* edi_1 = arg2 * 0xb4 + arg4
    void* var_83c = edi_1
    char const* const var_834
    char* var_830
    char* ebx
    
    if (arg5 s>= 0)
        char** eax_5 = arg4[arg5 * 5 + 0x11b]
        char* eax_6 = &eax_5[(arg3 * 3 + 3) * 2]
        var_834 = *eax_5
        var_830 = eax_6
        ebx = eax_6
    else
        char var_824
        ebx = &var_824
        var_824 = 4
        int32_t var_81c_1 = 0x11000000
        int32_t var_818_1 = 0
        int16_t var_814_1 = 0x201
        var_834 = "his Prestige Trade bonus"
        var_830 = &var_824
    
    int32_t eax_10
    
    if ((*(ebx + 8) & 0x10000) == 0)
        if (arg7 s> sx.d(ebx[0x11]))
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 0
        
        eax_10 = arg7
    else
        eax_10 = arg7
        
        if (eax_10 != 0 && eax_10 != 2)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 0
    
    if (arg4[6].b == 0)
        char var_40c[0x404]
        
        if (*(*(edi_1 + 0x28) + 0x20) != 0)
            int32_t var_828_1 = 0
            
            if (eax_10 s> 0)
                int32_t eax_18
                
                do
                    int32_t var_858_1 = *arg4[*(arg6 + (var_828_1 << 2)) * 5 + 0x11b]
                    int32_t var_85c_1 = *(edi_1 + 0x20)
                    sub_5a733b(&var_40c, "%s discards %s.\n")
                    (*(*(edi_1 + 0x28) + 0x20))(arg4, arg2, &var_40c, "discard")
                    eax_18 = var_828_1 + 1
                    var_828_1 = eax_18
                while (eax_18 s< arg7)
                eax_10 = arg7
        
        char* const ecx_7 = &data_83f3d3
        
        if (eax_10 != 1)
            ecx_7 = &data_85f840
        
        char const* const var_858_2 = var_834
        char* const var_85c_2 = ecx_7
        int32_t var_860_1 = eax_10
        int32_t var_864_2 = *(edi_1 + 0x20)
        sub_5a733b(&var_40c, "%s consumes %d card%s from hand using %s.\n")
        sub_4c5680(&var_40c)
        eax_10 = arg7
    
    int32_t var_828_2 = 0
    
    if (eax_10 s> 0)
        int32_t eax_46
        
        do
            int32_t var_858_3 = 1
            sub_49cc30(arg4, *(arg6 + (var_828_2 << 2)), var_828_2, 0xffffffff)
            
            if (arg4[6].b == 0)
                *(arg6 + (var_828_2 << 2))
                sub_49bb40(arg2)
                ebx = var_830
            
            int32_t ecx_10 = *(ebx + 8)
            int32_t var_840_1 = *(ebx + 0xc)
            int32_t edx_8 = 0
            bool cond:1_1
            
            if ((ecx_10 & 0x10000) != 0)
                int32_t eax_27 = var_828_2 & 0x80000001
                cond:1_1 = eax_27 != 0
                
                if (eax_27 s< 0)
                    cond:1_1 = ((eax_27 - 1) | 0xfffffffe) != 0xffffffff
            
            if ((ecx_10 & 0x10000) == 0 || not(cond:1_1))
                if ((ecx_10 & 0x1000000) != 0)
                    int32_t ecx_12
                    ecx_12.w = sx.w(ebx[0x10])
                    *(edi_1 + 0xa6) += ecx_12.w
                    edx_8.b = ebx[0x10]
                    arg4[0x781].b -= edx_8.b
                    *(edi_1 + 0xba) += sx.w(ebx[0x10])
                    
                    if (arg4[6].b == 0)
                        int32_t var_858_5 = sx.d(ebx[0x10])
                        edx_8 = sub_49bab0(arg2, edx_8)
                
                if ((*(ebx + 8) & 0x200000) != 0)
                    sub_49cf20(arg4, arg2, sx.d(ebx[0x10]), var_834)
                    edx_8.w = sx.w(var_830[0x10])
                    *(var_83c + 0xb8) += edx_8.w
                    edi_1 = var_83c
                    ebx = var_830
                
                if ((*(ebx + 8) & 0x2000000) != 0)
                    int32_t eax_41 = sx.d(ebx[0x10])
                    *(edi_1 + 0xa3) += eax_41.b
                    
                    if (arg4[6].b == 0)
                        int32_t var_858_7 = eax_41
                        sub_49b990(arg2, edx_8)
                        
                        if (arg4[6].b == 0 && var_834 != 0)
                            char const* const var_858_8 = var_834
                            int32_t var_85c_4 = eax_41
                            int32_t var_860_2 = *(edi_1 + 0x20)
                            void var_80c
                            sub_5a733b(&var_80c, "%s receives %d prestige from %s.\n")
                            char const* const var_858_9 = "verbose"
                            void* var_85c_5 = &var_80c
                            sub_4c5680("%s (%s)")
                    
                    *(edi_1 + 0xa4) = 1
                    *(edi_1 + 0xbc) += sx.w(ebx[0x10])
            
            eax_46 = var_828_2 + 1
            var_828_2 = eax_46
        while (eax_46 s< arg7)
    
    if (arg2 s< 0)
        sub_49b2a0()
        noreturn
    
    int32_t i = sx.d(*(edi_1 + 0x44))
    int32_t ecx_17 = 0
    
    if (i s< 0xffffffff)
        sub_49b2a0()
        noreturn
    
    while (i != 0xffffffff)
        i = sx.d(arg4[i * 5 + 0x11d].w)
        ecx_17 += 1
    
    int32_t eax_49 = sx.d(*(edi_1 + 0xae)) - sx.d(*(edi_1 + 0xb0)) + ecx_17
    
    if (eax_49 s< sx.d(*(edi_1 + 0xb5)))
        *(edi_1 + 0xb5) = eax_49.b
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 1
}
