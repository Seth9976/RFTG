// 函数名称: sub_4fd680
// 虚拟地址: 0x4fd680
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4fd680(char arg1)
{
    // 第一条实际指令: int32_t i = 0x90
    int32_t i = 0x90
    int32_t* edi
    int32_t* var_2c = edi
    *(data_26a44ec + 0x124) = arg1
    int32_t i_1 = 0x90
    int32_t result
    
    do
        int32_t* edx = i + data_26a44ec
        int32_t j = 0
        int32_t* var_1c_1 = edx
        int32_t j_1 = 0
        
        do
            int32_t* eax_1 = *(*edx + (j << 2))
            
            if (eax_1 != 0)
                while (true)
                    char* edi_1 = *eax_1
                    int32_t* ecx_2 = eax_1[3]
                    
                    if (edi_1 != 0 && *edi_1 != 0)
                        if (*(edi_1 - 0x10) != 0xfafafafa)
                            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        int32_t temp2_1 = *(edi_1 - 0xc)
                        *(edi_1 - 0xc) -= 1
                        
                        if (temp2_1 == 1)
                            void* esi_1 = data_26a44e4
                            int32_t ebx_2 = *(edi_1 - 4) + 0x10
                            
                            if (esi_1 == 0)
                                sub_4f4250()
                                esi_1 = data_26a44e4
                            
                            int32_t eax_2 = 0
                            void** esi_2
                            
                            while (true)
                                if (ebx_2 s<= 1 << (eax_2.b + 4))
                                    esi_2 = esi_1 + eax_2 * 0x14
                                    break
                                
                                eax_2 += 1
                                
                                if (eax_2 s>= 7)
                                    esi_2 = esi_1 + 0x8c
                                    break
                            
                            esi_2[3] -= 1
                            
                            if (ebx_2 s<= 0x400 || esi_2[4] != 0xffffffff)
                                int32_t eax_4 = esi_2[4]
                                int32_t* ecx_4 = esi_2[1]
                                
                                if (ecx_4 == 0)
                                label_4fd7a0:
                                    sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                        "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                while (true)
                                    void* edx_2 = &ecx_4[1]
                                    ecx_4 = *ecx_4
                                    
                                    if (&edi_1[0xfffffff0] u>= edx_2
                                            && &edi_1[0xfffffff0] u< edx_2 + esi_2[2] * eax_4
                                            && mods.dp.d(sx.q(&edi_1[0xfffffff0] - edx_2), eax_4) == 0)
                                        *(edi_1 - 0x10) = *esi_2
                                        *esi_2 = &edi_1[0xfffffff0]
                                        break
                                    
                                    if (ecx_4 == 0)
                                        goto label_4fd7a0
                            else
                                _aligned_free_base(&edi_1[0xfffffff0])
                    
                    void* edx_5 = data_26a44e4
                    
                    if (edx_5 == 0)
                        sub_4f4250()
                        edx_5 = data_26a44e4
                    
                    int32_t eax_11 = 0
                    int32_t** ecx_7
                    
                    while (true)
                        if (1 << (eax_11.b + 4) s>= 0x10)
                            ecx_7 = edx_5 + eax_11 * 0x14
                            break
                        
                        eax_11 += 1
                        
                        if (eax_11 s>= 7)
                            ecx_7 = edx_5 + 0x8c
                            break
                    
                    int32_t eax_12 = ecx_7[4]
                    int32_t* esi_4 = ecx_7[1]
                    int32_t ebx_6 = ecx_7[2] * eax_12
                    ecx_7[3] -= 1
                    
                    if (esi_4 == 0)
                    label_4fd843:
                        sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                            "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    while (true)
                        void* edx_6 = &esi_4[1]
                        esi_4 = *esi_4
                        
                        if (eax_1 u>= edx_6 && eax_1 u< edx_6 + ebx_6
                                && mods.dp.d(sx.q(eax_1 - edx_6), eax_12) == 0)
                            break
                        
                        if (esi_4 == 0)
                            goto label_4fd843
                    
                    *eax_1 = *ecx_7
                    *ecx_7 = eax_1
                    
                    if (ecx_2 == 0)
                        edx = var_1c_1
                        j = j_1
                        break
                    
                    eax_1 = ecx_2
            
            result = *edx
            *(result + (j << 2)) = 0
            j += 1
            j_1 = j
        while (j u<= edx[1])
        
        edx[2] = 0
        i = i_1 + 0xc
        i_1 = i
    while (i s< 0x120)
    
    return result
}
