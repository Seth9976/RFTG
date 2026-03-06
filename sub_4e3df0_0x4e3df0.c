// 函数名称: sub_4e3df0
// 虚拟地址: 0x4e3df0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __stdcallsub_4e3df0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: sub_4c4510(arg2)
    sub_4c4510(arg2)
    sub_4c4510(&arg2[1])
    void* esi_1 = arg2 - arg1
    int32_t* ebx_2 = arg1 + 8
    void* var_8 = esi_1
    int32_t i_3 = 8
    int32_t i
    
    do
        char* ecx_1 = *ebx_2
        char* const edx_1 = &data_83f3d3
        
        if (ecx_1 != 0)
            edx_1 = ecx_1
        
        char* const eax_1 = *(esi_1 + ebx_2)
        
        if (eax_1 == 0)
            eax_1 = &data_83f3d3
        
        if (edx_1 != eax_1)
            if (ecx_1 != 0 && *ecx_1 != 0)
                void* eax_3 = sub_4c4060(ebx_2)
                int32_t temp3_1 = *(eax_3 + 4)
                *(eax_3 + 4) -= 1
                
                if (temp3_1 == 1)
                    int32_t esi_3 = *(eax_3 + 0xc) + 0x10
                    sub_4f4430(eax_3, sub_4f4380(esi_3), esi_3)
                    esi_1 = var_8
            
            char* eax_6 = *(esi_1 + ebx_2)
            *ebx_2 = eax_6
            
            if (eax_6 != 0 && *eax_6 != 0)
                void* eax_8 = sub_4c4060(ebx_2)
                *(eax_8 + 4) += 1
        
        ebx_2 = &ebx_2[1]
        i = i_3
        i_3 -= 1
    while (i != 1)
    int32_t* ecx_4 = arg1 + 0x28
    int32_t i_2 = 0
    int32_t* var_c = ecx_4
    int32_t i_1
    
    do
        char* edi_3 = *ecx_4
        char* const edx_2 = &data_83f3d3
        
        if (edi_3 != 0)
            edx_2 = edi_3
        
        char* const eax_9 = *(ecx_4 + esi_1)
        
        if (eax_9 == 0)
            eax_9 = &data_83f3d3
        
        if (edx_2 != eax_9)
            if (edi_3 != 0 && *edi_3 != 0)
                if (*(edi_3 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp4_1 = *(edi_3 - 0xc)
                *(edi_3 - 0xc) -= 1
                
                if (temp4_1 == 1)
                    void* esi_4 = data_26a44e4
                    int32_t ebx_4 = *(edi_3 - 4) + 0x10
                    
                    if (esi_4 == 0)
                        sub_4f4250()
                        esi_4 = data_26a44e4
                    
                    int32_t eax_10 = 0
                    void** esi_5
                    
                    while (true)
                        if (ebx_4 s<= 1 << (eax_10.b + 4))
                            esi_5 = esi_4 + eax_10 * 0x14
                            break
                        
                        eax_10 += 1
                        
                        if (eax_10 s>= 7)
                            esi_5 = esi_4 + 0x8c
                            break
                    
                    esi_5[3] -= 1
                    
                    if (ebx_4 s<= 0x400 || esi_5[4] != 0xffffffff)
                        int32_t eax_12 = esi_5[4]
                        int32_t* ecx_6 = esi_5[1]
                        
                        if (ecx_6 == 0)
                        label_4e3f9c:
                            sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        while (true)
                            void* edx_4 = &ecx_6[1]
                            ecx_6 = *ecx_6
                            
                            if (&edi_3[0xfffffff0] u>= edx_4
                                    && &edi_3[0xfffffff0] u< edx_4 + esi_5[2] * eax_12
                                    && mods.dp.d(sx.q(&edi_3[0xfffffff0] - edx_4), eax_12) == 0)
                                *(edi_3 - 0x10) = *esi_5
                                *esi_5 = &edi_3[0xfffffff0]
                                break
                            
                            if (ecx_6 == 0)
                                goto label_4e3f9c
                    else
                        _aligned_free_base(&edi_3[0xfffffff0])
                    
                    esi_1 = var_8
                    ecx_4 = var_c
            
            char* eax_19 = *(ecx_4 + esi_1)
            *ecx_4 = eax_19
            
            if (eax_19 != 0 && *eax_19 != 0)
                if (*(eax_19 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                *(eax_19 - 0xc) += 1
        
        i_1 = i_2 + 1
        ecx_4 = &ecx_4[1]
        i_2 = i_1
        var_c = ecx_4
    while (i_1 u< 8)
    *(arg1 + 0x48) = arg2[0x12]
    return arg1
}
