// 函数名称: sub_516bc0
// 虚拟地址: 0x516bc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_516bc0(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, float arg5, int32_t arg6, float arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    long double x87_r7 = float.t(1)
    float var_3c = fconvert.s(x87_r7)
    int32_t** ebx = *(arg1 + 0x2c)
    float var_40 = fconvert.s(x87_r7)
    float var_38 = fconvert.s(x87_r7)
    long double x87_r6 = float.t(0)
    
    if (arg4 == 0)
        int32_t* i = ebx[1]
        
        while (i != 0)
            void** i_1 = i
            
            if (i == 0)
                sub_4c5870("iter != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x1a1, 
                    "XList<struct AnimSet *>::GetNextIter")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void** ecx_1 = *i
            int32_t eax_4 = ecx_1[8]
            i = i[1]
            
            if (eax_4 != 2 && eax_4 != 4)
                int32_t edx = sub_4e7520(&ebx[1], sub_5154b0(ebx, edx, ecx_1), i_1)
    else if (arg4 == 1)
        long double x87_r6_1 = fconvert.t(arg5)
        x87_r6_1 - x87_r7
        int32_t eax_3
        eax_3.w = (x87_r6_1 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_3:1.b & 0x41) != 0)
            sub_4c5870("blendTime > 0.0f", &data_83f3d3, "Animation.cpp", 0x3ea, "AnimationPlay")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t ecx
        int32_t var_bc_1 = ecx
        sub_515610(ebx, fconvert.s(x87_r7))
        var_3c = fconvert.s(fconvert.t(data_8c4d34) / fconvert.t(arg5))
        var_40 = fconvert.s(float.t(0))
    else if (arg4 == 4)
        var_3c = fconvert.s(x87_r6)
        var_38 = fconvert.s(x87_r6)
        var_40 = fconvert.s(x87_r7)
    else if (arg4 != 3)
        if (arg4 != 2)
            sub_4c5870("Halt", &data_83f3d3, "Animation.cpp", 0x402, "AnimationPlay")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        var_3c = fconvert.s(x87_r6)
        var_38 = fconvert.s(x87_r7)
    else
        var_3c = fconvert.s(x87_r7)
        var_40 = fconvert.s(fconvert.t(arg7))
    
    void* eax_10 = data_27e7fcc
    
    if (eax_10 == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* esi_1 = *(eax_10 + 8)
    esi_1[3] += 1
    
    if (*esi_1 == 0)
        sub_518440(esi_1)
    
    uint64_t (* edi_1)[0x2] = *esi_1
    *esi_1 = *edi_1
    *(edi_1 + 0xc) = arg2
    edi_1[1][0].d = arg3
    *(edi_1 + 0x14) = fconvert.s(fconvert.t(var_40))
    (*edi_1)[3].d = fconvert.s(fconvert.t(var_3c))
    *(edi_1 + 0x1c) = arg6
    edi_1[2][0].d = arg4
    *(edi_1 + 0x24) = fconvert.s(fconvert.t(var_38))
    *(edi_1 + 0xac) = 0
    uint64_t (* var_44)[0x2] = edi_1
    uint64_t (* var_48)[0x2] = edi_1
    edi_1[0xb][0].d = 0
    
    if (arg4 == 2)
        void* eax_15 = sub_515a00(edi_1, ebx)
        int32_t ecx_4 = ebx[0x22]
        
        if (ecx_4 s<= 0)
            (*edi_1)[5].d = ebx[0x2b]
            ebx[0x2b] += 1
        else
            ebx[0x22] = ecx_4 - 1
            (*edi_1)[5].d = ebx[ecx_4 + 0x22]
        
        int32_t ecx_7 = (*edi_1)[5].d
        
        if (ecx_7 s>= 8)
            sub_4c5870("pAnimSet->baseInverseIndex < MAX_ADDATIVE_ANIMATIONS", &data_83f3d3, 
                "Animation.cpp", 0x423, "AnimationPlay")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t* eax_17 = *(eax_15 + 8)
        int32_t esi_2 = eax_17[1]
        int32_t* eax_19
        int32_t edx_4
        eax_19, edx_4 = sub_4f43d0()
        void* ecx_9 = &ebx[ecx_7 * 3 + 7]
        *ecx_9 = eax_19
        *(ecx_9 + 4) = 0
        *(ecx_9 + 8) = esi_2
        
        if (esi_2 s< 0)
            sub_4c5870("size_arg >= 0 && size_arg <= mSizeReserved", &data_83f3d3, 
                "c:\ax2010\engine\xArray.h", 0x62, "XArray<struct BoneTransform>::SetSize")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (esi_2 s> 0)
            ecx_9, edx_4 = sub_5abfc0(eax_19, 0, esi_2 * 0x2c)
            ebx[ecx_7 * 3 + 8] += esi_2
        
        int32_t ebx_3 = 0
        
        if (esi_2 s> 0)
            int32_t var_40_1 = 0
            
            while (true)
                void var_34
                void* var_bc_5 = &var_34
                int32_t var_c0_1 = ebx_3
                void* var_c4_2 = ecx_9
                sub_515b70(eax_17, edi_1, fconvert.s(fconvert.t(arg7)), edx_4, ecx_9)
                float var_ac
                float* eax_22
                eax_22, edx_4 = sub_515db0(&var_ac, &var_34)
                void var_7c
                __builtin_memcpy(&var_7c, eax_22, 0x2c)
                
                if (ebx_3 s< 0 || ebx_3 s>= ebx[ecx_7 * 3 + 8])
                    sub_4c5870("index >= 0 && index < mSize", &data_83f3d3, 
                        "c:\ax2010\engine\xArray.h", 0xb5, "XArray<struct BoneTransform>::operator []")
                    
                    if (IsDebuggerPresent() != 1)
                        sub_4c5a30()
                        noreturn
                    
                    breakpoint
                
                ebx_3 += 1
                edi_1, ecx_9 = __builtin_memcpy(ebx[ecx_7 * 3 + 7] + var_40_1, &var_7c, 0x2c)
                var_40_1 += 0x2c
                
                if (ebx_3 s< esi_2)
                    continue
                
                edi_1 = var_44
                break
    
    void* eax_26 = sub_515a00(edi_1, ebx)
    float var_44_1 = fconvert.s(float.t(**(eax_26 + 8)) / fconvert.t(*eax_26))
    long double x87_r6_2 = float.t(1)
    *edi_1 = fconvert.s(x87_r6_2 / x87_r6_2)
    long double x87_r7_13 = float.t(0)
    
    if (*(edi_1 + 0x1c) == 2)
        *edi_1 = fconvert.s(x87_r7_13)
    
    *(edi_1 + 4) = fconvert.s(x87_r7_13)
    (*edi_1)[1].d = fconvert.s(x87_r7_13)
    sub_518190(&ebx[1], &var_48)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
}
