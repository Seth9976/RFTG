// 函数名称: sub_5798d0
// 虚拟地址: 0x5798d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULTsub_5798d0()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char edx = __chkstk(0x101c)
    void var_8
    int32_t eax_1 = __security_cookie ^ &var_8
    int32_t arg_1010 = eax_1
    int32_t i_1 = 0
    int32_t arg_c[0x401]
    
    if (data_273bc2c s> 0)
        int32_t i
        
        do
            int32_t* ecx_1 = data_273ac20
            int32_t* esi_1 = ecx_1
            
            if (ecx_1[1] != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*ecx_1 == 0)
                ecx_1 = sub_520800(eax_1, edx, ecx_1, 0)
                
                if (*esi_1 == 0)
                    sub_509540(esi_1)
            
            void* esi_2 = **esi_1
            int32_t ebx_1 = *(esi_2 + 4)
            int32_t* var_1c_1 = ecx_1
            int32_t* eax_5
            int32_t edx_1
            eax_5, edx_1 = sub_4fff30(data_30d7440, 0)
            int32_t* eax_6
            char edx_2
            eax_6, edx_2 = sub_505030(eax_5, edx_1, esi_2, eax_5, ebx_1)
            int32_t edi_1 = (&data_273ac2c)[i_1]
            char* ecx_4 = data_273ac20
            int32_t* ebx_3 = ebx_1 * 0x118 + *esi_2
            
            if (*(ecx_4 + 4) != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*ecx_4 == 0)
                sub_520800(eax_6, edx_2, ecx_4, 0)
                
                if (*ecx_4 == 0)
                    sub_509540(ecx_4)
            
            int32_t* ecx_5 = **ecx_4
            int32_t eax_8 = 0
            int32_t* edx_4 = nullptr
            void* eax_10
            char* eax_11
            void* edx_7
            int128_t* edi_4
            
            while (true)
                if (eax_8 s>= ecx_5[1])
                    sub_4c5870("Halt", &data_83f3d3, "Editor\UIEditor.cpp", 0x126, "FindElement")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t esi_4 = *ecx_5
                
                if (*(edx_4 + esi_4) == edi_1)
                    int32_t ecx_6 = ebx_3[0x37]
                    int32_t edx_5 = ebx_3[2]
                    int32_t ecx_7 = ebx_3[0x2c]
                    eax_10 = eax_8 * 0x118 + esi_4
                    __builtin_memcpy(ebx_3, eax_10, 0x118)
                    ebx_3[2] = edx_5
                    ebx_3[0x37] = ecx_6
                    ebx_3[0x2c] = ecx_7
                    edi_4 = *(eax_10 + 8)
                    
                    if (edi_4 != 0)
                        eax_11 = edi_4
                        edx_7 = &eax_11[1]
                        break
                    
                    sub_4c5870("pExistingString", &data_83f3d3, "Definition.cpp", 0x249, 
                        "DefDeepCopyString")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                eax_8 += 1
                edx_4 = &edx_4[0x46]
            
            int32_t ecx_8
            
            do
                ecx_8.b = *eax_11
                eax_11 = &eax_11[1]
            while (ecx_8.b != 0)
            int128_t* eax_14 = sub_4cce80(eax_11 - edx_7 + 1)
            ebx_3[2] = eax_14
            sub_5ab990(eax_14, edi_4, eax_11 - edx_7 + 1)
            int128_t* edi_6 = *(eax_10 + 0xdc)
            
            if (edi_6 == 0)
                sub_4c5870("pExistingString", &data_83f3d3, "Definition.cpp", 0x249, 
                    "DefDeepCopyString")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            char* eax_15 = edi_6
            void* edx_9 = &eax_15[1]
            char j
            
            do
                j = *eax_15
                eax_15 = &eax_15[1]
            while (j != 0)
            int128_t* eax_18 = sub_4cce80(eax_15 - edx_9 + 1)
            ebx_3[0x37] = eax_18
            sub_5ab990(eax_18, edi_6, eax_15 - edx_9 + 1)
            int128_t* edi_7 = *(eax_10 + 0xb0)
            
            if (edi_7 == 0)
                sub_4c5870("pExistingString", &data_83f3d3, "Definition.cpp", 0x249, 
                    "DefDeepCopyString")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            char* eax_20 = edi_7
            void* edx_10 = &eax_20[1]
            char j_1
            
            do
                j_1 = *eax_20
                eax_20 = &eax_20[1]
            while (j_1 != 0)
            int128_t* eax_23 = sub_4cce80(eax_20 - edx_10 + 1)
            ebx_3[0x2c] = eax_23
            edx = sub_5ab990(eax_23, edi_7, eax_20 - edx_10 + 1)
            int32_t ecx_9 = data_273ac28
            eax_1 = ecx_9
            data_273ac28 = ecx_9 + 1
            arg_c[i_1] = eax_1
            i = i_1 + 1
            *ebx_3 = eax_1
            i_1 = i
        while (i s< data_273bc2c)
    
    int32_t eax_24 = sub_579840()
    sub_5ab990(&data_273ac2c, &arg_c, data_273bc2c << 2)
    sub_57c8a0(eax_24 + 1)
    sub_540c30(data_273ac20)
    LRESULT result = sub_57c6a0()
    sub_5a6aba(arg_1010 ^ &var_8)
    return result
}
