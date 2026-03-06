// 函数名称: sub_4d5a00
// 虚拟地址: 0x4d5a00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __stdcallsub_4d5a00(int32_t* arg1)
{
    // 第一条实际指令: int32_t* edx = arg1
    int32_t* edx = arg1
    int32_t* i = *edx
    
    if (i != 0)
        void* edi_1 = data_26a44e4
        
        do
            int32_t* i_1 = i
            i = i[4]
            
            if (i_1 != 0)
                char* eax = i_1[1]
                
                if (eax != 0 && *eax != 0)
                    if (*(eax - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t temp2_1 = *(eax - 0xc)
                    *(eax - 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        int32_t esi_2 = *(eax - 4) + 0x10
                        
                        if (edi_1 == 0)
                            sub_4f4250()
                            edi_1 = data_26a44e4
                        
                        int32_t eax_1 = 0
                        int32_t* edi_2
                        
                        while (true)
                            if (esi_2 s<= 1 << (eax_1.b + 4))
                                edi_2 = edi_1 + eax_1 * 0x14
                                break
                            
                            eax_1 += 1
                            
                            if (eax_1 s>= 7)
                                edi_2 = edi_1 + 0x8c
                                break
                        
                        sub_4f4430(&eax[0xfffffff0], edi_2, esi_2)
                        edi_1 = data_26a44e4
                
                if (edi_1 == 0)
                    sub_4f4250()
                    edi_1 = data_26a44e4
                
                int32_t eax_3 = 0
                void* esi_3
                
                while (true)
                    if (1 << (eax_3.b + 4) s>= 0x18)
                        esi_3 = edi_1 + eax_3 * 0x14
                        break
                    
                    eax_3 += 1
                    
                    if (eax_3 s>= 7)
                        esi_3 = edi_1 + 0x8c
                        break
                
                int32_t* ecx_4 = *(esi_3 + 4)
                int32_t edi_4 = *(esi_3 + 8) * *(esi_3 + 0x10)
                *(esi_3 + 0xc) -= 1
                
                if (ecx_4 == 0)
                label_4d5b1a:
                    sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                        "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                while (true)
                    void* edx_3 = &ecx_4[1]
                    ecx_4 = *ecx_4
                    
                    if (i_1 u>= edx_3 && i_1 u< edx_3 + edi_4)
                        *(esi_3 + 0x10)
                        
                        if (mods.dp.d(sx.q(i_1 - edx_3), *(esi_3 + 0x10)) == 0)
                            edi_1 = data_26a44e4
                            edx = arg1
                            *i_1 = *esi_3
                            *esi_3 = i_1
                            break
                    
                    if (ecx_4 == 0)
                        goto label_4d5b1a
        while (i != 0)
    
    edx[2] = 0
    *edx = 0
    edx[1] = 0
    return i
}
