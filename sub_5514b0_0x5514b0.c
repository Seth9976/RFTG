// 函数名称: sub_5514b0
// 虚拟地址: 0x5514b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5514b0(int32_t* arg1 @ esi, void* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* ebx = arg3
    int32_t* ebx = arg3
    char* eax_1
    int32_t* ecx
    uint32_t* edx
    eax_1, ecx, edx = sub_550b50(ebx)
    int32_t var_24
    __builtin_memset(&var_24, 0, 0x14)
    int32_t var_20
    int32_t var_1c
    int32_t var_14_1
    int32_t* var_c
    int32_t* eax_2
    
    if (eax_1 != 6)
        if (eax_1 == 5)
            eax_2 = sub_594b80(&var_24, ebx)
            goto label_5514e5
        
        if (eax_1 != 2)
            int32_t* ecx_2
            
            if (eax_1 != 4)
                if (eax_1 != 0xa)
                    sub_4c5870("Halt", &data_83f3d3, "TextureImport.cpp", 0x27c, 
                        "sTextureImportJustCopy")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t** var_30_4 = &var_c
                int32_t* var_34_4 = &var_1c
                
                if (sub_5a0f60(arg3, edx, ecx) s<= 0)
                    sub_4c5870("result > 0", &data_83f3d3, "TextureImport.cpp", 0x266, 
                        "sTextureImportJustCopy")
                    
                    if (IsDebuggerPresent() != 1)
                        sub_4c5a30()
                        noreturn
                    
                    breakpoint
                
                ecx_2 = var_c
                
                if (ecx_2 == 1)
                    goto label_5515e6
                
                if (ecx_2 == 3)
                    goto label_5515cc
                
                if (ecx_2 == 4)
                    goto label_5515b2
                
                sub_4c5870("Halt", &data_83f3d3, "TextureImport.cpp", 0x273, "sTextureImportJustCopy")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t** var_30_3 = &var_c
            int32_t* var_34_3 = &var_1c
            
            if (sub_5a0f60(arg3, edx, ecx) s<= 0)
                sub_4c5870("result > 0", &data_83f3d3, "TextureImport.cpp", 0x24d, 
                    "sTextureImportJustCopy")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            ecx_2 = var_c
            
            if (ecx_2 == 1)
            label_5515e6:
                ebx = arg3
                var_14_1 = 0x72
                int32_t var_18_3 = ecx_2 * var_20 * 4
            else if (ecx_2 == 3)
            label_5515cc:
                ebx = arg3
                var_14_1 = 0x3e8
                int32_t var_18_2 = ecx_2 * var_20 * 4
            else
                if (ecx_2 != 4)
                    sub_4c5870("Halt", &data_83f3d3, "TextureImport.cpp", 0x25a, 
                        "sTextureImportJustCopy")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
            label_5515b2:
                ebx = arg3
                var_14_1 = 0x74
                int32_t var_18_1 = ecx_2 * var_20 * 4
            
            goto label_5516b2
        
        eax_2 = sub_595590(eax_1, &var_24, ebx, &var_24)
    else
        eax_2 = sub_593f90(&var_24, ebx)
    
    label_5514e5:
    
    if (eax_2.b != 0)
        int32_t eax_19 = var_24
        
        if (eax_19 != 0)
            _aligned_free_base(eax_19)
        
    label_5516b2:
        int32_t eax_20 = *(arg2 + 4)
        var_24 = 0
        int32_t var_8_1 = eax_20
        
        if (eax_20 == 0)
            var_8_1 = var_14_1
            
            if (var_14_1 == 5)
                var_8_1 = 4
        
        int32_t* eax_22 = sub_5a898b(ebx, "rb")
        
        if (eax_22 == 0)
            int32_t* var_30_6 = arg3
            sub_4c5680("failed to open file: %s")
            int32_t eax_23
            eax_23.b = 0
            return eax_23
        
        sub_5a9831(eax_22, nullptr, FILE_END)
        void* eax_24 = sub_5a9a41(eax_22)
        sub_5a9831(eax_22, nullptr, FILE_BEGIN)
        
        if (eax_24 == 0)
            int32_t* var_30_7 = arg3
            sub_4c5680("file too small: %s")
            sub_5a8c61(eax_22)
            int32_t eax_26
            eax_26.b = 0
            return eax_26
        
        int128_t* eax_28 = sub_4cce80(eax_24)
        var_c = eax_28
        uint32_t eax_29 = sub_5a9cf0(eax_28, 1, eax_24, eax_22)
        sub_5a8c61(eax_22)
        
        if (eax_29 == eax_24)
            arg1[1] = var_1c
            arg1[3] = 1
            arg1[0xd] = 1
            *arg1 = var_20
            int32_t* eax_32 = sub_4cce80(8)
            *eax_32 = 0
            eax_32[1] = 0
            arg1[0xf] = eax_32
            char* eax_34 = sub_550b50(arg3)
            void** edx_4 = arg1[0xf]
            arg1[4] = eax_34
            arg1[5] = var_8_1
            int32_t* ecx_15 = var_c
            arg1[6] = 0
            *edx_4 = eax_24
            *(arg1[0xf] + 4) = ecx_15
            arg1[7] = *(arg2 + 8)
            arg1[8] = *(arg2 + 0xc)
            int32_t eax_37
            eax_37.b = 1
            return eax_37
        
        int32_t* var_30_9 = arg3
        sub_4c5680("failed to read: %s")
        eax_2 = var_c
        
        if (eax_2 != 0)
            _aligned_free_base(eax_2)
            int32_t eax_30
            eax_30.b = 0
            return eax_30
    
    eax_2.b = 0
    return eax_2
}
