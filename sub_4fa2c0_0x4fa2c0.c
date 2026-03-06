// 函数名称: sub_4fa2c0
// 虚拟地址: 0x4fa2c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4fa2c0(int32_t arg1, char arg2)
{
    // 第一条实际指令: void* eax = sub_4fc3d0(&data_be1cb8, arg1)
    void* eax = sub_4fc3d0(&data_be1cb8, arg1)
    void* result = sub_4f4890(*(eax + 4))
    int32_t ecx = 0
    void* result_1 = result
    void* result_2 = nullptr
    
    if (*(result + 4) s> 0)
        void* esi_2 = eax + 0x30
        int32_t var_c_1 = 0
        void* var_14_1 = esi_2
        
        while (true)
            void* edi_1 = *result
            int32_t ebx_1 = *(edi_1 + ecx + 8)
            int32_t* edi_2 = edi_1 + ecx
            
            if (ecx s>= 0x11800)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_1 = *esi_2
            int128_t* var_8_1
            int128_t* ecx_2
            
            if (edx_1 != 0)
                int128_t* eax_2 = sub_4fc1e0(ecx, edx_1)
                var_8_1 = eax_2
                ecx_2 = eax_2
            else
                int128_t* eax_1
                eax_1, edx_1 = sub_4fc0d0()
                *(eax_1 + 4) = ebx_1
                *esi_2 = *(eax_1 + 0x1bc)
                ecx_2 = eax_1
                var_8_1 = ecx_2
            
            int32_t eax_3 = edi_2[1]
            
            if (eax_3 == 2)
                int32_t eax_7
                int32_t edx_2
                
                if (ecx_2[0x12].d s<= *ecx_2)
                    eax_7 = edi_2[0x23]
                    edx_2 = edi_2[0x22]
                else
                    eax_7 = *(ecx_2 + 0x12c)
                    edx_2 = ecx_2[0x13].d
                
                int32_t ebx_2 = 0
                
                if (eax_7 s> 0)
                    do
                        int32_t esi_3 = 0
                        
                        if (edx_2 s> 0)
                            do
                                int32_t var_2c = ebx_2
                                int32_t var_28_1 = esi_3
                                sub_4fa2c0(*(sub_4f7720(&var_2c, edi_2, ecx_2) + 0x434), arg2.d)
                                ecx_2 = var_8_1
                                esi_3 += 1
                            while (esi_3 s< edx_2)
                        
                        ebx_2 += 1
                    while (ebx_2 s< eax_7)
                    
                    esi_2 = var_14_1
            else if (eax_3 == 5)
                edx_1.b = arg2
                *(ecx_2 + 0x22) = edx_1.b
            
            var_c_1 += 0x118
            result = result_2 + 1
            esi_2 += 4
            result_2 = result
            var_14_1 = esi_2
            
            if (result s>= *(result_1 + 4))
                break
            
            ecx = var_c_1
            result = result_1
    
    return result
}
