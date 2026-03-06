// 函数名称: sub_4dbd80
// 虚拟地址: 0x4dbd80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4dbd80(int32_t* arg1)
{
    // 第一条实际指令: void* eax = sub_54c910(arg1)
    void* eax = sub_54c910(arg1)
    void* entry_ebx
    void* result = (*(*data_3078804 + 0x28))(*(entry_ebx + 0x2c))
    
    if (result.b == 0)
        if (*(entry_ebx + 8) != 4)
            sub_4c5870("mesh.vertexFormat == VERTEX_FORMAT_POS_NORM_COL_TEX", &data_83f3d3, 
                "Draw3d.cpp", 0x158, "BindInstanceBuffersMesh")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t ecx_1 = *(entry_ebx + 0x14)
        int32_t esi_5 = *(entry_ebx + 0xc) * 0x28
        int32_t edi_2 = *(eax + 0x2c) * esi_5
        int32_t var_24_1 = esi_5
        int32_t var_20_1 = edi_2
        void* result_2 = sub_4cce80(edi_2)
        void* result_1 = result_2
        int32_t i_3 = 0
        
        if (*(eax + 0x2c) s> 0)
            void* result_3 = result_2
            int32_t i
            
            do
                int32_t j_2 = 0
                
                if (*(entry_ebx + 0xc) s> 0)
                    void* result_4 = result_3
                    int32_t edx_2 = ecx_1
                    int32_t j
                    
                    do
                        __builtin_memcpy(result_4, edx_2, 0x24)
                        *(result_4 + 0x24) = i_3
                        j = j_2 + 1
                        edx_2 += 0x24
                        result_4 += 0x28
                        j_2 = j
                    while (j s< *(entry_ebx + 0xc))
                    edi_2 = var_20_1
                    esi_5 = var_24_1
                
                result_3 += esi_5
                i = i_3 + 1
                i_3 = i
            while (i s< *(eax + 0x2c))
            result_2 = result_1
        
        *(entry_ebx + 0x2c) = (*(*data_3078804 + 0x24))(result_2, edi_2, 0xc, 0)
        result = result_1
        
        if (result != 0)
            result = _aligned_free_base(result)
    
    if (*(entry_ebx + 0x18) s> 0)
        result = (*(*data_3078804 + 0x34))(*(entry_ebx + 0x30))
        
        if (result.b == 0)
            int32_t eax_9 = *(entry_ebx + 0x1c)
            
            if (eax_9 != *(entry_ebx + 0x18) * 2)
                sub_4c5870("MeshUsesDefIndex16(mesh)", &data_83f3d3, "Draw3d.cpp", 0x171, 
                    "BindInstanceBuffersMesh")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edi_5 = *(eax + 0x2c) * eax_9
            int32_t var_1c_2 = edi_5
            int32_t esi_7 = sub_4cce80(edi_5)
            int32_t eax_14 = *(eax + 0x2c)
            int32_t var_24_2 = esi_7
            
            if (*(entry_ebx + 0xc) * eax_14 s> 0xffff)
                sub_4c5870("mesh.vertexCount * shaderDef->instanceCount <= 0xFFFF", &data_83f3d3, 
                    "Draw3d.cpp", 0x176, "BindInstanceBuffersMesh")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t i_1 = 0
            int32_t i_2 = 0
            
            if (eax_14 s> 0)
                do
                    int32_t j_1 = 0
                    int16_t ecx_11 = (*(entry_ebx + 0xc)).w * i_1.w
                    
                    if (*(entry_ebx + 0x18) s> 0)
                        do
                            edi_5.w = *(*(entry_ebx + 0x20) + (j_1 << 1))
                            esi_7 = var_24_2
                            edi_5.w += ecx_11
                            *(esi_7 + ((*(entry_ebx + 0x18) * i_1 + j_1) << 1)) = edi_5.w
                            i_1 = i_2
                            j_1 += 1
                        while (j_1 s< *(entry_ebx + 0x18))
                        
                        edi_5 = var_1c_2
                    
                    i_1 += 1
                    i_2 = i_1
                while (i_1 s< *(eax + 0x2c))
            
            result = (*(*data_3078804 + 0x30))(esi_7, edi_5, 0, 0, *(entry_ebx + 0x2c))
            *(entry_ebx + 0x30) = result
            
            if (esi_7 != 0)
                return _aligned_free_base(esi_7)
    
    return result
}
