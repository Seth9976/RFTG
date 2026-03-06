// 函数名称: sub_42dc20
// 虚拟地址: 0x42dc20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_42dc20()
{
    // 第一条实际指令: void* esi = data_27e7a40
    void* esi = data_27e7a40
    sub_463d80(*(esi + 0x548) + 0x43960)
    int32_t i = 0x2c268
    int32_t i_1 = 0x2c268
    
    do
        int32_t j_1 = 0
        int32_t i_2 = i
        int32_t j
        
        do
            int32_t* ecx_2 = *(esi + 0x548) + i_2
            char* eax_2 = *ecx_2
            
            if (eax_2 != 0 && eax_2 != &data_83f3d3)
                if (*eax_2 != 0)
                    if (*(eax_2 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t temp0_1 = *(eax_2 - 0xc)
                    *(eax_2 - 0xc) -= 1
                    
                    if (temp0_1 == 1)
                        void* edx_1 = data_26a44e4
                        int32_t esi_2 = *(eax_2 - 4) + 0x10
                        
                        if (edx_1 == 0)
                            sub_4f4250()
                            edx_1 = data_26a44e4
                        
                        int32_t eax_3 = 0
                        int32_t* edi_2
                        
                        while (true)
                            if (esi_2 s<= 1 << (eax_3.b + 4))
                                edi_2 = edx_1 + eax_3 * 0x14
                                break
                            
                            eax_3 += 1
                            
                            if (eax_3 s>= 7)
                                edi_2 = edx_1 + 0x8c
                                break
                        
                        sub_4f4430(&eax_2[0xfffffff0], edi_2, esi_2)
                        esi = data_27e7a40
                
                *ecx_2 = &data_83f3d3
            
            i_2 += 4
            j = j_1 + 1
            j_1 = j
        while (j s< 6)
        i = i_1 + 0x1c0
        i_1 = i
    while (i s< 0x42068)
    
    int128_t* result = sub_5abfc0(*(esi + 0x548) + 0x184, 0, 0x437dc)
    *(esi + 0x2c4960) = 0
    return result
}
