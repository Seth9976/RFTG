// 函数名称: sub_565580
// 虚拟地址: 0x565580
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_565580(int32_t arg1, int32_t* arg2, char*** arg3, char** arg4, int32_t* arg5, char* arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?_Init@?$numpunct@G@std@@IAEXABV_Locinfo@2@_N@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_b8 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    char*** var_7c = arg3
    int32_t var_8_1 = 0
    char* const eax_4 = arg6
    
    if (eax_4 == 0)
        eax_4 = &data_83f3d3
    
    int32_t edx = *arg2
    char** lpPerformanceCount = arg4
    int32_t var_c0 = edx
    char* const var_c4 = eax_4
    char* lpPerformanceCount_17
    sub_4c4a50(&lpPerformanceCount_17, "%s-%s-%d.png")
    var_8_1.b = 1
    char* const eax_5 = arg6
    
    if (eax_5 == 0)
        eax_5 = &data_83f3d3
    
    int32_t ecx = *arg2
    lpPerformanceCount = arg4
    int32_t var_c0_1 = ecx
    char* const var_c4_1 = eax_5
    char* var_90
    sub_4c4a50(&var_90, "%s-%s-%d.texture")
    char* var_70
    __builtin_memset(&var_70, 0, 0x30)
    var_8_1.b = 3
    int32_t var_40 = 1
    int32_t var_30 = 0x1000
    int32_t eax_6 = sub_5540b0(1, 0x1000)
    char** lpPerformanceCount_2 = sub_554170(1, 0, 0x1000)
    char** lpPerformanceCount_20 = lpPerformanceCount_2
    char** lpPerformanceCount_3 = sub_4cce80(lpPerformanceCount_2)
    lpPerformanceCount = lpPerformanceCount_2
    sub_5abfc0(lpPerformanceCount_3, 0, lpPerformanceCount)
    char* edx_1 = var_90
    
    if (edx_1 == 0)
        edx_1 = &data_83f3d3
    
    char** lpPerformanceCount_4 = sub_509140(3, edx_1)
    char* var_78
    lpPerformanceCount = &var_78
    QueryPerformanceCounter(lpPerformanceCount)
    int32_t edx_2 = arg2[4]
    char* ecx_1 = var_78
    float var_24 = fconvert.s(fconvert.t(arg2[3]))
    char* var_88 = nullptr
    lpPerformanceCount = &var_88
    int32_t var_20 = edx_2
    int32_t ebx_1 = 0
    int32_t var_84_1 = 0
    int32_t* var_64
    sub_567e60(&var_64, lpPerformanceCount)
    int32_t* eax_8 = *arg5
    void* ecx_3 = &eax_8[arg5[1]]
    lpPerformanceCount = sub_564210
    int32_t var_74 = 0
    sub_5687e0(eax_8, ecx_3, (ecx_3 - eax_8) s>> 2, lpPerformanceCount)
    int32_t eax_9 = arg5[1]
    
    if (eax_9 s> 0)
        while (true)
            if (ebx_1 s< 0 || ebx_1 s>= eax_9)
                lpPerformanceCount = "XArray<struct XAsset *>::GetAt"
                sub_4c5870("index >= 0 && index < mSize", &data_83f3d3, "c:\ax2010\engine\xArray.h", 
                    0xae, lpPerformanceCount)
                
                if (IsDebuggerPresent() != 1)
                    sub_4c5a30()
                    noreturn
                
                breakpoint
            
            int32_t* esi_1 = *(*arg5 + (ebx_1 << 2))
            int32_t eax_11 = esi_1[1]
            int32_t eax_12
            
            if (eax_11 != 3)
                if (eax_11 == 0x12)
                    lpPerformanceCount = &var_70
                    int80_t st0_1
                    st0_1, eax_12 = sub_564e40(eax_11, &var_70, esi_1, lpPerformanceCount)
                    goto label_56575a
                
                char** lpPerformanceCount_14 = esi_1[8]
                
                if (lpPerformanceCount_14 == 0)
                    lpPerformanceCount_14 = &data_83f3d3
                
                lpPerformanceCount = lpPerformanceCount_14
                sub_4c5680("AtlasMaker: I don't handle this asset type yet %s")
            else
                lpPerformanceCount = &var_70
                eax_12 = sub_5648a0(esi_1, lpPerformanceCount)
            label_56575a:
                
                if (eax_12 == 2)
                    var_74 += 1
                else if (eax_12 == 1)
                    char*** eax_13 = var_7c
                    int32_t ecx_5 = eax_13[1]
                    
                    if (ecx_5 s>= eax_13[2])
                        lpPerformanceCount = "XArray<struct XAsset *>::Append"
                        sub_4c5870("mSize < mSizeReserved", &data_83f3d3, "c:\ax2010\engine\xArray.h", 
                            0x96, lpPerformanceCount)
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    void** ecx_6 = &(*eax_13)[ecx_5]
                    
                    if (ecx_6 != 0)
                        *ecx_6 = esi_1
                    
                    eax_13[1] += 1
            eax_9 = arg5[1]
            ebx_1 += 1
            
            if (ebx_1 s>= eax_9)
                break
            
            continue
        
        if (var_74 s> 0)
            char** lpPerformanceCount_1
            uint32_t var_74_1
            char** lpPerformanceCount_8
            uint32_t var_4c
            char** lpPerformanceCount_19
            
            if (data_30785f3 == 0)
                lpPerformanceCount_8 = 8
                var_74_1 = var_4c
                
                if (var_4c s<= 8)
                    var_74_1 = 8
                
                lpPerformanceCount_1 = lpPerformanceCount_19
                
                if (lpPerformanceCount_19 s<= 8)
                    lpPerformanceCount_1 = lpPerformanceCount_8
            else
                uint32_t ecx_7 = var_4c
                
                if (ecx_7 s< 0)
                    lpPerformanceCount = "CeilingPowerOf2"
                    sub_4c5870("(n & 0x80000000) == 0", &data_83f3d3, 
                        "c:\ax2010\engine\MathFunctions.cpp", 0xae, lpPerformanceCount)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (ecx_7 u< 1)
                label_5658a0:
                    int32_t edx_8
                    
                    if (ecx_7 != 0)
                        edx_8 = 1 << sub_4ccce0(ecx_7)
                    else
                        edx_8 = 0
                    
                    ecx_7 = edx_8 * 2
                else if (ecx_7 != 1 && (ecx_7 & (ecx_7 - 1)) != 0)
                    goto label_5658a0
                
                var_74_1 = ecx_7
                lpPerformanceCount_8 = lpPerformanceCount_19
                
                if (lpPerformanceCount_8 s< 0)
                    lpPerformanceCount = "CeilingPowerOf2"
                    sub_4c5870("(n & 0x80000000) == 0", &data_83f3d3, 
                        "c:\ax2010\engine\MathFunctions.cpp", 0xae, lpPerformanceCount)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (lpPerformanceCount_8 u< 1)
                label_565901:
                    
                    if (lpPerformanceCount_8 != 0)
                        lpPerformanceCount_8 = (1 << sub_4ccce0(lpPerformanceCount_8)) * 2
                    else
                        lpPerformanceCount_8 = nullptr
                else if (lpPerformanceCount_8 != 1
                        && (lpPerformanceCount_8 & (lpPerformanceCount_8 - 1)) != 0)
                    goto label_565901
                
                lpPerformanceCount_1 = lpPerformanceCount_8
            lpPerformanceCount = lpPerformanceCount_8
            char* lpPerformanceCount_9 = lpPerformanceCount_17
            var_7c = &lpPerformanceCount
            lpPerformanceCount = lpPerformanceCount_9
            char* lpPerformanceCount_21 = lpPerformanceCount_17
            
            if (lpPerformanceCount_21 != 0 && *lpPerformanceCount_21 != 0)
                if (*(lpPerformanceCount_21 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                *(lpPerformanceCount_21 - 0xc) += 1
            
            int32_t* eax_25
            int32_t edx_11
            eax_25, edx_11 = sub_50a1e0(&var_7c, lpPerformanceCount)
            var_8_1.b = 4
            char* const ecx_10 = *eax_25
            
            if (ecx_10 == 0)
                ecx_10 = &data_83f3d3
            
            char* lpPerformanceCount_18
            lpPerformanceCount = &lpPerformanceCount_18
            sub_51ece0(&lpPerformanceCount_18, edx_11, ecx_10, lpPerformanceCount)
            var_8_1.b = 6
            char*** eax_27 = var_7c
            
            if (eax_27 != 0 && *eax_27 != 0)
                if (eax_27[-4] != 0xfafafafa)
                    lpPerformanceCount = "XStringMagicDataStructFromCharPtr"
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, lpPerformanceCount)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp0_1 = eax_27[-3]
                eax_27[-3] -= 1
                
                if (temp0_1 == 1)
                    void* edi_4 = data_26a44e4
                    char** lpPerformanceCount_10 = &eax_27[-1][4]
                    
                    if (edi_4 == 0)
                        sub_4f4250()
                        edi_4 = data_26a44e4
                    
                    int32_t edx_12 = 0
                    int32_t* edi_5
                    
                    while (true)
                        if (lpPerformanceCount_10 s<= 1 << (edx_12.b + 4))
                            edi_5 = edi_4 + edx_12 * 0x14
                            break
                        
                        edx_12 += 1
                        
                        if (edx_12 s>= 7)
                            edi_5 = edi_4 + 0x8c
                            break
                    
                    lpPerformanceCount = lpPerformanceCount_10
                    sub_4f4430(&eax_27[-4], edi_5, lpPerformanceCount)
            
            char* lpPerformanceCount_5 = lpPerformanceCount_18
            
            if (lpPerformanceCount_5 == 0)
                lpPerformanceCount_5 = &data_83f3d3
            
            lpPerformanceCount = lpPerformanceCount_5
            sub_4ffc50(lpPerformanceCount)
            char* lpPerformanceCount_6 = lpPerformanceCount_18
            
            if (lpPerformanceCount_6 == 0)
                lpPerformanceCount_6 = &data_83f3d3
            
            uint32_t var_a4 = var_74_1
            int32_t var_98 = var_40
            lpPerformanceCount = lpPerformanceCount_6
            int32_t var_9c = eax_6
            char** lpPerformanceCount_16 = lpPerformanceCount_3
            
            if (sub_594880(&lpPerformanceCount_16, lpPerformanceCount) == 0)
                char* lpPerformanceCount_7 = lpPerformanceCount_18
                
                if (lpPerformanceCount_7 == 0)
                    lpPerformanceCount_7 = &data_83f3d3
                
                lpPerformanceCount = lpPerformanceCount_7
                sub_4c5680("AtlasMaker: failed to png write %s")
            
            if (lpPerformanceCount_3 != 0)
                lpPerformanceCount = lpPerformanceCount_3
                _aligned_free_base(lpPerformanceCount)
            
            char* var_58
            int32_t i
            
            while (i != 0)
                sub_5681a0(&var_58)
                
                if (lpPerformanceCount_1 != 0)
                    lpPerformanceCount = lpPerformanceCount_1
                    _aligned_free_base(lpPerformanceCount)
            
            if (*lpPerformanceCount_4 != 0)
                if (lpPerformanceCount_4[7] != 0)
                    lpPerformanceCount = "AssetCatalogPurgeAsset"
                    sub_4c5870("pAsset->lockCount == 0", &data_83f3d3, "AssetCatalog.cpp", 0x32, 
                        lpPerformanceCount)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                sub_520bc0(lpPerformanceCount_4)
                *lpPerformanceCount_4 = nullptr
            
            lpPerformanceCount = nullptr
            sub_5094d0(lpPerformanceCount_4, 1, lpPerformanceCount.b)
            
            if (lpPerformanceCount_4[1] != 3)
                lpPerformanceCount = "TextureGetDef"
                sub_4c5870("assetPtr->assetType == ASSET_TYPE_TEXTURE", &data_83f3d3, 
                    "c:\ax2010\engine\Texture.h", 0x83, lpPerformanceCount)
                
                if (IsDebuggerPresent() != 1)
                    sub_4c5a30()
                    noreturn
                
                breakpoint
            
            lpPerformanceCount = lpPerformanceCount_4
            void* eax_38 = *sub_466320(lpPerformanceCount)
            lpPerformanceCount = lpPerformanceCount_4
            *(eax_38 + 0x28) = ecx_1
            sub_4cf840()
            var_8_1.b = 3
            char* lpPerformanceCount_22 = lpPerformanceCount_18
            
            if (lpPerformanceCount_22 != 0 && *lpPerformanceCount_22 != 0)
                if (*(lpPerformanceCount_22 - 0x10) != 0xfafafafa)
                    lpPerformanceCount = "XStringMagicDataStructFromCharPtr"
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, lpPerformanceCount)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp1_1 = *(lpPerformanceCount_22 - 0xc)
                *(lpPerformanceCount_22 - 0xc) -= 1
                
                if (temp1_1 == 1)
                    void* edi_7 = data_26a44e4
                    char** lpPerformanceCount_11 = *(lpPerformanceCount_22 - 4) + 0x10
                    
                    if (edi_7 == 0)
                        sub_4f4250()
                        edi_7 = data_26a44e4
                    
                    int32_t edx_15 = 0
                    int32_t* edi_8
                    
                    while (true)
                        if (lpPerformanceCount_11 s<= 1 << (edx_15.b + 4))
                            edi_8 = edi_7 + edx_15 * 0x14
                            break
                        
                        edx_15 += 1
                        
                        if (edx_15 s>= 7)
                            edi_8 = edi_7 + 0x8c
                            break
                    
                    lpPerformanceCount = lpPerformanceCount_11
                    sub_4f4430(&lpPerformanceCount_22[0xfffffff0], edi_8, lpPerformanceCount)
            
            lpPerformanceCount = &var_58
            var_8_1.b = 8
            sub_568260(lpPerformanceCount)
            lpPerformanceCount = &var_64
            var_8_1.b = 7
            sub_567fd0(lpPerformanceCount)
            lpPerformanceCount = &var_70
            var_8_1.b = 2
            sub_567d40(lpPerformanceCount)
            var_8_1.b = 1
            char* eax_42 = var_90
            
            if (eax_42 != 0 && *eax_42 != 0)
                if (*(eax_42 - 0x10) != 0xfafafafa)
                    lpPerformanceCount = "XStringMagicDataStructFromCharPtr"
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, lpPerformanceCount)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp2_1 = *(eax_42 - 0xc)
                *(eax_42 - 0xc) -= 1
                
                if (temp2_1 == 1)
                    void* edi_9 = data_26a44e4
                    char** lpPerformanceCount_12 = *(eax_42 - 4) + 0x10
                    
                    if (edi_9 == 0)
                        sub_4f4250()
                        edi_9 = data_26a44e4
                    
                    int32_t edx_17 = 0
                    int32_t* edi_10
                    
                    while (true)
                        if (lpPerformanceCount_12 s<= 1 << (edx_17.b + 4))
                            edi_10 = edi_9 + edx_17 * 0x14
                            break
                        
                        edx_17 += 1
                        
                        if (edx_17 s>= 7)
                            edi_10 = edi_9 + 0x8c
                            break
                    
                    lpPerformanceCount = lpPerformanceCount_12
                    sub_4f4430(&eax_42[0xfffffff0], edi_10, lpPerformanceCount)
            
            var_8_1.b = 0
            char* lpPerformanceCount_23 = lpPerformanceCount_17
            
            if (lpPerformanceCount_23 != 0 && *lpPerformanceCount_23 != 0)
                if (*(lpPerformanceCount_23 - 0x10) != 0xfafafafa)
                    lpPerformanceCount = "XStringMagicDataStructFromCharPtr"
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, lpPerformanceCount)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp3_1 = *(lpPerformanceCount_23 - 0xc)
                *(lpPerformanceCount_23 - 0xc) -= 1
                
                if (temp3_1 == 1)
                    void* edi_11 = data_26a44e4
                    char** lpPerformanceCount_13 = *(lpPerformanceCount_23 - 4) + 0x10
                    
                    if (edi_11 == 0)
                        sub_4f4250()
                        edi_11 = data_26a44e4
                    
                    int32_t edx_18 = 0
                    int32_t* edi_12
                    
                    while (true)
                        if (lpPerformanceCount_13 s<= 1 << (edx_18.b + 4))
                            edi_12 = edi_11 + edx_18 * 0x14
                            break
                        
                        edx_18 += 1
                        
                        if (edx_18 s>= 7)
                            edi_12 = edi_11 + 0x8c
                            break
                    
                    lpPerformanceCount = lpPerformanceCount_13
                    sub_4f4430(&lpPerformanceCount_23[0xfffffff0], edi_12, lpPerformanceCount)
            
            int32_t var_8_2 = 0xffffffff
            
            if (arg6 != 0 && *arg6 != 0)
                if (*(arg6 - 0x10) != 0xfafafafa)
                    lpPerformanceCount = "XStringMagicDataStructFromCharPtr"
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, lpPerformanceCount)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp4_1 = *(arg6 - 0xc)
                *(arg6 - 0xc) -= 1
                
                if (temp4_1 == 1)
                    void* edx_19 = data_26a44e4
                    char** lpPerformanceCount_15 = *(arg6 - 4) + 0x10
                    
                    if (edx_19 == 0)
                        sub_4f4250()
                        edx_19 = data_26a44e4
                    
                    int32_t eax_52 = 0
                    int32_t* edi_14
                    
                    while (true)
                        if (lpPerformanceCount_15 s<= 1 << (eax_52.b + 4))
                            edi_14 = edx_19 + eax_52 * 0x14
                            break
                        
                        eax_52 += 1
                        
                        if (eax_52 s>= 7)
                            edi_14 = edx_19 + 0x8c
                            break
                    
                    lpPerformanceCount = lpPerformanceCount_15
                    sub_4f4430(&arg6[0xfffffff0], edi_14, lpPerformanceCount)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            sub_5a6aba(eax_2 ^ &__saved_ebp)
            return 
    
    lpPerformanceCount = "AtlasMakerPlacePage"
    sub_4c5870("imagesOnPage > 0", &data_83f3d3, "Editor\AtlasMaker.cpp", 0x373, lpPerformanceCount)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
