// 函数名称: sub_4cf0f0
// 虚拟地址: 0x4cf0f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4cf0f0(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f5f8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_40 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* arg_4
    int32_t* eax_4 = *arg_4
    
    if (eax_4 == 0)
        eax_4.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_4
    
    while (true)
        int32_t* ecx_3 = eax_4[1]
        int32_t* esi_1 = *eax_4
        int32_t eax_5 = esi_1[1]
        
        if (eax_5 s< 0 || eax_5 s>= 0x23)
            sub_4c5870("assetType >= 0 && assetType < ASSET_TYPE_COUNT", &data_83f3d3, 
                "AssetTypeRegistry.cpp", 0xb6, "AssetTypeGetInfo")
            
            if (IsDebuggerPresent() != 1)
                sub_4c5a30()
                noreturn
            
            breakpoint
        
        void* ebx_1 = *((eax_5 << 5) + data_30785d4 + 0x1c)
        int32_t* eax_8 = sub_466320(esi_1)
        uint32_t eax_9 = *(ebx_1 + 0xc)
        
        if (eax_9 == 0)
            break
        
        int32_t var_2c = 0
        int32_t var_28_1 = 0
        char var_20_1 = 1
        int32_t var_1c_1 = 0
        sub_4ce080(eax_8, ebx_1, 0, &var_2c)
        int128_t* eax_11
        int32_t* edx_1
        eax_11, edx_1 = sub_4cce80(eax_9)
        int128_t* var_14_1 = eax_11
        void* eax_24
        uint32_t ebx_2
        
        if (arg2 == 0)
            int32_t* var_44_9 = eax_8
            sub_4ce2f0(eax_9, eax_11, edx_1)
        label_4cf2d2:
            ebx_2 = eax_9
        else
            char* const esi_2 = esi_1[8]
            
            if (esi_2 == 0)
                esi_2 = &data_83f3d3
            
            sub_51f490(&arg_4, edx_1, esi_2, &arg_4)
            int32_t var_8_1 = 0
            int32_t* eax_13 = arg_4
            
            if (eax_13 == 0)
                eax_13 = &data_83f3d3
            
            int32_t* eax_14 = sub_5a898b(eax_13, "rb")
            
            if (eax_14 == 0)
                int32_t* eax_26 = arg_4
                
                if (eax_26 == 0)
                    eax_26 = &data_83f3d3
                
                int32_t* var_44_12 = eax_26
                sub_4c5680("failed to open %s")
                int32_t var_8_3 = 0xffffffff
                eax_24 = arg_4
                
                if (eax_24 != 0 && *eax_24 != 0)
                    eax_24 = sub_4c4060(&arg_4)
                    int32_t temp0_1 = *(eax_24 + 4)
                    *(eax_24 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        int32_t esi_6 = *(eax_24 + 0xc) + 0x10
                        sub_4f4430(eax_24, sub_4f4380(esi_6), esi_6)
                
                goto label_4cf3a0
            
            sub_5a9831(eax_14, nullptr, FILE_END)
            ebx_2 = eax_9
            
            if (sub_5a9a41(eax_14) != ebx_2 + 0xb4)
                sub_4c5870("Halt", &data_83f3d3, "DefBin.cpp", 0x499, "DefBinWritePackAssets")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            sub_5a9831(eax_14, 0xb4, FILE_BEGIN)
            
            if (sub_5a9cf0(var_14_1, 1, ebx_2, eax_14) != ebx_2)
                sub_4c5870("read_len == (size_t)dataSize", &data_83f3d3, "DefBin.cpp", 0x49f, 
                    "DefBinWritePackAssets")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            sub_5a8c61(eax_14)
            int32_t var_8_2 = 0xffffffff
            int32_t* eax_17 = arg_4
            
            if (eax_17 != 0 && *eax_17 != 0)
                if (eax_17[-4] != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp1_1 = eax_17[-3]
                eax_17[-3] -= 1
                
                if (temp1_1 == 1)
                    void* edx_3 = data_26a44e4
                    int32_t ebx_4 = eax_17[-1] + 0x10
                    
                    if (edx_3 == 0)
                        sub_4f4250()
                        edx_3 = data_26a44e4
                    
                    int32_t eax_18 = 0
                    
                    while (true)
                        if (ebx_4 s<= 1 << (eax_18.b + 4))
                            sub_4f4430(&eax_17[-4], edx_3 + eax_18 * 0x14, ebx_4)
                            break
                        
                        eax_18 += 1
                        
                        if (eax_18 s>= 7)
                            sub_4f4430(&eax_17[-4], edx_3 + 0x8c, ebx_4)
                            break
                    
                    goto label_4cf2d2
        
        uint32_t eax_23 = sub_5a9094(var_14_1, ebx_2, 1, arg1)
        eax_24 = var_14_1
        
        if (eax_24 != 0)
            _aligned_free_base(eax_24)
        
        if (eax_23 != 1)
        label_4cf3a0:
            eax_24.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_24
        
        if (ecx_3 != 0)
            eax_4 = ecx_3
            continue
        
        eax_24.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_24
    
    sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
        "DefinitionGetSize")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
