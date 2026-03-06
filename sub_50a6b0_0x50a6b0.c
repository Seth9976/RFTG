// 函数名称: sub_50a6b0
// 虚拟地址: 0x50a6b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_50a6b0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* result = data_30785d8
    int32_t* result = data_30785d8
    char* const eax = *arg1
    
    if (eax == 0)
        eax = &data_83f3d3
    
    int32_t eax_1 = sub_519130(eax)
    int32_t ecx_1 = result[1] & eax_1
    int32_t eax_2 = *result
    int32_t* ebx = *(eax_2 + (ecx_1 << 2))
    int32_t* esi = nullptr
    
    if (ebx != 0)
        char* edi_1 = *arg1
        
        while (true)
            char* eax_3 = *ebx
            char* const ecx_3 = &data_83f3d3
            
            if (eax_3 != 0)
                ecx_3 = eax_3
            
            char* const eax_4 = &data_83f3d3
            
            if (edi_1 != 0)
                eax_4 = edi_1
            
            int32_t eax_6
            
            while (true)
                char edx_1 = *eax_4
                char temp2_1 = *ecx_3
                bool c_1 = edx_1 u< temp2_1
                
                if (edx_1 == temp2_1)
                    if (edx_1 == 0)
                        eax_6 = 0
                        break
                    
                    edx_1 = eax_4[1]
                    char temp5_1 = ecx_3[1]
                    c_1 = edx_1 u< temp5_1
                    
                    if (edx_1 == temp5_1)
                        eax_4 = &eax_4[2]
                        ecx_3 = &ecx_3[2]
                        
                        if (edx_1 != 0)
                            continue
                        
                        eax_6 = 0
                        break
                
                bool c_2 = unimplemented  {sbb eax, eax}
                eax_6 = sbb.d(sbb.d(eax_4, eax_4, c_1), 0xffffffff, c_2)
                break
            
            if (eax_6 == 0)
                if (esi != 0)
                    esi[2] = ebx[2]
                else
                    *(eax_2 + (ecx_1 << 2)) = ebx[2]
                
                char* eax_9 = *ebx
                
                if (eax_9 != 0 && *eax_9 != 0)
                    void* eax_11 = sub_4c4060(ebx)
                    int32_t temp6_1 = *(eax_11 + 4)
                    *(eax_11 + 4) -= 1
                    
                    if (temp6_1 == 1)
                        int32_t esi_2 = *(eax_11 + 0xc) + 0x10
                        sub_4f4430(eax_11, sub_4f4380(esi_2), esi_2)
                
                void* edx_3 = data_26a44e4
                
                if (edx_3 == 0)
                    sub_4f4250()
                    edx_3 = data_26a44e4
                
                int32_t eax_14 = 0
                int32_t* ebx_1 = ebx
                int32_t** ecx_7
                
                while (true)
                    if (1 << (eax_14.b + 4) s>= 0xc)
                        ecx_7 = edx_3 + eax_14 * 0x14
                        break
                    
                    eax_14 += 1
                    
                    if (eax_14 s>= 7)
                        ecx_7 = edx_3 + 0x8c
                        break
                
                int32_t* i = ecx_7[1]
                int32_t edi_5 = ecx_7[2] * ecx_7[4]
                ecx_7[3] -= 1
                
                while (i != 0)
                    void* edx_4 = &i[1]
                    i = *i
                    
                    if (ebx_1 u>= edx_4 && ebx_1 u< edx_4 + edi_5)
                        ecx_7[4]
                        
                        if (mods.dp.d(sx.q(ebx_1 - edx_4), ecx_7[4]) == 0)
                            *ebx = *ecx_7
                            *ecx_7 = ebx
                            result[2] -= 1
                            return result
                        
                        ebx_1 = ebx
                
                sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 
                    0x81, "XAllocator::Free")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            esi = ebx
            ebx = ebx[2]
            
            if (ebx == 0)
                break
    
    sub_4c5870("Halt", &data_83f3d3, "c:\ax2010\engine\xMap.h", 0xd9, 
        "XMap<class XString,struct XAsset *>::RemoveAt")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
