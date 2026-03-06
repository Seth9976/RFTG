// 函数名称: sub_4d3c40
// 虚拟地址: 0x4d3c40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4d3c40(int32_t arg1)
{
    // 第一条实际指令: void* eax = data_27e7fcc
    void* eax = data_27e7fcc
    
    if (eax == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* result = sub_4d5990(*(eax + 4), arg1)
    void* result_1 = result
    void* result_2 = result_1
    
    if (*(result_1 + 0x28) != 0)
        bool cond:1_1 = *(result_1 + 0x30) s<= 0
        *(result_1 + 0x28) = 0
        int32_t i_1 = 0
        
        if (not(cond:1_1))
            int32_t i
            
            do
                int32_t* edi_1 = *(result_1 + 0x34) + (i_1 << 3)
                int32_t j = 0
                
                if (*edi_1 s> 0)
                    int32_t var_8_1 = 0
                    
                    do
                        int32_t* esi_2 = edi_1[1] + var_8_1
                        int32_t eax_3 = esi_2[0x3ae]
                        
                        if (eax_3 != 0)
                            (*(*data_3078804 + 0x50))(eax_3)
                            esi_2[0x3ae] = 0
                        
                        var_8_1 += 0xf7c
                        j += 1
                        esi_2[0x216] = 0
                        esi_2[0x10c] = 0
                        esi_2[0x10b] = 0
                        esi_2[1] = 0
                        *esi_2 = 0
                    while (j s< *edi_1)
                
                int32_t* ebx_1 = edi_1[1]
                void* esi_3 = data_26a44e4
                int32_t edi_3 = *edi_1 * 0xf7c
                int32_t* var_8_2 = ebx_1
                
                if (esi_3 == 0)
                    sub_4f4250()
                    esi_3 = data_26a44e4
                
                int32_t eax_5 = 0
                int32_t* esi_4
                
                while (true)
                    if (edi_3 s<= 1 << (eax_5.b + 4))
                        esi_4 = esi_3 + eax_5 * 0x14
                        break
                    
                    eax_5 += 1
                    
                    if (eax_5 s>= 7)
                        esi_4 = esi_3 + 0x8c
                        break
                
                esi_4[3] -= 1
                
                if (edi_3 s<= 0x400 || esi_4[4] != 0xffffffff)
                    int32_t* ecx_4 = esi_4[1]
                    
                    if (ecx_4 == 0)
                    label_4d3dcc:
                        sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                            "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    while (true)
                        void* edx_3 = &ecx_4[1]
                        ecx_4 = *ecx_4
                        
                        if (ebx_1 u>= edx_3 && ebx_1 u< edx_3 + esi_4[2] * esi_4[4])
                            esi_4[4]
                            
                            if (mods.dp.d(sx.q(ebx_1 - edx_3), esi_4[4]) == 0)
                                *var_8_2 = *esi_4
                                *esi_4 = var_8_2
                                break
                            
                            ebx_1 = var_8_2
                        
                        if (ecx_4 == 0)
                            goto label_4d3dcc
                else if (ebx_1 != 0)
                    _aligned_free_base(ebx_1)
                
                i = i_1 + 1
                i_1 = i
                result_1 = result_2
            while (i s< *(result_2 + 0x30))
        
        result = *(result_1 + 0x34)
        
        if (result != 0)
            result = _aligned_free_base(result)
        
        *(result_1 + 0x34) = 0
        *(result_1 + 0x30) = 0
    
    return result
}
