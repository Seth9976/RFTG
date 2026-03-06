// 函数名称: sub_56be40
// 虚拟地址: 0x56be40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_56be40(int32_t* arg1)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    int32_t edi
    int32_t var_20 = edi
    int32_t i_1 = 0
    int32_t result
    int32_t* edx_10
    
    do
        edx_10 = arg1
        void** eax_2 = *(*edx_10 + (i << 2))
        
        if (eax_2 != 0)
            while (true)
                char* edi_2 = eax_2[2]
                void** ecx = eax_2[5]
                
                if (edi_2 != 0 && *edi_2 != 0)
                    if (*(edi_2 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t temp2_1 = *(edi_2 - 0xc)
                    *(edi_2 - 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        void* esi_1 = data_26a44e4
                        int32_t ebx_2 = *(edi_2 - 4) + 0x10
                        
                        if (esi_1 == 0)
                            sub_4f4250()
                            esi_1 = data_26a44e4
                        
                        int32_t eax_3 = 0
                        void** esi_2
                        
                        while (true)
                            if (ebx_2 s<= 1 << (eax_3.b + 4))
                                esi_2 = esi_1 + eax_3 * 0x14
                                break
                            
                            eax_3 += 1
                            
                            if (eax_3 s>= 7)
                                esi_2 = esi_1 + 0x8c
                                break
                        
                        esi_2[3] -= 1
                        
                        if (ebx_2 s<= 0x400 || esi_2[4] != 0xffffffff)
                            int32_t eax_5 = esi_2[4]
                            int32_t* ecx_2 = esi_2[1]
                            
                            if (ecx_2 == 0)
                            label_56bf4c:
                                sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                    "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            while (true)
                                void* edx_2 = &ecx_2[1]
                                ecx_2 = *ecx_2
                                
                                if (&edi_2[0xfffffff0] u>= edx_2
                                        && &edi_2[0xfffffff0] u< edx_2 + esi_2[2] * eax_5
                                        && mods.dp.d(sx.q(&edi_2[0xfffffff0] - edx_2), eax_5) == 0)
                                    *(edi_2 - 0x10) = *esi_2
                                    *esi_2 = &edi_2[0xfffffff0]
                                    break
                                
                                if (ecx_2 == 0)
                                    goto label_56bf4c
                        else
                            _aligned_free_base(&edi_2[0xfffffff0])
                
                void* edx_5 = data_26a44e4
                
                if (edx_5 == 0)
                    sub_4f4250()
                    edx_5 = data_26a44e4
                
                int32_t eax_12 = 0
                void** ecx_5
                
                while (true)
                    if (1 << (eax_12.b + 4) s>= 0x18)
                        ecx_5 = edx_5 + eax_12 * 0x14
                        break
                    
                    eax_12 += 1
                    
                    if (eax_12 s>= 7)
                        ecx_5 = edx_5 + 0x8c
                        break
                
                int32_t eax_13 = ecx_5[4]
                int32_t* esi_4 = ecx_5[1]
                int32_t ebx_6 = ecx_5[2] * eax_13
                ecx_5[3] -= 1
                
                if (esi_4 == 0)
                label_56bfef:
                    sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                        "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                while (true)
                    void* edx_6 = &esi_4[1]
                    esi_4 = *esi_4
                    
                    if (eax_2 u>= edx_6 && eax_2 u< edx_6 + ebx_6
                            && mods.dp.d(sx.q(eax_2 - edx_6), eax_13) == 0)
                        break
                    
                    if (esi_4 == 0)
                        goto label_56bfef
                
                *eax_2 = *ecx_5
                *ecx_5 = eax_2
                
                if (ecx == 0)
                    edx_10 = arg1
                    i = i_1
                    break
                
                eax_2 = ecx
        
        result = *edx_10
        *(result + (i << 2)) = 0
        i += 1
        i_1 = i
    while (i u<= edx_10[1])
    
    edx_10[2] = 0
    return result
}
