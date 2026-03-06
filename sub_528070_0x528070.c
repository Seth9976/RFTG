// 函数名称: sub_528070
// 虚拟地址: 0x528070
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_528070(int32_t* arg1)
{
    // 第一条实际指令: int32_t* i = arg1
    int32_t* i = arg1
    int32_t esi = 0
    int32_t var_10 = 0
    
    if (*i s> 0)
        while (true)
            int32_t edx_1 = arg1[1]
            i = *(edx_1 + (esi << 3))
            void* edi_1 = edx_1 + (esi << 3)
            
            if (i s< 0 || i s>= data_8c00fc)
                sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
                    "AttribMap.cpp", 0x8b, "AttribTagGetField")
                
                if (IsDebuggerPresent() != 1)
                    sub_4c5a30()
                    noreturn
                
                breakpoint
            
            int32_t ecx_4 = *(*(data_8c00f8 + (i << 2)) + 0xc)
            
            if (ecx_4 == 0)
                sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, 
                    "AttribTagGetDefMap")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (ecx_4 != data_30d74e0)
                i = sub_531280(i, edx_1, &data_8c00ec)
                
                if (i == data_30d74d0)
                    void* ebx_1 = *(edi_1 + 4)
                    int32_t* i_1 = nullptr
                    
                    if (*(ebx_1 + 4) s> 0)
                        int32_t var_8_1 = 0
                        
                        do
                            void* eax_1 = var_8_1 + *ebx_1
                            int32_t j = 0
                            
                            if (*(eax_1 + 4) s> 0)
                                do
                                    int32_t ecx_5 = *(eax_1 + 8)
                                    
                                    if (sub_531280(*(ecx_5 + (j << 3)), edx_1, &data_8c00ec)
                                            == data_30d74e0)
                                        void* edi_4 = *(ecx_5 + (j << 3) + 4)
                                        *(edi_4 + 4) = 0
                                        *(edi_4 + 8) = 0
                                        *(edi_4 + 0x15c) = 0
                                    
                                    eax_1 = var_8_1 + *ebx_1
                                    j += 1
                                while (j s< *(eax_1 + 4))
                            
                            var_8_1 += 0xc
                            i = i_1 + 1
                            i_1 = i
                        while (i s< *(ebx_1 + 4))
                        
                        esi = var_10
            else
                void* edi_2 = *(edi_1 + 4)
                *(edi_2 + 4) = 0
                *(edi_2 + 8) = 0
                *(edi_2 + 0x15c) = 0
            
            esi += 1
            var_10 = esi
            
            if (esi s>= *arg1)
                break
            
            continue
    
    return i
}
